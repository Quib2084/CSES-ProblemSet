#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << ": " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    ll n,x;
    cin>>n>>x;
    ll *Coins = new ll[n];
    ll *Money = new ll[x+1];
    fo(i,n)
        cin>>Coins[i];
    Money[0]=0;
    
    for(int i=1; i<=x; i++)
    {
        ll MinChange = INT64_MAX;
        fo(j,n)
        {
            ll cur;
            if(i-Coins[j]<0)
                cur = INT64_MAX;
            else if(Money[i-Coins[j]]==-1)
                cur = INT64_MAX;
            else
            {
                cur = Money[i-Coins[j]]+1;
            }
            MinChange = min(MinChange,cur); 
        }
        
        Money[i] = (MinChange==INT64_MAX)? -1: MinChange;
    }
    cout<<Money[x];
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}