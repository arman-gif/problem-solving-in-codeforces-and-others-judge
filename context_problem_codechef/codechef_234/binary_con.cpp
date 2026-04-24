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
        string s(n, '0');
        s[n-1] = '1';
        if(n>2)
        {
            s[0] = '1';
        }

        cout << s << endl;

    }
    

    return 0;
}


