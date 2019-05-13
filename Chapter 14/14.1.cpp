#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class double_clist
{
public:
node *create_node(int);
void insert_begin();
void insert_last();

double_clist() {
start = NULL;
last = NULL;   
}
};

int main() {
int choice;
double_clist cdl;
    while (1) {
cout<<"Operations on Doubly Circular linked list"<<endl;
cout<<"1.Insert at Beginning"<<endl;
cout<<"2.Insert at Last"<<endl;
cout<<"3.Exit"<<endl;
cout<<"Enter your choice : ";
cin>>choice;
switch(choice) {
    case 1:
    cdl.insert_begin();
    break;
    case 2:
    cdl.insert_last();
    break;
exit(1);
default:
}
}
return 0;
}

node* double_clist::create_node(int value) {
counter++;  
struct node *temp;
temp = new(struct node);
temp->info = value;
temp->next = NULL;
temp->prev = NULL;
return temp;
}

void double_clist::insert_begin() {
int value;
cout<<endl<<"Enter the element to be inserted: ";
cin>>value;
struct node *temp;
temp = create_node(value);

    if (start == last && start == NULL) {   
cout<<"Element inserted in empty list"<<endl;
start = last = temp;
start->next = last->next = NULL;
start->prev = last->prev = NULL;
}

    else {
temp->next = start;
start->prev = temp;
start = temp;
start->prev = last;
last->next = start;
cout<<"Element inserted"<<endl;
}
}

void double_clist::insert_last() {
int value;   
cout<<endl<<"Enter the element to be inserted: ";
cin>>value;
struct node *temp;
temp = create_node(value);

    if (start == last && start == NULL) {
cout<<"Element inserted in empty list"<<endl;
start = last = temp;
start->next = last->next = NULL;   
start->prev = last->prev = NULL;
}

    else {
last->next = temp;
temp->prev = last;
last = temp;
start->prev = last;
last->next = start;
}
}
