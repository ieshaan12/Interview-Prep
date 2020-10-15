#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n*(n+1)/2)%2==0){
        deque<int> q;
        for(int i=1;i<=n;i++){
            q.push_back(i);
        }
        vector<int> a,b;
        while(abs((int)a.size()-(int)q.size())>1){
            a.push_back(q.front());
            a.push_back(q.back());
            q.pop_front();
            q.pop_back();
        }
        while(q.size()!=0){
            b.push_back(q.front());
            q.pop_front();
        }
        int sum_a=0,sum_b=0;
        for(int i=0;i<a.size();i++){
            sum_a+=a[i];
        }
        for(int i=0;i<b.size();i++){
            sum_b+=b[i];
        }
        int diff=(sum_a-sum_b);
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(a[i]-b[j]==diff/2){
                    int tmp1=a[i];
                    int tmp2=b[j];
                    a.erase(a.begin()+i);
                    a.push_back(tmp2);
                    sum_a=sum_a-tmp1+tmp2;
                    b.erase(b.begin()+j);
                    b.push_back(tmp1);
                    sum_b=sum_b+tmp1-tmp2;
                    break;
                }
            }
            if(sum_a==sum_b) break;
        }
        if(sum_a==sum_b){
            cout << "YES" <<endl;
            cout << a.size() << endl;
            for(auto it:a){
                cout << it << " ";
            }
            cout << endl;
            cout << b.size() << endl;
            for(auto it:b){
                cout << it <<" ";
            }
            cout << endl;
        }else{
            cout << "NO" << endl;
        }
    }else cout << "NO" << endl;
}