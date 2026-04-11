#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;
bool parbo(int day)
{
    int koto = 0;
    for(int i=0; i<n; i++)
    {
        int person = a[i]/day;
        koto += person;
    }

    if(koto >= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cin >> n >> m;
    a.resize(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int l=1, r=*max_element(a.begin(), a.end());
    int duration = 0;
    while (l<=r)
    {
        int day = (l+r)/2;
        if(parbo(day)==true)
        {
            duration = day;
            l = day+1;

        }
        else
        {
            r = day - 1;
        }
    }
    cout << duration << endl;

    return 0;
}

