#include<iostream>
#include<math.h>
using namespace std;
//parametric and non parametric
 string print(string name){

    cout<<"hey girl "<<name<<endl;
}

//sum function
int sum(int num1,int num2){
    int num3=num1+num2;
    cout<<"your sum: "<<num3<<endl;
}

//maxx function
int maxx(int num1,int num2){
    
    if(num1>num2){
        cout<<num1;
    }else{
        cout<<num2;
    }
}

//pass by value and reference
int numm(int &num){//reference use & change the original one 
    //pass by value only copy the num value and on call main function it return original value
    cout<<num<<endl;
    num +=4;
    cout<<num<<endl;
    num +=6;
    cout<<num<<endl;
    num -=4;
    cout<<num<<endl;
}

int main(){
    //calling name function
    // string name;
    // cin>>name;
    // print(name);

    //calling sum function
    // int num1,num2;
    // cin>>num1>>num2;
    // sum(num1,num2);

    //buit in function max under math library
    // int maximum=max(num1,num2);
    // cout<<"maximum element: "<<maximum<<endl;

    //user defined function maxx
    // cout<<"maximum function: ";
    // maxx(num1,num2);

    //
    int num;
    cout<<"enter num value: ";
    cin>>num;
    numm(num);
    cout<<"your actual num value: "<<num;

}