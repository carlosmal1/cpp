#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void count_frequencies(string str,int list[],int size) {

    for(int i=0; i<str.length(); i++) {
       if(str[i]>='A' && str[i]<='Z')
       list[str[i]-'A']++;
       else if(str[i]>='a' && str[i]<='z')
       list[str[i]-'a']++;
       else continue;
   }
}
int main() {

ifstream infile;
string file_name;
int list[26] = { 0 };
string str;

cout <<"Enter file name :";
cin >> file_name; cout << endl;
infile.open(file_name.c_str());

    if(!infile) {

       cout <<"Unable to open file:" << endl;
       return 0;
   }
   while(!infile.eof()) {
       infile >> str;
       count_frequencies(str,list, 26);
   }
    infile.close();
   int max = list[0];
   for(int i=0; i<26; i++) {
   cout << static_cast<char> (i+'a') << list[i] << endl;
   if(list[i] > max ) max = list[i];
   }
    cout <<"Most occuring letter is " << static_cast<char> (max+'a') << endl;
    cout <<"E is Encrypted to " << static_cast<char> (max+'a') << endl;

}