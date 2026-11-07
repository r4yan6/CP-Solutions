#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void solve(){
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i=0; i < n;i++) cin >> a[i];
  ll maxSum{a[0]};
  ll currSum = a[0];
  for(int i=1; i < n; i++){
    currSum = max(currSum + a[i], a[i]);
    maxSum = max(currSum, maxSum);
  }
  cout << maxSum << "\n";
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