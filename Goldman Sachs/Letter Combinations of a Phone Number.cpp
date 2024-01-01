#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> number(char digit)
    {
        vector<string> s;
        switch(digit)
        {
            case '2': s= {"a","b","c"};
            break;
            case '3': s = {"d","e","f"};
            break;
            case '4': s = {"g","h","i"};
            break;
            case '5': s = {"j","k","l"};
            break;
            case '6': s = {"m","n","o"};
            break;
            case '7': s = {"p","q","r","s"};
            break;
            case '8': s = {"t","u","v"};
            break;
            case '9': s = {"w","x","y","z"};
            break;
        }

        return s;
    }

    void merge_str(vector<string> &s,vector<string> &tp)
    {
        int n = s.size();
        int m = tp.size();
        vector<string> temp ;

        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                temp.push_back(s[i] + tp[j]);
            }
        }

        s = temp;
    }
    vector<string> letterCombinations(string digits) {

        vector<string> s ;
        if(digits == "") return s;
        s = number(digits[0]);
        int n = digits.size();
        for(int i= 1 ;i<n;i++)
        {
            vector<string> tp = number(digits[i]);
            merge_str(s,tp);   
        }

        return s;
        
    }
};


int main()
{
    string s;
    cin>>s;
    Solution sol;
    vector<string> ans = sol.letterCombinations(s);
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}