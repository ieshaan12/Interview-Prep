//Time Taken(%): 8ms
//Memory usage(%): 6.4MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int value(char c){
        int val;
        switch(c){
                case('I'):
                val= 1;
                break;
                case('V'):
                val= 5;
                break;
                case('X'):
                val= 10;
                break;
                case('L'):
                val= 50;
                break;
                case('C'):
                val= 100;
                break;
                case('D'):
                val= 500;
                break;
                case('M'):
                val= 1000;
                break;
                
        } 
        return val;
    }
        
        
    int romanToInt(string s) {
        int n=s.size(),i,ans=0;
        for(i=0;i<n;i++){
            if(i==n-1 || value(s[i])>=value(s[i+1]))
                ans+=value(s[i]);
            else
                ans-=value(s[i]);
            
        }
        return ans;
    }
};