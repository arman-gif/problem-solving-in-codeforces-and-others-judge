#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int sum;
    int cst1 = N * 100;
    int cst2 = K + (N * 60);

    if(cst1 < cst2)
    {
        sum = cst1;
    }
    else
    {
        sum = cst2;
    }

    cout << sum;

    return 0;
}


