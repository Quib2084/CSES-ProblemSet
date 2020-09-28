#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll A[2*100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    ll count = 1;
    for (int i = 0; i < n-1; i++){
        if(A[i]!=A[i+1])

            count++;
    }
    cout<<count;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}