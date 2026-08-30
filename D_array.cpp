#include<iostream>
using namespace std;

int main(){
    int arr[6];
    cout<<"enter array element: "<<endl;
    for (int i=0;i<6;i++){
       cin>>arr[i];
    }
    for (int i=0;i<6;i++){
       cout<<"index value: "<<i<<"  Array value"<<arr[i]<<endl;
    }

}