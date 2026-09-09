#include <bits/stdc++.h>
using namespace std;

 bool isSorted(int arr[], int n) {

    for(int i = 1; i < n; i++) {
        if(arr[i-1] > arr[i]) {
            return false;
        }
    }

    return true;
}
int main(){
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result= isSorted(arr,n);

    if(result){
        cout<<"The array is sorted";
    }
   else{
    cout<<"The array is not sorted";
   }
   return 0;
}