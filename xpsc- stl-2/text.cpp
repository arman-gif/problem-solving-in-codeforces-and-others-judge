#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ml;
    for(int i =1; i<= n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    // auto it = s.begin();
    // it++;
    // it++;

    // cout << *it << '\n';

    for(auto value : ml)
    {
        cout << value << " ";
    }
    cout << '\n';

    // ml.erase(9);
    // for(auto value : ml)
    // {
    //     cout << value << " ";
    // }
    // cout << '\n';

    // auto it = ml.find(9);
    // ml.erase(it);

    // for(auto value : ml)
    // {
    //     cout << value << " ";
    // }
    // cout << '\n';

    // cout << ml.count(9) << '\n';

    

    return 0;
}


