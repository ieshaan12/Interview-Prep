#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    long long int a=2;
    long long sum_2=0,sum_5=0;
    while(num/a!=0){
        sum_2+=num/a;
        a=a*2;
    }
    a=5;
    while(num/a!=0){
        sum_5+=num/a;
        a=a*5;
    }
    cout << min(sum_2,sum_5) << endl;
}