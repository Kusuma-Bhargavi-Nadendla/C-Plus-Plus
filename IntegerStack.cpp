
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int option,ele;
    stack<int> St;
    while(1){
        cout<<"\nPossible operations:\n1.Push element\n2.Pop element\n3.Top element\n4.Empty the stack\n5.Exit\nChoose your choice:";
        cin>>option;
        switch(option){
            case 1:cout<<"Enter element to push:";
                   cin>>ele;
                    St.push(ele);
                    break;
            case 2:cout<<"Popped element:"<<St.top();
                    St.pop();
                  break;
            case 3:cout<<"Top element of stack:"<<St.top();
                    break;
            case 4:cout<<"Stack elements are"<<endl;
                    while(!St.empty()){
                       cout<<St.top()<<"  ";
                       St.pop();
                    }
                    break;
            case 5:exit(0);
            
        }
    }

    return 0;
}
