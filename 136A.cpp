#include<bits/stdc++.h>
using namespace std;

void solve(){

}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int arr[n+1];
    for(int i =1;i<n+1;i++){
    	int x;
    	cin>>x;
    	arr[x] = i;
    }
    for(int i =1;i <= n;i++){
    	cout<<arr[i]<<" ";
    }
}