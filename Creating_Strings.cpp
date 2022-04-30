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
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vs ans;
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<ans.size()<<"\n";
    for(auto it: ans){
        cout<<it<<"\n";
    }
return 0;
}