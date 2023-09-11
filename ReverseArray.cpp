
#include <iostream>

using namespace std;

int main()
{
    int sum,n,i,t;
    cout<<"Enter n:";
    cin>>n;
    int a[n];
    
    cout<<"Enter "<<n<<" array elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    
    cout<<"Original array"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<" , ";
    
    cout<<endl;
    
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    cout<<"Reversed array"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<" , ";

    return 0;
}
