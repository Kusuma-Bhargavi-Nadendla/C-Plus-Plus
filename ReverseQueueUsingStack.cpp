
#include <iostream>
#include <queue>
#include<stack>

using namespace std;

int main()
{
    queue<int> q1;
    int n,i,ele;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter into elements Queue\n";
    for(i=0;i<n;i++){
        cin>>ele;
        q1.push(ele);
    }
    
    stack<int> s1;
    while(!q1.empty()){
        s1.push(q1.front());
        q1.pop();
    }
    while(!s1.empty()){
        q1.push(s1.top());
        s1.pop();
    }
    
    cout<<"Queue reversed using Stack"<<endl;
    while(!q1.empty()){
        cout<<q1.front()<<"  ";
        q1.pop();
    }
    
    return 0;
}
