#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



void solve()
{
    vector<ll> A,B;
    ll a=0,b=0;
    ll n;
    cin>>n;
    if(n==1){
        cout<<"NO";
        return;
    }
    ll sum = n*(n+1)/2;
    if(sum%2!=0){
        cout<<"NO";
        return;
    }
    else
    {
        sum = sum/2;
        for(ll i=n;i>0;i--){
            if(i<=sum){
                sum-=i;
                a++;
                A.push_back(i);
            }
            else
            {
                b++;
                B.push_back(i);
            }
            
        }
    }
    cout<<"YES\n"<<a<<"\n";
    for(ll i=0;i<a;i++)
        cout<<A[i]<<" ";
    cout<<"\n"<<b<<"\n";
    for(ll i=0;i<b;i++)
        cout<<B[i]<<" ";
}


int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}