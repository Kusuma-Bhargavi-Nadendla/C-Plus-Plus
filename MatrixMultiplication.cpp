
#include <iostream>

using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"Enter the order of Matrices:";
    cin>>n;
    
    int mat1[n][n];
    int mat2[n][n];
    int mulMat[n][n];

    cout<<"Enter First Matrix"<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>mat1[i][j];
    
    cout<<"Enter Second Matrix"<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>mat2[i][j];
    
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
        mulMat[i][j]=0;
        for(k=0;k<n;k++)
        mulMat[i][j]+=mat1[i][k]*mat2[k][j];
    }
    
    
    
    cout<<"Multiplication performed"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<mulMat[i][j]<<" ";
        }
        cout<<endl;
    }
     
    return 0;
}
