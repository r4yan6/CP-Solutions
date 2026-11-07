#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void solve(){
  int n,q;
  cin >> n >> q;
  vector<ll> a(n,0);
  for(int i=0; i <n ; i++){
    cin >> a[i];
  }
	vector<ll> prefXor(n+1,0);
	prefXor[1] = a[0];
	for(int i=2; i <=n; i++){
	  prefXor[i] = prefXor[i-1] ^ a[i-1];
	}
	while(q--){
	  int l,r;
		cin >> l >> r;
		cout << (prefXor[r] ^ prefXor[l-1]) << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll tt = 1;
	// cin >> tt;
	while(tt--){
		solve();
	}
}