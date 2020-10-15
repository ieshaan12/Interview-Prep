#include <iostream>
#include <vector>
using namespace std;
void solve(vector<vector<int>> arr){
	vector<vector<int>> ret(arr.size(),vector<int>(arr[0].size(),0));
	for(int i=0;i<arr.size();i++){
		ret[i][ret[0].size()-1]=arr[i][arr[0].size()-1];
	}
	for(int j=arr.size()-2;j>=0;j--){
		for(int i=0;i<arr.size();i++){
			ret[i][j]=arr[i][j]+max((j+1<ret[0].size())?ret[i][j+1]:0,max((i-1>=0 && j+1<ret[0].size())?ret[i-1][j+1]:0,(i+1<ret.size() && j+1<ret[0].size())?ret[i+1][j+1]:0));
		}
	}
	// for(auto it:ret){
	// 	for(auto ti:it){
	// 		cout << ti << " ";
	// 	}
	// 	cout << endl;
	// }
	int ans=-1;
	for(int i=0;i<arr.size();i++){
		ans=max(ret[i][0],ans);
	}
	cout << ans <<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int row,col;
		cin>>row>>col;
		vector<vector<int>> arr(row,vector<int>(col,0));
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				int tmp;
				cin>>tmp;
				arr[i][j]=tmp;
			}
		}
		solve(arr);
	}
	return 0;
}
