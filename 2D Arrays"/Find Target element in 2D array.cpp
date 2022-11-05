#include <iostream>

using namespace std;

bool search(int arr[4][2],int target,int row,int col){
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[4][2]={{2,3},{4,5},{6,7},{8,9}};
    //for(int i=0;i<4)
    
    cout<<"searching 8-> "<<search(arr,8,4,2)<<endl;

    return 0;
}
