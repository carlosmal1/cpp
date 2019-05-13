#ifndef VIGENERE_H
#define VIGENERE_H
#include <string>

using namespace std;

class Vigenere {

public:
Vigenere(const string &K = "lamon") {

key = K;

};

string getkey() {

return key;

};

string getDecodingKey() {

char decodeKey[6];

    for (int i = 0; i < key.length(); i++) {

    if ((int)key[i] == 97)
        decodeKey[i] = char((int)key[i]);

    else
        decodeKey[i] = char(122-(((int)key[i]) - 97 -1));

}

string tempStr;
tempStr = (string)decodeKey;
tempStr = tempStr.substr(0, key.length());
return tempStr;
};

void setKey(string &newKey) {
key = newKey;

};

string encode(string &message) {
return cipher(message, key);

};

string decode(string &message) {
return cipher(message, getDecodingKey());

};

char shift(char c, char codeLetter) {

    if ((int)c == 32)
        return char(32);

    if (((int)codeLetter + (int)c - 97) <= 122)
        return char((int)codeLetter + (int)c - 97);

    else
        return char((int)codeLetter + (int)c - 123);

};

private :
string key;
string cipher(string &message, string &code) {

char resultMessage[1000];
int j = 0;

    for (int i = 0; i < message.length(); i++) {

        if (i <= 5)
        j = i;

        else
        j = 0;

resultMessage[i] = shift(message[i], code[j]);
j++;

}

string tempStr;
tempStr = (string)resultMessage;
tempStr = tempStr.substr(0, message.length());
return tempStr;
};
};

#endif