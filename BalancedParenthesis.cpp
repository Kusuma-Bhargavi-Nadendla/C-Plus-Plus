
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str;
    cout<<"Enter a string:";
    cin>>str;
    
    stack<char> s;
    for(int i=0;i<str.size();i++){
        if(s.size()!=0 ){
            if( (s.top()=='(' &&str[i]==')')||(s.top()=='['&&str[i]==']')||(s.top()=='{'&&str[i]=='}')){
            s.pop();
            }
            else{
                s.push(str[i]);
            }
        }
        else{
            s.push(str[i]);
        }
    }
    if(s.size()==0){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}
