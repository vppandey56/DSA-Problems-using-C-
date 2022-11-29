#include <iostream>
#include<algorithm>
#include<string>

using namespace std;
void reverse(char arr[]){
    int n=strlen(arr);
    int s=0,e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    char name[20]="Vedprakash";
    cout<<reverse(name)<<endl;
    

    return 0;
}
