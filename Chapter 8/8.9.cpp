#include <iostream>
#include "VIGENERE_H.h"

using namespace std;

int main()

{

int i, x;

string str;
string key = "Jaguar";
Vigenere obj;

obj.setKey(key);

cout << "The coding key is: " << endl;
cout << "Jaguar" << endl;
cout << "The decoding key is:\t " << obj.getDecodingKey();
cout << "Enter message to be encoded:" >> endl;

getline(cin, str);

str = (string)obj.encode(str);

cout << "The encoded message is:"<<str << endl;
cout << "Let us see if we can recover the original message" << endl << "The decrypted message is:"<<(string)obj.decode(str) << endl;
cin >> x;

}