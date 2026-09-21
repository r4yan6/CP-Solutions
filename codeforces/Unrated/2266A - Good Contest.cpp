//In the name of Allah, the most merciful the most beneficent
#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;


void solve(){
  int n;
	cin >> n;
  int min = 999;
  for(int i=0; i < 3; i++){
    int x;
    cin >> x;
    if(x < min) min = x;
  }
  cout << n - min << "\n";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}
