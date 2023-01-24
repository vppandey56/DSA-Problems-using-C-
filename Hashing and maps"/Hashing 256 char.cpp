//  for 256 char


#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main()
{
    string s;
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        //for knowing the index of a-z char
        hash[s[i]]++;
    }
    
    
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl; 
    }

    return 0;
}
