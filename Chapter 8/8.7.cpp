#include <iostream>
#include <fstream>
#include<iomanip>

using namespace std;

void encr(string,istream&,ostream&);
void decr(string,istream&,ostream&);
string adj(string);
int main(int argc, char * argv[]) {
    
    ifstream in;
    ofstream out;
    string key;

in.open(argv[3]);

    if(in.fail()) 
    { cout<<"file did not open";
    system("pause");
    return 1;

     }
out.open(argv[4]);
key=argv[2];

    if(key[0]!='-'&&key[1]!='k')
     {cout<<"missing key\nprogram end";
     return 1;
     }

key=adj(key);
cout<<key<<endl;

    if(strcmp(argv[1],"-d")==0)
      decr(key,in,out);
    else
      encr(key,in,out);     

in.close();
out.close();
return 0;
}

string adj(string key) {
    int count[26]={0};
    char c;
    int i;
    bool found;
    string newkey="";

    for(i=2;key[i]!='\0';i++)
      {key[i]=toupper(key[i]);
       count[key[i]-'A']++;
      }
    for(i=0;i<26;i++)
        cout<<(char)('A'+i)<<" "<<count[i]<<endl;
    for(i=2;key[i]!='\0';i++)
        if(count[key[i]-'A']!=0)
          {newkey=newkey+key[i];
          count[key[i]-'A']=0;
          }
int len=newkey.length();
    for(c='Z';c>='A';c--)
     {found=false;
     cout<<newkey<<" "<<newkey.length()<<endl;
      for(i=0;i<len;i++)
          if(c==key[i])
             {found=true;
             cout<<c<<" "<<i<<endl;
             }
      cout<<c<<" "<<found<<endl;      
      if(!found)     
          newkey=newkey+c;
     }   
cout<<newkey<<endl;     
return newkey;

}
    void encr(string w,istream& in,ostream& out) {
    string buffer;
    int i;
    getline(in,buffer);

while(in) {
     for(i=0;buffer[i]!='\0';i++)
          if(isalpha(buffer[i]))
               {out<<w[toupper(buffer[i])-'A'];
               cout<<toupper(buffer[i])-'A'<<" "<<w[toupper(buffer[i])-'A']<<" "<<i<<" "<<buffer[i]<<endl;
               }
          else
               out<<buffer[i];
     out<<endl;
     getline(in,buffer);
     }
}
void decr(string w,istream& in,ostream& out)
{string buffer;
int i,j;
getline(in,buffer);
while(in)
    {
     for(i=0;buffer[i]!='\0';i++)
          if(isalpha(buffer[i]))
               {for(j=0;j<w.length();j++)
                    if(toupper(buffer[i])==w[j])
                        out<<(char)('A'+j);
                    
               }
          else
               out<<buffer[i];
     out<<endl;
     getline(in,buffer);
     }
}