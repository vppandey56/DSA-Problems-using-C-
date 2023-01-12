
#include <iostream>

using namespace std;

int flip(char expected){
    if(expected=='0'){
        return '1';
    }
    else{
        return '0';
    }
}

int getflip(string str,char expected){
    int countflip=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=expected){
            countflip++;
            
        }
        expected=flip(expected);
    }
    return countflip;
} 


int main()
{
    string str="0010";
    int ans0=getflip(str,'0');
    int ans1=getflip(str,'1');
    int ans=min(ans0,ans1);
    cout<<ans;

    return 0;
}
