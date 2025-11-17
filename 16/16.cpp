#include <iostream> 
using namespace std;

int main(){ 
    cout<<"enter the test case number";
    int t;
    cin >> t;
    while (t!=0) {
        cout<<"enter 3 digit"; 
        int x , y, z; 
        cin>>x>>y>>z; 
        if((x+y)==z){ 
            cout<<"the right statement is "<<x<<"+"<<y<<"="<<z; 
        }else if((x-y)==z){ 
            cout<<"the right statement is "<<x<<"-"<<y<<"="<<z; 
        }else{ cout<<"all statement is wrong"; 
        } 
    t--;
}
    return 0;
}
