#include<bits/stdc++.h>
using namespace std;

void solve(){
	int arr[7];
	for(int i = 1;i<=6;i++){
		cin>>arr[i];
	}
	string s;
	cin>>s;
	for(int i = 0;i<s.size();i++){
		if(s[i] == 'N'){
			int temp = arr[1];
			arr[1] = arr[2];
			arr[2] = arr[6];
			arr[6] = arr[5];
			arr[5] = temp;
		}else if(s[i] == 'E'){
			int temp = arr[1];
			arr[1] = arr[4];
			arr[4] = arr[6];
			arr[6] = arr[3];
			arr[3] = temp;
		}else if(s[i] == 'W'){
			int temp = arr[1];
			arr[1] = arr[3];
			arr[3] = arr[6];
			arr[6] = arr[4];
			arr[4] = temp;
		}else if(s[i] == 'S'){
			int temp = arr[1];
			arr[1] = arr[5];
			arr[5] = arr[6];
			arr[6] = arr[2];
			arr[2] = temp;
		}
	}
	cout<<arr[1]<<endl;
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