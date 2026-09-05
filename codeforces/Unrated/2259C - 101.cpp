#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
#define endl '\n'

void solve() {
  ll n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; 1LL * i < n; i++)
    cin >> arr[i];
	for(int i=0; i < n; i++){
		if(arr[i] == -1){
			arr[i] = 1;
			break;
		}
		if(arr[i] == 1)	break;
	}

	for(int i = n - 1; i >= 0; i--){
		if(arr[i] == -1){
			arr[i] = 1;
			break;
		}
		if(arr[i] == 1)	break;
	}
	for(int i=0; i < n; i++){
		if(arr[i] == -1)	arr[i] = 0;
	}

	for(auto i : arr){
		cout << i << " "; 
	}
	cout << endl;
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
