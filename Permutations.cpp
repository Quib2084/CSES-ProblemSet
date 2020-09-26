#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> A(n+1);

    if(n>1 && n<4){
        cout<<"NO SOLUTION";
        return;
    }
    if(n==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
        return;
    }
    
    int i,k=1;

    for(i=1;i<=ceil((double)n/2);i++,k++)
        A[i]=(2*k-1);
    k=1;
    for(;i<=n;i++,k++)
        A[i]=2*k;
    

    for(int i=1;i<=n;i++)
        cout<<A[i]<<" ";
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}