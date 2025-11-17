#include <iostream> 
using namespace std;
int main(){ 
    cout<<"enter a num"; 
    int x; 
    int i=-1; 
    cin>>x; 
    while (x!=1){ 
        if((x%6)==0){ 
            x/=6;
        } 
        else if(x%3==0){ 
            x*2 ;
        }
        i++;
    } 
    cout<<i; 
    return 0; }
