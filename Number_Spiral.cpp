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
    ll t;
    cin>>t;
    while(t--){
        ll y,x; 
        cin>>y>>x;
        if(y==x) cout<<(x*x)-x+1<<endl;
        else if(x<y){
            if(y%2==0){
                ll num = y*y-x+1;
                cout<<num<<endl;
            }
            else{
                ll num = (y-1)*(y-1)+x;
                cout<<num<<endl;
            }
        }
        else{
            if(x%2!=0){
                ll num = x*x-y+1;
                cout<<num<<endl;
            }
            else{
                ll num = (x-1)*(x-1)+y;
                cout<<num<<endl;
            }
        }
    }
return 0;
}