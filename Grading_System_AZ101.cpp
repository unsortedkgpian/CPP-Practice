#include<bits/stdc++.h>
using namespace std;

void solve(){
	int mid, final, makeup;
	cin>>mid>>final>>makeup;
	char grade;
	if(mid == -1 || final == -1){
		grade = 'F';
	}else if (mid + final >= 80){
		grade = 'A';
	}else if (mid + final >= 65 && mid + final< 80){
		grade = 'B';
	}else if (mid + final >= 50 && mid + final<65){
		grade = 'C';
	}else if(mid + final >= 30 && mid + final<50){
		if(makeup>=50){
			grade = 'C';
		}else{
			grade = 'D';
		}
	}else{
		grade = 'F';
	}

	cout<<grade<<endl;
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