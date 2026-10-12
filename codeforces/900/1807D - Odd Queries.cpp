#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll ;

void solve(){
  ll n,q;
  cin >> n >> q;
  vector<ll> arr(n);
  for(int i=0; i <n; i++){
    cin >> arr[i];
  }
  vector<ll> prefix(n+1,0);
  for(int i=1; i <=n ; i++) prefix[i] = prefix[i-1] + arr[i-1];
  while(q--){
    ll l,r,k;
    cin >> l >> r >> k;
    ll sum = prefix[n] - (prefix[r] - prefix[l-1]) + k*(r-l+1);//subtract the one we remove and then add the new ones
    if((sum) % 2 == 1)  cout << "YES" << "\n";
    else  cout << "NO" << "\n";

  }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while(tt--) solve();
}
