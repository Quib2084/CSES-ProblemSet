#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

set<string> S;


void permute(string &a,int l,int r){
    if(r==l){
        S.insert(a);
        return;
    }
    
    for (int i = l; i <=r; i++)
    {
        swap(a[l], a[i]);
        permute(a,l+1,r);
        swap(a[l],a[i]);
    }
}



void solve()
{
    string a;
    cin>>a;
    
    permute(a,0,a.size()-1);

    cout << S.size() << "\n";
    for(auto c:S)
        cout<<c<<"\n";
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}