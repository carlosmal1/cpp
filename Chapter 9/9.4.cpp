#include<iostream>
#include <string>
#include <vector>

using namespace std;

class Person{
   private:
       string name;
       string friends;
       
   public:
       Person() {
           int get_friend_count()
       }

       vector<Person*>PersonVector;

       Person(string fname) {
           name=fname;
           friends="";
          
       }
       void befriend(Person P) {
           friends=friends+" "+P.name;
       }
       void unfriend(Person P) {
           size_t pos = string::npos;
           while ((pos = friends.find(P.name) )!= string::npos) {  
               friends.erase(pos, P.name.length());
           }
       }
       string get_friend_names()
       {
           return friends;
       }
};
int main() {
   Person P,Q,R,S;
   P=Person("Jack");
   Q=Person("Susan");
   R=Person("Marry");
   S=Person("Anthony");
   P.befriend(Q);
   P.befriend(R);
   P.befriend(S);
   cout<<"Jack's friends : "<<P.get_friend_names()<<endl;
   cout<<"Removing friend 'Marry'"<<endl;
   P.unfriend(R);
   cout<<"Jack's friends : "<<P.get_friend_names();
  
   return 0;
}