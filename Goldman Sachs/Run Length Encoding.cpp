//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;

        cout << encode(str) << endl;
    }
    return 0;
}
// } Driver Code Ends

/*You are required to complete this function */

string encode(string src)
{
    // Your code here
    string sol = "";
    char curr_ch = src[0];
    int sum = 1;

    int n = src.size();
    for (int i = 1; i < n; i++)
    {
        if (src[i] == curr_ch)
        {
            sum++;
        }
        else
        {
            sol += curr_ch + to_string(sum);
            sum = 1;
            curr_ch = src[i];
        }
    }

    sol += curr_ch + to_string(sum);

    return sol;
}
