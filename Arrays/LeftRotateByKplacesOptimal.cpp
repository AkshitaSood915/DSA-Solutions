#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d) {

    d = d % n;

    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main() {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;

    cout << "Enter number of places to rotate: ";
    cin >> d;

    leftRotate(arr, n, d);

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}