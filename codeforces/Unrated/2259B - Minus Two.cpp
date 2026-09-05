#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void solve(){
    ll n; cin >> n;
    vector<ll> arr;
    int count_odd = 0;
    for(int i=0; 1LL * i < n; i++){
        ll x;
        cin >> x;
        if ( x % 2 == 1)    count_odd++;
        else    arr.push_back(x);
    }
    int c0 = 0, c2 = 0;
    for(auto x : arr){
        if((x/2) % 2 == 0)  c0++;
        else    c2++;
    }
    cout << max(count_odd, max(c0,c2)) << "\n";
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