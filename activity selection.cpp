#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> x, pair<int, int> y)
{
    return x.second < y.second;
}
vector<pair<int, int>> acti;

int maxact(vector<pair<int, int>> activity)
{

    int count = 0;
    int v = INT_MIN;
    for (auto ac : activity)
    {
        if (ac.first > v)
        {
            count++;
            v = ac.second;
            acti.push_back({ac.first, v});
        }
    }

    return count;
}
int main()
{
    int n, x, y;
    cin >> n;

    vector<pair<int, int>> activity;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        activity.push_back({x, y});
    }
    sort(activity.begin(), activity.end(), cmp);
    cout << maxact(activity) << endl;
    for (auto it : acti)
        cout << it.first << " " << it.second << endl;
}