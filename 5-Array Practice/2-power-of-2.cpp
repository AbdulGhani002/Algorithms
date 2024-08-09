#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    if( ( num & ( num - 1 ) ) == 0 ){
        cout<<"The number is a power of 2"<<endl;
    } else{
        cout<<"The number is not a power of 2"<<endl;
    }
}