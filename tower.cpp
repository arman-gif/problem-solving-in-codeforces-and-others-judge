#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> twr;
    for(int i = 0; i< n; i++)
    {
        int x;
        cin >> x;

        auto it = upper_bound(twr.begin(), twr.end(), x);
        if(it == twr.end())
        {
            twr.push_back(x);
        }
        else
        {
            *it = x;
        }
    }

    cout << twr.size() << endl;

    return 0;
}


