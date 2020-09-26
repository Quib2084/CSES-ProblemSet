#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin>>n;
    ll A[2*100000];

    for(int i=0;i<n;i++)
        cin>>A[i];
    
    ll C=0;
    for(int i=0;i<n-1;i++){
        if(A[i+1]>=A[i])
            continue;
        else
        {
            C+=A[i]-A[i+1];
            A[i+1] = A[i];
        }
        
    }
    cout<<C;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}