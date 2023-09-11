
#include <iostream>

using namespace std;

int binarySearch(int arr[],int n,int k){
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==k)
        return mid;
        
        else if(arr[mid]>k){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n,k,i,r;
    cout<<"Enter count of array elements:";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter "<<n<<" sorted elements"<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"Enter element to be found:";
    cin>>k;
    
    r=binarySearch(arr,n,k);
    if(r!=-1){
        cout<<"Element found at "<<r<<" index.";
    }
    else{
        cout<<"Element not found.";
    }

    return 0;
}
