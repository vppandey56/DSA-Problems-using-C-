//time complexity-O(n)
/*
input->
string a="vedprakash"
string b="prakashvde"

output=>
true
*/
#include <iostream>
#include<algorithm>
#include<string>

using namespace std;
bool checkAnagram(string a, string b){
    int freq[26]={0};
    for(int i=0;i<a.length();i++){
        char ch=a[i];
        int index=ch-'a';
        freq[index]++;
    }
    for(int i=0;i<b.length();i++){
        char ch=b[i];
        int index=ch-'a';
        freq[index]--;
    }
    for(int i=0;i<26;i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}
int main()
{
    string a="punitri";
    string b="iinrtup";
    cout<<checkAnagram(a,b)<<endl;
    

    return 0;
}

//using map

#include <iostream>
#include<algorithm>
#include<string>
#include<map>

using namespace std;
bool checkAnagram(string a, string b){
    map<char,int>mp;
    //int freq[26]={0};
    for(int i=0;i<a.length();i++){
        char ch=a[i];
        //int index=ch-'a';
        mp[ch]++;
    }
    for(int i=0;i<b.length();i++){
        char ch=b[i];
        //int index=ch-'a';
        mp[ch]--;
    }
    for(auto i:mp){
        if(i.second != 0){
            return false;
        }
    }
    
    /*for(char i='a';i<='z';i++){
        if(mp[i]!=0){
            return false;
        }
    }*/
    
    return true;
}
int main()
{
    string a="putnitri";
    string b="iinrttup";
    cout<<checkAnagram(a,b)<<endl;
    

    return 0;
}

