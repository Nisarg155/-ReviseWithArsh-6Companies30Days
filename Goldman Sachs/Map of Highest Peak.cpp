#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& W) {
        int n = W.size();
        int m = W[0].size();
        vector<vector<int>> ans(n,vector<int>(m,-1));
        queue<pair<int,int>> q;
        for(int i = 0;i<n ;i++ )
        {
            for(int j = 0;j<m;j++)
            {
                if(W[i][j] == 1){
                     ans[i][j] = 0;
                     q.push({i,j});
                }
            }
        }

        while(!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            int v = ans[i][j];
            q.pop();
            int dr[] = {-1,0,0,1};
            int dc[] = {0,-1,1,0};
            for(int k = 0;k<4;k++)
            {
                int r = dr[k] + i;
                int c = dc[k] + j;

                if(r < n && r >= 0 && c < m && c >= 0 )
                {
                    if(ans[r][c] == -1)
                    {
                        ans[r][c] = v+1;
                        q.push({r,c});
                    }
                }
            }
        }

        return ans;        
    }
};

int main()
{
    Solution s;
    vector<vector<int>> W = {{0,1},{0,0}};
    vector<vector<int>> ans = s.highestPeak(W);
    for(auto i : ans)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}