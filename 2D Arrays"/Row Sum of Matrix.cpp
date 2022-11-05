

#include <iostream>

using namespace std;

void RowSum(int arr[4][2],int row,int col){
    
    for(int i=0;i<row;i++){
        
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[4][2]={{2,3},{4,5},{6,7},{8,9}};
    
    
    RowSum(arr,4,2);

    return 0;
}
