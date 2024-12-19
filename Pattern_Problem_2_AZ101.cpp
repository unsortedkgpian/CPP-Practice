#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m,p;
	cin>>n>>m>>p;
	for(int i = 0 ;i<n*p +n +1;i++){
		for(int j = 0;j<(m)*(p+1)+1;j++){
			if(i%(p+1) == 0 || j%(p+1) == 0){
				cout<<"*";
			}else if ((i+j)%(2* (p+1)) == 0){
				cout<<'/';
			}else if((i-j)%(2*(p+1)) == 0){
				cout<<"\\";
			}else{
				cout<<".";
			}
			
		}
		cout<<endl;
	}
    cout<<endl;
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