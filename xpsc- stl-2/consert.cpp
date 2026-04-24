#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    multiset<int> ticks;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ticks.insert(x);
    }

    for(int i = 0; i < m; i++)
    {
        int t;
        cin >> t;

        auto it = ticks.upper_bound(t);
        if(it == ticks.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            it--;
            cout << *it << endl;
            ticks.erase(it);
        }
    }

    return 0;
}


