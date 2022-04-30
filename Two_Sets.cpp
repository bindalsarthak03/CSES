#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvl;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef vector<bool> vb;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll tot = n*(n+1)/2;
    if((n*(n+1)/2)%2!=0) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        vll a,b;
        ll sum = n*(n+1)/4;
        while(n){
            if(sum - n >=0){
                a.push_back(n);
                sum-=n;
            }
            else{
                b.push_back(n);
            }
            n--;
        }
        cout<<a.size()<<endl;
        for(auto it: a){
            cout<<it<<" ";
        }
        cout<<endl;
        cout<<b.size()<<endl;
        for(auto it: b){
            cout<<it<<" ";
        }

    }
     
return 0;
}