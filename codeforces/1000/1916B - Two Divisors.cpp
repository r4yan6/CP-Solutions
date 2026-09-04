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
  ll a,b;
  cin >> a >> b;
  ll ans = 0;
  if(b%a == 0){
    ll p = b / a;
    ans = b * p;
  }
  else{
    ll g = gcd(a, b);
    ans = (a / gcd(a, b)) * b;
  }
  cout << ans << "\n";

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
