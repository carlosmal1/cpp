#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
void rFile1();
void rFile2();

int main () {
rFile1();
rFile2();

return 0;
}

void rFile1() {
    string line;
ifstream myfile ("girls.txt");
    int count =0;

    bool flag = false;
if (myfile.is_open()) {
    while ( myfile.good() ) {
        count++;
      getline (myfile,line);
    }
    myfile.close();
}

else cout << "Unable to open file";
}

void rFile2() {
    string line;
ifstream myfile ("boys.txt");
    int count =0;

    bool flag = false;
if (myfile.is_open()) {
    while ( myfile.good() ) {
        count++;
      getline (myfile,line);
    }
    myfile.close();
}
else cout << "Unable to open file";
}