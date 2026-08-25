#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution { 
public: 
    int compress(vector<char>& chars) { 
        int n=chars.size(); 
        int idx=0; 
 
        for(int i=0;i<n;i++){ 
            char ch=chars[i]; 
            int count=0; 
 
            while(i<n && chars[i]==ch){ 
                count++; 
                i++; 
            } 
             if(count==1){ 
                chars[idx++]=ch; 
             } 
             else{ 
                chars[idx++]=ch; 
                string str=to_string(count); 
                for(char digit:str){ 
                    chars[idx++]=digit; 
                } 
             } 
             i--; 
        } 
        chars.resize(idx); 
        return idx; 
    } 
};

int main() {
    int n;
    
    cout << "Enter the number of characters: ";
    cin >> n;

    vector<char> chars(n);

    cout << "Enter the characters: ";
    for(int i=0; i<n; i++) {
        cin >> chars[i];
    }

    Solution obj;

    int result = obj.compress(chars);

    cout << "Compressed length: " << result << endl;
    cout << "Compressed array: ";

    for(int i=0; i<result; i++) {
        cout << chars[i] << " ";
    }

    cout << endl;

    return 0;
}