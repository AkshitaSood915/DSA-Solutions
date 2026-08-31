#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int openBrac = 0;
        int result = 0;

        for(char &ch : s) {
            
            if(ch == '(') {
                openBrac++;
            }
            else if(ch == ')') {
                openBrac--;
            }

            result = max(result, openBrac);
        }

        return result;
    }
};

int main() {
    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    Solution obj;

    cout << "Maximum nesting depth: " << obj.maxDepth(s) << endl;

    return 0;
}