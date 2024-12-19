#include<bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int bin_pow(long long base, long long exp){
	long long result = 1;
	while(exp >0){
		if(exp%2 == 1) result = (result*base)%M;
		base = (base*base)%M;
		exp /=2;
	}
	return result;
}

void solve(){
	long long int n;
	cin>>n;
	long long ans = (((((1LL* n*(n-1))%M)*(((n-2)*(n-3))%M))%M)*(bin_pow(24,M-2)))%M;
	if(ans < 0) ans += M;
	cout<<ans%M<<endl;
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