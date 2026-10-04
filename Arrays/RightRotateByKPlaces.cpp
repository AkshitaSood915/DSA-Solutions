#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n, int k) {
    k = k % n;

    int temp[k];

    for (int i = n - k; i < n; i++) {
        temp[i - (n - k)] = arr[i];
    }

    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    rightRotate(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}