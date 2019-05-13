#include<iostream>

using namespace std;

string a[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void fun(int z[], int n, int k, string s) {
    int i,j;
    if(s.size()==n) {
        cout<<s<<" ";
        return;
    }
    for(i=k;i<n;i++) {
        for(j=0;j<a[z[i]-1].size();j++) {
            s = s + a[i][j];
            fun(z,n,i+1,s);
            s.erase(s.begin()+s.size()-1);
        }
    }
    return;
}

int main() {
    int n = 3;
    int z[] ={2, 3, 4};
    string s = "";
    fun(z,n,0,s);
    cout<<endl;
    return 0;
}