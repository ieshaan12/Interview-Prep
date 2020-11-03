//Time Taken(%): 0ms
//Memory usage(%): 6.7MB
//Your Name(optional):nitinvinayak
// Your solution here
#include <cmath>
class Solution {
public:
    int reverse(int x) {
        bool isneg=false;
        long rev=0;
         if((x> 2147483647)||(x < -2147483647 )){
            return 0;
        }
        if (x<0){
            isneg=true;
            x=-x;
        } 
        // Find number of digits in the number
        int tmp=x,n=0;
        while(tmp>0){
            n++;
            tmp=tmp/10;
        }
        // cout<<"length "<<n<<endl;
        for(int i=0;i<n;i++){
            int d=x%10;
            rev=rev+d*pow(10,n-i-1);
            x=x/10;
        }
        if((rev> 2147483647)){
            return 0;
        }
        if (isneg==true)
        return rev*-1;
        return rev;
    }
};