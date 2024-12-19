#include<bits/stdc++.h>
using namespace std;

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int a, b;
    cin>>a>>b;
    int left_time = (240-b)*2/5;
    int ans = a;
    for(int i =a;i>=0;i--){
    	ans = i;
    	if((i)*(i+1) <= left_time){
    		break;
    	}
    }
    cout<<ans<<endl;
}