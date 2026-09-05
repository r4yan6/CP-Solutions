#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cost = 0;
    for(int start = 0; start < n; start += k){
        bool found = false;
        for(int j = start; j < k + start; j++){
            if(s[j] == '0'){
                found = true;
                break;
            }
        }
        if(!found)  cost++;
    }
    cout << cost << "\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}