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
    vi hashLet(91,0);
    for(int i=0;i<s.length();i++){
        hashLet[(int)(s[i])]++;
    }
    ll countOdd=0;
    for(int i=0;i<=90;i++){
        if(hashLet[i]%2!=0) countOdd++;
    }
    if(countOdd>1) cout<<"NO SOLUTION"<<endl;
    else{
        vector<char> ans;
        for(int i=0;i<=90;i++){
            if(hashLet[i]%2==0){
                for(int j=0;j<hashLet[i]/2;j++){
                    ans.push_back((char)(i));
                }
            }
        }
        for(int i=0;i<=90;i++){
            if(hashLet[i]%2!=0){
                for(int j=0;j<hashLet[i];j++){
                    ans.push_back((char)(i));
                }
            }
        }
        
        for(int i=90;i>=0;i--){
            if(hashLet[i]%2==0){
                for(int j=0;j<hashLet[i]/2;j++){
                    ans.push_back((char)(i));
                }
            }
        }
        for(int i=0;i<ans.size();i++) cout<<ans.at(i);
    }
return 0;
}