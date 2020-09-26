#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


ll fac(int n){
    ll prod=1;
    for(int i=2;i<=n;i++)
        prod*=i;
    return prod;
}

void solve()
{
    int n;
    cin>>n;
    if(n<5){
        cout<<0;
        return;
    }
    else
    {
        int e = (int)(log(n)/log(5));
        int ans=0;
        for(int i=1;i<=e;i++){
            ans+=(int)(n/pow(5,i));
        }
        cout<<ans;
        return;
    }
    
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}