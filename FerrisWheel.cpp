#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    int n, A[2*100000];
    ll x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>A[i];
    
    sort(A,A+n);
    int l=0, r = n-1;
    int c=0;
    while(l<=r){
        if(A[r]>x)
            r--;
        else if(A[r]==x){
            c++;
            r--;
        }
        else if(A[r]+A[l]<=x){
            c++;
            r--;
            l++;
        }
        else if(A[r]+A[l]>x)
        {
            c++;
            r--;
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