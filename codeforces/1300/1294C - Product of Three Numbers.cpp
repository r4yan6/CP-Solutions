#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void solve() {
  ll n; cin >> n;
  vector<ll> divisors;
  for(int i=2; 1LL * i * i <= n; i++){
    if(n%i==0)  divisors.push_back(i);
  }

  if(divisors.size() >= 3){
    cout << "YES\n";
    int a,b,c;
    a = divisors[0];
    for(int i=1; i < divisors.size(); i++){
      if(n/a % divisors[i] == 0){
        b = divisors[i];
        break;
      }
    }
    c = n / (a*b);
    cout << a << " " << b << " " << c << "\n";

  }
  else  cout << "NO\n";
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
