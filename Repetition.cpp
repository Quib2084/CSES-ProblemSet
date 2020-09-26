#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    string s;
    cin>>s;

    ll maxC = 1,C;
    for(int i=0;i<s.size()-1;i++){
        C=1;
        while(s[i+1]==s[i]){
            C++;
            i++;
        }
        maxC = max(maxC,C);
    }
    cout<<maxC;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}