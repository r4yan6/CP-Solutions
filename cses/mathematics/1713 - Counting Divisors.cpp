#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  int count = 0;
  for(int i=1; i * i <=n; i++){
    if(n%i==0){
      count++;
      if ( i != n / i)  count++;
  }
  }
  cout << count << "\n";
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