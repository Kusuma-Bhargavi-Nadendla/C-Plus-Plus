
#include <iostream>

using namespace std;

int main()
{
    int i,j,rows,cols;
    cout<<"Enter the count of rows in Matrix:";
    cin>>rows;
    cout<<"Enter the count of columns in Matrix:";
    cin>>cols;
    
    int mat1[rows][cols];
    int transpose[cols][rows];

    cout<<"Enter Matrix"<<endl;
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    cin>>mat1[i][j];
    
    
    for(i=0;i<cols;i++)
    for(j=0;j<rows;j++)
    transpose[i][j]=mat1[j][i];
    
    cout<<"Transpose of the Matrix"<<endl;
    for(i=0;i<cols;i++){
        for(j=0;j<rows;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
