#include <iostream>
#include <fstream>
#include <string.h>
#include <set>
#include <iterator>
#include <typeinfo>
#include <map>

using namespace std;

int main() {
    
string file;
cout << "Enter the  file name: ";
cin >> file;

ifstream inFile(file);

map<string, int> cWord;   
string word;

while(inFile >> word) {
    ++cWord[word];
}
for (map<string, int>::iterator it = cWord.begin(); it != cWord.end(); ++it) {
    cout << it->first <<" : "<< it->second << endl;
}


return 0;
}