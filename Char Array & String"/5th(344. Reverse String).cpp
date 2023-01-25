// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
    }
};
