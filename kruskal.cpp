#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
struct gp
{
    pair<int, int> vertex;
    int weight;
};

bool cmp(gp &x, gp &y)
{
    return x.weight < y.weight;
}
int main()
{
    int n;
    cin >> n;
    gp vr[n];
    cout<<"Before sort the input of graps \n";
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        vr[i].vertex = {x, y};
        vr[i].weight = z;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    sort(vr, vr + n, cmp);
    cout<<"After sort the input of graps according to weight \n";
     for (int i = 0; i < n; i++)
     cout<<vr[i].vertex.first<<" "<<vr[i].vertex.second<<" "<<vr[i].weight<<endl;
}