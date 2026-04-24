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
        long long int n;
        cin >> n;

        int sum = 0;
        while (n>0)
        {
            int bin = n % 2;
            sum = sum + bin;
            n = n / 2;
        }
        

        if(sum % 2 == 0)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }
    }
    
    
    return 0;
}


