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

        int sum = 1;
        for(int i = 0; i < n/ 2; i++)
        {
            if(s[i] == '?' && s[n - 1 -i] == '?')
            {
                sum = 0;
                break;
            }
        }

        if(n % 2 == 1 && s[n / 2] == '?')
        {
            sum = 0;
        }

        if(sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}




