#include <iostream>
#include <fstream>
#include <string.h>
#include <set>
#include <iterator>
#include <typeinfo>

using namespace std;

int main() {
string file;
cout << "Enter the  file name: ";
cin >> file;

ifstream inFile(file);

multiset<string> wSet = multiset<string>( istream_iterator<string>(inFile),istream_iterator<string>());

for(auto word = wSet.begin(); word != wSet.end(); word=wSet.upper_bound(*word))
    cout << *word << ": " << wSet.count(*word) << endl;

return 0;
}