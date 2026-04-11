#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> a(n), nd;
        int ct = 0;
        long long et = 0;

        for(int i = 0; i< n; i++)
        {
            cin >> a[i];

            if(a[i] >= x)
            {
                ct++;
                et = et + (a[i] - x);
            }
            else
            {
                nd.push_back(x - a[i]);
            }
        }

        sort(nd.begin(), nd.end());
        for(int i = 0; i<nd.size(); i++)
        {
            if(et >= nd[i])
            {
                et = et - nd[i];
                ct = ct + 1;
            }
            else
            {
                break;
            }
        }

        cout << ct << endl;

    }
    

    return 0;
}


