#include<iostream>
using namespace std;
int main(){
    int num[6] = {91,31,12,141,45,16};
    for(int i=0;i<6;i++){
        cout<<num[i]<<" ";
    }
    for(int i=0;i<6;i+=2){
        int temp = num[i];
        num[i] = num[i+1];
        num[i+1] = temp;
    }
    cout<<"After ALternate Swap"<<endl;
    for(int i=0;i<6;i++){
        cout<<num[i]<<" ";
    }
}