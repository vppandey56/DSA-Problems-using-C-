

#include <iostream>

using namespace std;

void colSum(int arr[4][2],int row,int col){
    
    for(int i=0;i<col;i++){
        
        int sum=0;
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[4][2]={{2,3},{4,5},{6,7},{8,9}};
    
    
    colSum(arr,4,2);

    return 0;
}
