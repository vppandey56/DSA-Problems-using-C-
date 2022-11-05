#include <iostream>

using namespace std;

int main()
{
    //creation of 2D Array
    //int arr[3][3]={0}; it give all 0 element
    //int arr[3][3]={1}; it gives only first element 1 and rest of all 0
    
    // initialising 2D array like 1D array
   // int arr[3][3]={1,2,3,4,5,6,7,8,9};
   
   //initialized 2D Array like row and col wise
    int arr[4][2]={{2},{8,7},{2,5,},{3,2}};
    int n=3;
/*    
    //input
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];
        }
        
    }
*/  
    
    //print entire 2D Matrix
    for(int i=0; i<4; i++){
        for(int j=0; j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Garbafe value
    cout<<"correct";

    return 0;
}
