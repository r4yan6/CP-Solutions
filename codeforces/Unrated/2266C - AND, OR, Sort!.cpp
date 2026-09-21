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
	ll n;
	cin >> n;
	string s;
	cin >> s;
if(s[0] == '1'){
        int ans = 0;
        for(char ch : s) if(ch == '0') ans++;
        cout << ans << '\n';
        return;
    }

    int totalZeros = 0;
    for(char ch : s) if(ch == '0') totalZeros++;

    int onesLeft = 0, zerosLeft = 0;
    int best = n;
    for(int k = 0; k < n; k++){
        if(s[k] == '1') onesLeft++;
        else zerosLeft++;
        int cost = onesLeft + (totalZeros - zerosLeft);
        best = min(best, cost);
    }
    cout << best << '\n';

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
