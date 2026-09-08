#include <iostream>
#include <algorithm>
using namespace std;

int maxOutput(int n) {
    int temp = n;
    int sum = 0;

    int minPositive = 10;
    int maxNegative = -1;

    bool positive = true;

    while (temp > 0) {
        int digit = temp % 10;
        temp = temp / 10;

        if (positive) {
            sum += digit;
            minPositive = min(minPositive, digit);
        }
        else {
            sum -= digit;
            maxNegative = max(maxNegative, digit);
        }

        positive = !positive;
    }

    if (maxNegative > minPositive) {
        sum += 2 * (maxNegative - minPositive);
    }

    return sum;
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    int result = maxOutput(n);

    cout << "Maximum output: " << result << endl;

    return 0;
}