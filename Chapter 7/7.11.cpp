#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int min,max;
double avg;
int filled;
int processed;
int* array_of_pointers[1000];

int* new_array(){
   filled++;
   return array_of_pointers[filled];
}

void gather(int* p){

    for(int i=0;i<100;i++)
    *(p+i)=rand()%100;

    if(filled>=1000)
   return;

   gather(new_array());
}

int* next_array(){

    processed++;
    return array_of_pointers[processed];
}

void process(int *p){
    
    min=INT_MAX;
    max=INT_MIN;
    avg=0.0;
    for(int i=0;i<100;i++){

        min=min(min,*(p+i));
        max=max(max,*(p+i));
        avg+=(*(p+i)*1.0);
    }
    avg=avg/100.0;

    if(processed>=1000)
   return;

    process(next_array());
}
int main() {
   int a[1000][100];

    for(int i=0;i<1000;i++)
    array_of_pointers[i]=a[i];
    filled=0;
    processed=0;
}