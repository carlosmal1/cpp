#include<iostream>

using namespace std;

typedef struct node{
string data;
struct node *next;
}Node;

class sList{
Node *head;
int size_;

public:
  sList(){
   head = NULL;
   size_ = 0;
  }
  void append(string data){
   Node *temp = new Node;
   temp->data = data;
   temp->next = NULL;
   if(size_ == 0 && head == NULL){
    head = temp;
    size_++;
    return;
   }
   Node *tmp = head;
   while(tmp->next != NULL){
    tmp = tmp->next;
   }
   tmp->next = temp;
   size_++;
  }
  void remove(string data){
   if(head == NULL){
   }
   Node *temp = head;
   Node *prev = NULL;
   while(temp != NULL){
    if(temp->data == data){
     if(prev == NULL){
      head = temp->next;
      delete temp;
      size_--;
      return;
     }
     prev->next = temp->next;
     delete temp;
     size_--;
     return;
    }
    prev = temp;
    temp = temp->next;
   }

  }

   }
   Node *temp = head;
   while(temp != NULL){
    cout<<temp->data;
    if(temp->next != NULL){
     cout<<"->";
    }
    temp = temp->next;
   }
  }
};


return 0;
}