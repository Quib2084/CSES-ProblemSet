#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    int apart[2*100000],appli[2*100000];
    int n,m;
    ll k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
        cin>>appli[i];
    for(int i=0;i<m;i++)
        cin>>apart[i];

    sort(apart,apart+m);
    sort(appli,appli+n);

    int a = m-1, b = n-1;
    int c = 0;
    while(a>=0 && b>=0){
        // cout<<apart[a]<<" "<<appli[b]<<"\n";
        if(abs(appli[b]-apart[a])<=k){
            c++;
            a--;
            b--;
        }
        else if(apart[a]>appli[b]){
            a--;
        }
        else
        {
            b--;
        }
    }
    cout<<c;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}