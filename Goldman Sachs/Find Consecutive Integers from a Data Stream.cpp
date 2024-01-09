#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class DataStream
{
    int val, k;
    int count = 0;
    unordered_map<int, int> mp;
    queue<int> q;

public:
    DataStream(int value, int k)
    {
        val = value;
        this->k = k;
    }

    bool consec(int num)
    {
        count++;
        if (count < k)
        {
            mp[num]++;
            q.push(num);
            return false;
        }
        else if (count > k)
        {
            int x = q.front();
            q.pop();
            mp[num]++;
            mp[x]--;
            q.push(num);
            if (mp[val] == k)
                return true;
            return false;
        }
        else
        {
            mp[num]++;
            q.push(num);
            if (mp[val] == k)
                return true;
            return false;
        }
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
int main()
{
    DataStream *obj = new DataStream(1, 3);
    cout << obj->consec(1) << endl;
    cout << obj->consec(2) << endl;
    cout << obj->consec(3) << endl;
    cout << obj->consec(4) << endl;
    cout << obj->consec(5) << endl;
    cout << obj->consec(6) << endl;
    cout << obj->consec(7) << endl;
    cout << obj->consec(8) << endl;
    cout << obj->consec(9) << endl;
    return 0;
}