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
	ll a,b,c;
	cin >> a >> b >> c;
	ll A_max = max(abs(a-b), abs((a+c) - b));
	cout << A_max << "\n";
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
