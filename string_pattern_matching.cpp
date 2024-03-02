#include <iostream>
#include <vector>
using namespace std;

bool isPatternMatching(string pattern, string input){
    vector<int> base;
    vector<int> inputBase;
    char currentChar = pattern[0];
    int currentCharCount = 0;
    for(int i = 0; i < pattern.size(); i++){
        if(pattern[i] != currentChar){
            base.push_back(currentCharCount);
            currentChar = pattern[i];
            currentCharCount = 1;
        } else {
            currentCharCount++;
        }
        if(i ==  pattern.size()-1){
            if(pattern[i] != currentChar) {
                currentCharCount = 1;
            }
            base.push_back(currentCharCount);
        }
    }
    currentChar = input[0];
    currentCharCount = 0;
    for(int i = 0; i < input.size(); i++){
        if(input[i] != currentChar){
            inputBase.push_back(currentCharCount);
            if(inputBase[inputBase.size()-1] != base[inputBase.size()-1]){
                return false;
            }
            currentChar = input[i];
            currentCharCount = 1;
        } else {
            currentCharCount++;
        }
        if(i ==  input.size()-1){
            if(input[i] != currentChar) {
                currentCharCount = 1;
            }
            inputBase.push_back(currentCharCount);
            if(inputBase[inputBase.size()-1] != base[inputBase.size()-1]){
                return false;
            }
        }
    }
    if(inputBase.size() != base.size()){
        return false;
    }
    return true;
    
}

vector<string> findMatchedWords(vector<string> dict,string pattern)
{       
        vector<string> result;
        for (string x : dict) {
            if (isPatternMatching(pattern, x)){
                result.push_back(x);
            }
        }
       return result;
}

int main() {
    cout << "Enter array length" << endl;
    int n;
    cin>>n;
    vector<string> s(n);
    cout << "Enter array elements one by one" << endl;
    for(int i=0;i<n;i++)
        cin>>s[i];
    
    string tt;
    cout << "Enter string pattern to match" << endl;
    cin>>tt;
    
    vector<string> res = findMatchedWords(s,tt);
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}