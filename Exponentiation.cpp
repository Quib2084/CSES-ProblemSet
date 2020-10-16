#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << ": " << x << endl;
#define ll long long
#define MOD 1000000007

using namespace std;

ll solve(ll a, ll b)
{
    if(b==0)
        return 1;
    else if(a==0)
        return 0;
    else if( b & 1 )
    {
        return ((a%MOD)*solve(a, b-1))%MOD;
    }
    else
    {
        ll T = solve(a,b/2);
        return (T*T)%MOD;
    }
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t>0)
    {
    ll a,b;
    cin>>a>>b;
    cout<<solve(a,b)<<"\n";
    t--;
    }
    return 0;
}