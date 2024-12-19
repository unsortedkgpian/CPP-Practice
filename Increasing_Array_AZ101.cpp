#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	long long  ans = 0;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	if(n == 1){
		cout<<ans<<endl;
		return;
	}
	for(int i = 1;i<n;i++){
		if(arr[i]< arr[i-1]){
			ans+=arr[i-1]-arr[i];
			arr[i]= arr[i-1];
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