#include<bits/stdc++.h>
using namespace std;

void solve(){
	int Q,N;
	cin>>Q>>N;
	string ans = "NO";
	if(Q == 1){
		// Prefect Square
		for(int i =0;i*i <= N;i++){
			if(i*i == N){
				ans = "YES";
				break;
			}
		}
	}else {
		// Prefect Cube
		for(int i =0;i*i*i <= N;i++){
			if(i*i*i == N){
				ans = "YES";
				break;
			}
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