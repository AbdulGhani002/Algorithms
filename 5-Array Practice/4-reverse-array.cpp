#include<iostream>
using namespace std;
int main(){
    int num[5] = {91,31,12,141,45};
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<2;i++){
        int temp = num[i];
        int j=4-i;
        num[i] = num[j];
        num[j] = temp;
    }
    cout<<"After Swap"<<endl;
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    }
}