#include<bits/stdc++.h>
#define mod 1e9+7
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<long long> arr(n+1,0);
	arr[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<6;j++){
			if(i-j<1) break;
			arr[i]+=arr[i-j-1];
			arr[i]=arr[i]%1000000007;
		}
	}
	cout << arr[n] <<endl;
}