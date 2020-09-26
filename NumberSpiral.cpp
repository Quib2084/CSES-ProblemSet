#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll y,x;
    cin>>y>>x;

    if(x==y){
        cout<<x*y-(x-1)<<"\n";
    }
    else if(x<y){
        if(y%2==0){
            
            cout<<(y*y)-(x-1)<<"\n";
        }
        else
        {
            cout<<((y-1)*(y-1))+1+(x-1)<<"\n";
        }
        
    }
    else
    {
        if(x%2==0){
            cout<<((x-1)*(x-1))+1+(y-1)<<"\n";
        }
        else
        {
            cout<<(x*x)-(y-1)<<"\n";
        }
        
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