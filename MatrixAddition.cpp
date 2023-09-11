
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
    int mat2[rows][cols];
    int addMat[rows][cols];

    cout<<"Enter First Matrix"<<endl;
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    cin>>mat1[i][j];
    
    cout<<"Enter Second Matrix"<<endl;
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    cin>>mat2[i][j];
    
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    addMat[i][j]=mat1[i][j]+mat2[i][j];
    
    cout<<"Addition performed"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout<<addMat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
