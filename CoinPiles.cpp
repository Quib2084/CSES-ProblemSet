#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll l = (2 * a - b);
    ll r = (2 * b - a);
    if (l>=0 && r>=0 && (r % 3 == 0) && (l% 3 == 0)){
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    

}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t>0){
    solve();
    t--;
    }
    return 0;
}