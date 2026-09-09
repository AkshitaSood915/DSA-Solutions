#include <bits/stdc++.h>
using namespace std;

  int removeDuplicates(int arr[],int n){
    if (n == 0)
        return 0;
     int i=0;
     for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
     }
     return (i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int m=removeDuplicates(arr,n);
    cout<<"The array after removing duplicates is ";
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}