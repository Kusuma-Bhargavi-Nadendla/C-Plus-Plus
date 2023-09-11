
#include <iostream>

using namespace std;

int main()
{
    int n,k,i,fo,lo;
    cout<<"Enter count of array elements:";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter "<<n<<" elements"<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"Enter element to find occurence:";
    cin>>k;

    for(i=0;i<n;i++)
    if(arr[i]==k){
        fo=i;
        break;
    }
    
    for(i=n-1;i>=0;i--)
    if(arr[i]==k){
        lo=i;
        break;
    }
    
    cout<<"First occurence of "<<k<<" in the given array is "<<fo<<endl;
    cout<<"Last occurence of "<<k<<" in the given array is "<<lo<<endl;
    
    
    return 0;
}
