#include <iostream> 
using namespace std; 
int main(){ 
    cout<<"how many pairs"; 
    int x ; 
    cin>>x ; 
    int arr[x];
    cout<<"enter the digit"; 
    for(int i=0 ;i<x;i++){ 
        cin>>arr[i]; } 
        int counter=0; 
        for(int i=0 ;i<x;i++){ 
            for(int j=i+1 ;j<(x-i);j++){ 
                if(((arr[i]+arr[j])%2)!=0){ 
                    counter++; 
                    break; 
                } } } 

    if(counter==(x/2)){ 
        cout<<"yes"; }
    else{ cout<<"no"; 
    } 
    return 0;
}
