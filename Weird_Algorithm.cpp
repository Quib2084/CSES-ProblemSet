#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


void solve(){
    ll n;
    cin>>n;
    vector<ll> V(n-1);
    for(int i=0;i<n-1;i++)
        cin>>V[i];
    
    sort(V.begin(),V.end());

    for(int i=0;i<n-2;i++){
        if(V[i+1]-V[i]!=1){
            cout<<V[i]+1;
            break;
        }

    }
}



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}