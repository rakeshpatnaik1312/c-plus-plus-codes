//Even or odd program
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even"
             << "\n";
    }
    else
    {
        cout << "Odd"
             << "\n";
    }
}
int main()
{
    int t = 1;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    //cin>>t;
    while (t--)
    {
        solve();
    }
}