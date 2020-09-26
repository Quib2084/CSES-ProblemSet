#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod(int n, ll x)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
    {
        ll y = mod(n / 2, x);
        return (y * y) % x;
    }
    else
    {
        ll y = mod(n - 1, x);
        return (y * (2 % x)) % x;
    }
}

void solve()
{
    int n;
    cin >> n;
    ll x = 1000000000 + 7;
    cout << mod(n, x);
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
