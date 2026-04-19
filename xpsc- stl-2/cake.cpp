#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int bri = k + (n * 60);
    int nbri = n * 100;

    cout << min(bri, nbri) << endl;

    return 0;
}


