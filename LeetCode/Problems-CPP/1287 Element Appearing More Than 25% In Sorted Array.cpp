//Time Taken(%):20 ms
//Memory usage(%):12.8 MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size(),i,count,currElt;
        currElt=arr[0];
        count=1;
        for(i=1;i<n;i++){
            if(currElt==arr[i])
                count++;
            else{
                if(count>n/4)
                    return currElt;
                else
                    count=1;
                    currElt=arr[i];
            }
        }
        return currElt;
    }
};