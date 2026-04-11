#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int sum;
    if(N >= 5)
    {
        sum = N * 85;
    }
    else
    {
        sum = N * 100;
    }

    cout << sum;

    return 0;
}


