#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



ll knight(int n){
    ll nSquare  = n*n;
    return ((nSquare*(nSquare-1))/2)-(8*(n-2)*(n-1))/2;
}

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cout<<knight(i)<<"\n";
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}