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

        int scr;
        bool gd = true;

        for(int i= 0; i< n; i++)
        {
            cin >> scr;
            if(scr <= 4)
            {
                gd = false;
            }
        }

        if(gd)
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



