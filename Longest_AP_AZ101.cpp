#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	int ans = 2;
	int temp = 2;

	if(n == 2){
		cout<<2<<endl;
		return;
	}
	for(int i=2;i<n;i++){
		if( a[i] + a[i-2] == 2*a[i-1] ){
			temp ++;
			ans = max(ans, temp);
		}else{
			ans = max(ans, temp);
			temp = 2;
		}
	}
	cout<<ans<<endl;
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