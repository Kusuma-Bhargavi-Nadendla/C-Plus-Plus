
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    
    int option,ele,i;
    while(1){
        cout<<"Opearations possible:\n1.Push element at end\n2.Pop element from start\n3.First element\n4.Last element";
        cout<<"\n5.Empty the Queue\n6.Exit\nChoose your choice:";
        cin>>option;
        
        switch(option){
            case 1:cout<<"Enter element to push:";
                   cin>>ele;
                   q.push(ele);
                   break;
            case 2:cout<<"Popped element "<<q.front();
                   q.pop();
                   break;
            case 3:cout<<"First element is "<<q.front();
                   break;
            case 4:cout<<"Last element is "<<q.back();
                   break;
            case 5:cout<<"Elements in Queue are\n";
                   while(!q.empty()){
                       cout<<q.front()<<" ";
                       q.pop();
                   }
                   break;
            case 6:exit(0);
        }
    }

    return 0;
}
