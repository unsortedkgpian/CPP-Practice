#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

void solve(){
	int n;
	cin>>n;
	if(n == 3){
		cout<<0<<endl;
		return;
	}
	long long diagonals = (1LL*n*(n-1)/2 ) -n;

	cout<<diagonals%M<<endl;
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}