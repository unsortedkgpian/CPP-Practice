#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int ans = a[0];
	for(int i = 1;i<n;i++){
		ans = __gcd(a[i], ans);
	}
	if(ans >= 2){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
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