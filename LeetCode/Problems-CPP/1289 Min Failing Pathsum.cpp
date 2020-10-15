// Time Taken(%):68ms(75.13%)
// Memory usage(%):14.3MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    // pair<int,int> min_ele(vector<int> arr){
    //     sort(arr.begin(),arr.end());
    //     pair<int,int> p=make_pair(arr[0],arr[1]);
    //     return p;
    // }
    int minFallingPathSum(vector<vector<int>>& arr) {
        int ans=INT_MAX;
        if(arr.size()==1) return arr[0][0];
        vector<vector<int>> ret(arr.size(),vector<int>(arr.size(),0));
        for(int i=0;i<ret.size();i++){
            for(int j=0;j<ret.size();j++){
                ret[i][j]=arr[i][j];
            }
        }
        vector<pair<int,int>> min_ele(ret.size());
        min_ele[ret.size()-1].second=INT_MAX;
        min_ele[ret.size()-1].first=ret[ret.size()-1][0];
        for(int i=0;i<arr.size();i++){
            if(ret[ret.size()-1][i]<min_ele[ret.size()-1].second){
                if(ret[ret.size()-1][i]<min_ele[ret.size()-1].first){
                    min_ele[ret.size()-1].second=min_ele[ret.size()-1].first;
                    min_ele[ret.size()-1].first=ret[ret.size()-1][i];
                }else{
                    min_ele[ret.size()-1].second=ret[ret.size()-1][i];
                }
            }
        }
        for(int i=arr.size()-2;i>=0;i--){
            min_ele[i].first=INT_MAX;
            min_ele[i].second=INT_MAX;
            for(int j=0;j<arr.size();j++){
                pair<int,int>p = min_ele[i+1];
                ret[i][j]+=(p.first==ret[i+1][j])?p.second:p.first;
                if(ret[i][j]<min_ele[i].second){
                    if(ret[i][j]<min_ele[i].first){
                        min_ele[i].second=min_ele[i].first;
                        min_ele[i].first=ret[i][j];
                    }else{
                        min_ele[i].second=ret[i][j];
                    }
                }
            }
        }
        for(int i=0;i<ret.size();i++){
            ans=min(ans,ret[0][i]);
        }
        // for(auto it:ret){
        //     for(auto ti:it){
        //         cout << ti << " ";
        //     }
        //     cout << endl;
        // }
        return ans;
    }
};