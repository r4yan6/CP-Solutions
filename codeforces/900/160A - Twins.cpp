#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n; cin >> n;
  vector<int> arr(n);
  ll total = 0;
  for (int i = 0; i < n; i++) { cin >> arr[i]; total += arr[i]; }
  
  sort(arr.rbegin(), arr.rend());
  
  ll sum_l = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    sum_l += arr[i];
    count++;
    if (sum_l > total - sum_l) break;
  }
  cout << count << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll tt = 1;
  while (tt--) {
    solve();
  }
}