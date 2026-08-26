#include <bits/stdc++.h>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> alp(26);
  for(auto &i : alp)  i = 0;
  for(auto c : s){
    char ch = tolower(c);
    alp[ch - 'a'] = 1;
  }
    bool flag = true;
    for(auto i : alp){
      if(i == 0)  flag = false;
    }
    if(flag)  cout << "YES\n";
    else  cout << "NO\n" ;

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll tt = 1;
  // cin >> tt;
  while (tt--) {
    solve();
  }
}
