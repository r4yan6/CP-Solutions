#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll gcd(ll a,ll b){
  if (b == 0) return a;
  return gcd(b,a%b);
}

void solve() {
  ll a,b,k;
  cin >> a >> b >> k;
  ll g = gcd(a, b);
  if(a/g <= k && b/g <= k){
    cout << 1 << "\n";
  }
  else  cout << 2 << "\n";

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}
