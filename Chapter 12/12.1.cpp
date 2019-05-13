#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int swap(int *a, int *b) {
int t = *a;
*a = *b;
*b = t;
}

int pivIndex(int arr[], int l, int r) {

int x = arr[r], i = l;

for (int j = l; j <= r - 1; j++) {
if (arr[j] <= x) {
swap(&arr[i], &arr[j]);
i++;
}
}
swap(&arr[i], &arr[r]);
return i;
}

int qSelect(int arr[], int k, int l, int r) {

if (k > 0 && k <= r - l + 1) {

int p = pivIndex(arr, l, r);

if (p - l > k - 1)
return qSelect(arr, k, l, p - 1);

   else if(p - l < k - 1)
   return qSelect(arr, k - p + l - 1, p + 1, r);
  
  
return arr[p];
}

return INT_MAX;
}

int main() {
int n;
cout<<"Enter the size of array: ";
cin>>n;
int *arr = new int[n];
cout<<"Enter n elements in array: "<<endl;
for(int i = 0; i < n ; i++) {
cin>>arr[i];
}
int k = n/2+1;
cout << "Median element is: "<< qSelect(arr, k, 0, n - 1)<<endl;
return 0;
}