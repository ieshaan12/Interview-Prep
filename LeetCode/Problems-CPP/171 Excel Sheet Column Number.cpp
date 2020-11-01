//Time Taken(%): 0ms
//Memory usage(%): 6.4MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int titleToNumber(string s) {
        long n = s.size(),i,num=0,mult=1;
        for(i=n-1;i>=0;i--){
            num=num+((s[i]-'A'+1)*mult);
            mult=mult*26;
        }
        return num;
    }
};