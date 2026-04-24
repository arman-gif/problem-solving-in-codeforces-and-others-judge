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
        vector<int> a(n);
        for(int i=0; i< n; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());
        int len = 0, sum = 0;
        for(int i= 0; i<n; i++)
        {
            sum += a[i];
            if(sum >= 0)
            {
                len++;
            }
        }

        cout << len << endl;

    }
    

    return 0;
}




