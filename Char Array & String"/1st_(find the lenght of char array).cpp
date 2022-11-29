#include <iostream>

using namespace std;
int getlength(char arr[]){
    //int length=0;
    int index=0;
    while(arr[index] != '\0'){
        //length++;
        index++;
    }
    return index;
}

int main()
{
    char name[10]= "vedprakas";
    
    
    cout<<getlength(name)<<endl;

    return 0;
}

