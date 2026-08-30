#include<iostream>
using namespace std;
//1st nestedloop
int nestedloop(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//2nd loop
int nestedloop2(){
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//3rd loop
int nestedloop3(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//4th loop
int nestedloop4(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
            // cout<<j<<" ";
        }
        cout<<endl;
    }
}
//5th loop
int nestedloop5(){
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//6th loop
int nestedloop6(int n){
    for(int i=0;i<n;i++){
        //int space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        //int *
        for(int j=0;j<=2*i+1;j++){
            cout<<"*";
        }
        //int space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

//7th loop
int nestedloop7(int n){
    for(int i=0;i<n;i++){
        //int space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //int *
        for(int j=0;j<=2*n-(2*i+1);j++){
            cout<<"*";
        }
        //int space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter value of integer type: ";
    cin>>n;
    nestedloop();
    nestedloop2();
    nestedloop3();
    nestedloop4();
    nestedloop5();
    nestedloop6(n);
    nestedloop7(n);
}

