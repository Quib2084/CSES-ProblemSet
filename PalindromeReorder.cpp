#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    int A[26] = {0};
    int B[26] = {0};
    
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        A[s[i]-65]++;
    }

    int odd = 0;
    char oddchar;
    for (int i = 0; i < 26; i++){
        if(A[i]%2==0)
            B[i] = A[i]/2;
        else
            {
                B[i] = (A[i]-1)/2;
                odd++;
                if(odd==2){
                    cout<<"NO SOLUTION";
                    return;
                }
                oddchar = i + 'A';
            }
    }

    string a;
    for (int i = 0; i < 26; i++){
        while(B[i]>0){
            a.push_back(i+'A');
            B[i]--;
        }
    }
    string b = a;
    reverse(b.begin(),b.end());
    if(s.size()%2!=0)
        a = a+oddchar+b;
    else 
        a = a+b;
    cout<<a;

    // for(int i=0;i<26;i++)
    //     cout<<A[i]<<" ";
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}