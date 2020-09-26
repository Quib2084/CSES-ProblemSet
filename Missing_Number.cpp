#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


void solve(){

    ll n;
    cin>>n;
    ll a,sum=0;

    for(int i=0;i<n-1;i++){
        cin>>a;
        sum+=a;
    }
    cout<<(n*(n+1)/2)-sum;
}



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}