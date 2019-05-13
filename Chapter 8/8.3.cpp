#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
string filename;
cout<<"Enter the file name";
cin>>filename;
input.open(filename.c_str());
while(input.fail())
{
    cout<<"Incorrect filename";
    cin>>filename;
    input.open(filename.c_str());
}
}