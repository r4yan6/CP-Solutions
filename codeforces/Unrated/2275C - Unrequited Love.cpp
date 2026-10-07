#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
const int OFF = 30000;
int cnt[60001];
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i < n;i++){
      cin >> a[i];
    }
vector<int> res(n,0);
for(int i=0; i < n-4; i++){
  res[i] = a[i] + a[i+2] - a[i+4];
}
long long ans = 0;
for(int i = 0; i < n-4; i++){
    ans += cnt[res[i] + OFF];
    cnt[res[i] + OFF]++;
}
for(int i = 0; i < n-4; i++) cnt[res[i] + OFF] = 0;
for(int i=0; i < n-4; i++){
  if(i+2 < n-4 && res[i] == res[i+2]) ans--;
  if(i+4 < n-4 && res[i] == res[i+4]) ans--;
}

cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}
