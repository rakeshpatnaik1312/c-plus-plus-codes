//Lcm of two numbers
//Store max
//If max divisible by a and b,then lcm is max
//max lcm = product of number
//min lcm = larger number
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int a, b;
    cin >> a >> b;

    int maxOfTwo = max(a, b);

    if ((maxOfTwo % a) && (maxOfTwo % b))
    {
        cout << "Lcm is: " << maxOfTwo;
    }
    else
    {
        for (int i = maxOfTwo; i <= a * b; i++)
        {
            if ((i % a == 0) && (i % b == 0))
            {
                cout << "Lcm is: " << i;
                break;
            }
        }
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
© 2021 GitHub, Inc.
