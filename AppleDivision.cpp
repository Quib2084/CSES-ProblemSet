#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll A[20];
    int n;
    cin>>n;
    ll total=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        total+=A[i];
    }


    ll minDiff = INT64_MAX;
    for(int i=0;i<1<<n;i++){
        ll sum = 0;
        for(int j=0;j<n;j++){
            if(i & 1<<j)
                sum+=A[j];
        }
        ll currDiff = abs(((total-sum)-sum));
        minDiff = min(currDiff,minDiff);
    }

    cout<<minDiff;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}