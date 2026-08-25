#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mpp;
        queue<int>q;

        for(int i=0;i<s.size();i++){
            if(mpp.find(s[i])==mpp.end()){
                q.push(i);
            }
            mpp[s[i]]++;

            while(q.size()>0 && mpp[s[q.front()]]>1){
                q.pop();
            }
        }
          return q.empty()?-1:q.front();
    }
};

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

    Solution obj;

    int result = obj.firstUniqChar(s);

    cout << "Index of first unique character: " << result << endl;

    return 0;
}