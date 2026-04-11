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
        for(int i =0; i<n; i++)
        {
            cin >> a[i];
        }

        vector<bool> fre(n+ 1, false);
        int ans = 0;

        for(int i= n- 1; i>=0; i--)
        {
            if(fre[a[i]])
            {
                ans = i + 1;
                break;
            }
            fre [a[i]] = true;
        }

        cout << ans << endl;
    }
    

    return 0;
}



