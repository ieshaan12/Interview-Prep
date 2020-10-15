// Time Taken(%):688ms
// Memory usage(%):21.7MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    int count(string s){
        // cout << s << endl;
        //either 1 or 2 sized
        if(s.size()==1){
            if(s[0]=='*') return 9;
            else if(s[0]>='1' && s[0]<='9') return 1;
            else return 0;
        }else if(s.size()==2){
            if(s[0]=='*'){
                if(s[1]=='*'){
                    return 15;
                }else{
                    int count=0;
                    for(int i=1;i<10;i++){
                        s[0]=i+'0';
                        if(stoi(s)<=26) count++;
                    }
                    return count;
                }
            }else if(s[0]<='9' && s[0]>='1'){
                if(s[1]=='*'){
                   int count=0;
                    for(int i=1;i<10;i++){
                        s[1]=i+'0';
                        if(stoi(s)<=26) count++;
                    }
                    return count;                    
                }else{
                    if(stoi(s)>=1 && stoi(s)<=26) return 1;
                    else return 0;
                }
            }else{
                return 0;
            }
        }
        return 0;
    }
    int numDecodings(string s) {
        int mod=1e9+7;
        vector<long long> ret(s.size()+1,0);
        ret[s.size()]=1;
        string tmp;
        tmp.push_back(s[s.size()-1]);
        ret[s.size()-1]=count(tmp);
        for(int i=s.size()-2;i>=0;i--){
            string tmp;
            tmp.push_back(s[i]);
            ret[i]+=(count(tmp)%mod)*(ret[i+1]%mod);
            ret[i]=ret[i]%mod;
            tmp.push_back(s[i+1]);
            ret[i]+=(count(tmp)%mod)*(ret[i+2]%mod);
            ret[i]=ret[i]%mod;
        }
        for(auto it:ret){
            // cout << it << endl;
        }
        return ret[0];
    }
};