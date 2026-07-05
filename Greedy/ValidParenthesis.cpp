#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0, maxOpen = 0;

        for (char c : s) {
            if (c == '(') {
                minOpen++;
                maxOpen++;
            }
            else if (c == ')') {
                minOpen--;
                maxOpen--;
            }
            else {
                minOpen--;
                maxOpen++;
            }

            if (minOpen < 0)
                minOpen = 0;

            if (maxOpen < 0)
                return false;
        }

        return minOpen == 0;
    }
};

int main() {
    int n;
    cout << "Enter the size of the string: ";
    cin >> n;

    string s;
    cout << "Enter the string: ";
    cin >> s;

    Solution obj;

    if (obj.checkValidString(s))
        cout << "Valid String";
    else
        cout << "Invalid String";

    return 0;
}