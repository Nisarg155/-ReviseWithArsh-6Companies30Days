#include<bits/stdc++.h>


using namespace std;
class Solution {
public:


    void ans(int &k ,int &n , vector<vector<int>> &sol , int i , int sum , vector<int> &v)
    {
        
        if(v.size() == k)
        {
            if(sum == n ) sol.push_back(v);
            return ;
        }
        if(i > 9) return ;
        v.push_back(i);
        ans(k,n,sol,i+1,sum + i,v);
        v.pop_back();
        ans(k,n,sol,i+1,sum,v);

        return ;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> sol;
        vector<int> v;
        ans(k,n,sol,1,0,v);
        return sol;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> sol = s.combinationSum3(3,9);
    for(auto i : sol)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}