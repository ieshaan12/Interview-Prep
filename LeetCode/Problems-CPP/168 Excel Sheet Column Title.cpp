//Time Taken(%): 0ms
//Memory usage(%): 6.3MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    string convertToTitle(int n) {
        string res="";
        int rem;
        while(n){
            rem=(n-1)%26;
            res+=rem+'A';
            n=(n-1)/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};