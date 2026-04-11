#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        map<long long , long long> mp;
        vector<long long> modified_a(n);
        for(int i =0; i<n; i++)
        {
            modified_a[i] = a[i] - (i+1);
            mp[modified_a[i]]++;
        }

        long long total_count = 0;
        for(auto [val, cnt]: mp)
        {
            total_count += cnt * (cnt-1)/2;
        }

        cout << total_count << endl;

    }
    

    return 0;
}


