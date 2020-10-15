// Time Taken(%):8ms
// Memory usage(%):8.3MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    bool check(vector<string>&D,int N){
        set<int> tmp;
        while(N!=0){
            tmp.insert(N%10);
            N=N/10;
        }
        int i=0;
        for(auto it=tmp.begin();it!=tmp.end();it++){
            for(i=0;i<D.size();i++){
                if(*it==stoi(D[i])) break;
            }
            if(i==D.size()) return false;
        }
        return true;
    }
    int recur(vector<string>&d,vector<int> tmp){
        int ret=0;
        if(tmp.size()==0) return 0;
        else if(tmp.size()==1){
            for(int i=0;i<d.size();i++){
                if(stoi(d[i])<=tmp[0]) ret++;
                else break;
            }
            // cout << ret << endl;
            return ret;
        }
        for(int i=0;i<d.size();i++){
            // cout << i << endl;
            if(stoi(d[i])<tmp[tmp.size()-1]) ret+=pow(d.size(),tmp.size()-1);
            else if(stoi(d[i])==tmp[tmp.size()-1]){
                tmp.erase(tmp.begin()+tmp.size()-1);
                // cout << tmp[0] << endl;
                // cout <<"hete" << endl;
                // cout<< ret << endl;
                ret+=recur(d,tmp);
                break;
            }else break;
        }
        // cout << '1' << endl;
        // cout << ret << endl;
        return ret;
    }
    int atMostNGivenDigitSet(vector<string>& D, int N) {
        int max_no_digits = floor(log10(N));
        // cout << max_no_digits << endl;
        long sum=0;
        for(int i=1;i<=max_no_digits;i++){
            sum+= pow(D.size(),i);
        }
        // cout << sum << endl;
        string s;
        for(int i=0;i<max_no_digits+1;i++){
            s.append(D[0]);
        }
        if(stoi(s)>N) return sum;
        //new range be (10^max_no_digits,N]
        // cout << max_no_digits << endl;
        vector<int> tmp;
        while(N!=0){
            tmp.push_back(N%10);
            N=N/10;
        }
        // cout << *(tmp.begin()) << endl;
        // cout << sum << endl;
        sum+=recur(D,tmp);
        return sum;
    }
};