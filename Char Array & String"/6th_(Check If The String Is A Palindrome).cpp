// Sample Input 1 :
// 2
// N2 i&nJA?a& jnI2n
// A1b22Ba
// Sample Output 1 :
// Yes
// No
// Explanation 1 :
// For the first test case, S = “N2 i&nJA?a& jnI2n”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “n2injaajni2n”, which is a palindrome. Hence, the given string is also a palindrome.

// For the second test case, S = “A1b22Ba”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “a1b22ba”, which is not a palindrome. Hence, the given string is not a palindrome.
// Sample Input 2 :
// 3
// codingninjassajNiNgNidoc
// 5?36@6?35
// aaBBa@
// Sample Output 2 :
// Yes
// Yes
// No


#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
    if(s.length()==1){
        return true;
    }
    int n=s.length()-1;
    int start=0,end=n;
    while(start<end){
        while(start<end && !isalnum(s[start])){
            start++;
        }
        while(start<end && !isalnum(s[end])){
            end--;
        }
        if(start<end && tolower(s[start])!=tolower(s[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
