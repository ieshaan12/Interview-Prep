// Time Taken(%):22.18%
// Memory usage(%):15.4MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        unordered_map<int,vector<vector<int>>> ret;
        for(int i=0;i<gs.size();i++){
            if(ret.find(gs[i])==ret.end()) ret[gs[i]]=vector<vector<int>>(1,vector<int>(0));
            if(ret[gs[i]].back().size()==gs[i]) ret[gs[i]].push_back(vector<int>(0));
            ret[gs[i]].back().push_back(i);
        }
        vector<vector<int>> tmp;
        for(auto it:ret){
           for(int i=0;i<it.second.size();i++){
               tmp.push_back(it.second[i]);
           }
        }
        return tmp;
    }
};