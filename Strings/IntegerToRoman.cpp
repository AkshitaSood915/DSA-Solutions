#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    int num;

    cout << "Enter an integer: ";
    cin >> num;

    vector<int> val{1000,900,500,400,100,90,50,40,10,9,5,4,1};

    vector<string> sym{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string result = "";

    for(int i = 0; i < 13; i++) {

        if(num == 0)
            break;

        int times = num / val[i];

        while(times--) {
            result += sym[i];
        }

        num = num % val[i];
    }

    cout << "Roman numeral: " << result << endl;

    return 0;
}