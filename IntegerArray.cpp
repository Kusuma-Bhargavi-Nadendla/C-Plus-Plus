
#include <iostream>

using namespace std;

int main()
{
    
    int n;
    int sum=0;
    float avg=0.0;
    int pro=1;
    
    cout<<"Enter n:";
    cin>>n;
    int ar[n];
    
    cout<<"Enter "<<n<<" Integers"<<endl;
    for(int i=0;i<n;i++)
    cin>>ar[i];
    
    for(int j=0;j<n;j++){
    sum+=ar[j];
    pro*=ar[j];
    }
    
    avg=(float)sum/n;
    
    cout<<"Sum of given numbers is "<<sum<<endl;
    cout<<"Average of given numbers is "<<avg<<endl;
    cout<<"Product of given numbers is "<<pro;

    return 0;
}


