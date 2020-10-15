// Time Taken(%):8ms(70%)
// Memory usage(%):6.4MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    // class type{
    //   int count;
    //   int index;
    //   int sum;
    //   public: type(int ind,int cou,int s){
    //     count=cou;
    //      index=ind;
    //      sum=s;
    //   }
    // };
    // unordered_map<type*,int> mp;
    // int solve(vector<int> &sat,int index,int count,int sum){
    //     type* t= new type(index,count,sum);
    //     if(mp.find(t)!=mp.end()) {
    //         cout << 'h' << endl;
    //         return mp[t];
    //     }
    //     if(sat[index]>=0){
    //         // cout << index << count << endl;
    //         for(int i=index;i<sat.size();i++){
    //             sum+=sat[i]*count;
    //             count++;
    //         }
    //         return sum;
    //     }else{
    //         type* t1 =  new type(index+1,count+1,sum+sat[index]*count);
    //         type* t2 = new type(index+1,count,sum);
    //         return max(mp[t1]=solve(sat,index+1,count+1,sum+sat[index]*count),mp[t2]=solve(sat,index+1,count,sum));
    //     }
    // }
    int maxSatisfaction(vector<int>& sat) {
        sort(sat.begin(),sat.end());
        int flag=0;
        int sum,max_sum=0;
        for(int i=1;i<=sat.size();i++){
            max_sum+=sat[i-1]*i;
        }
        int i;
        for(i=0;i<sat.size();i++){
            if(sat[i]>=0) break;
            else{
               sum=0;
               for(int j=i;j<sat.size();j++){
                   sum+=sat[j]*(j-i+1);
               } 
                // if(sum==22) cout << i << endl;
               if(max_sum<sum) max_sum=sum;
            }
        }
        if(i==sat.size()) return 0;
        return max_sum;
    }
};