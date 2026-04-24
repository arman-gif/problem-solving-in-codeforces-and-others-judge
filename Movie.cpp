#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, M, A, B, C;
        cin >> N >> M >> A >> B >> C;

        int com = min(N, M);
        int mov = (N - com) * A;
        int pop = (M - com) * B;
        int sum = com * C;

        int total = mov + pop + sum;
        cout << total << endl;
    }
    

    return 0;
}



