#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution{
    public:

    static bool cmp(Item a, Item b){
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }

    double fractionalKnapsack(Item arr[],int W, int n){

        sort(arr,arr+n,cmp);

        int totalVal=0;

        for(int i=0;i<n;i++){
            if(arr[i].weight<=W){
                totalVal+=arr[i].value;
                W-=arr[i].weight;
            }

            else{
                totalVal+=(arr[i].value/((double) arr[i].weight)*(double) W);
                break;
             }
        }
        return totalVal;
    }
};
int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item arr[n];

    cout << "Enter value and weight of each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i].value >> arr[i].weight;
    }

    int W;
    cout << "Enter knapsack capacity: ";
    cin >> W;

    Solution obj;

    cout << "Maximum value = "
         << obj.fractionalKnapsack(arr, W, n);

    return 0;
}