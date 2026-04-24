#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> mk(n, 0);
        for(int i = 1; i<n - 1; i++)
        {
            if(s[i - 1] == '1' && s[i] == '1' && s[i + 1] == '1')
            {
                mk[i - 1] = 1;
                mk[i] = 1;
                mk[i + 1] = 1;
            }
        }

        bool sd = true;
        for(int i = 0; i< n; i++)
        {
            if(mk[i] != (s[i] - '0'))
            {
                sd = false;
                break;
            }
        }

        if(sd)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}


