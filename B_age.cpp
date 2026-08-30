#include<iostream>
using namespace std;

int main() {

//write a program takes input from user and print is he adult or not
int age;
cout <<"Enter age: "<<"\n";
cin>>age;
if(age>=18){
    cout<<"adult"<<"\n";
}
else{
    cout<<"young"<<"\n";
}

// A school has following rules for grading system:
// .Below 25-F
// 25 to 44-E
// 45 to 49-d
// 50 to 59-c
// 60 to 79-b
// 80 to 100-a
// Ask user to enter marks and print the corresponding grade.
int m;
cout<<"Enter your marks: "<<"\n";
cin>>m;
if(m>=80&&m<=100){
    cout<<"grade:A";
    
}else 
 if(m>=60 && m<=79){
cout<<"grade:B";
}else 
if(m>=50 && m<=59){
    cout<<"grade:C";
}else 
if(m>=45 && m<=49){
    cout<<"grade:D";
}else
 if(m>=25 && m<=44){
    cout<<"grade:E";
}else
if ( m<=25){
    cout<<"grade:F";
}
cout<<"\n";


//Take the day no and print the corresponding day for 1 print monday for 2 tuesday

int day;
cout<<"Enter any number between 1 to 7: ";
cin>>day;
switch (day)
{
case 1:
    /* code */
    cout<<"Monday";
    break;
case 2:
    /* code */
    cout<<"Tuesday";
    break;
case 3:
    /* code */
    cout<<"Wednesday";
    break;
case 4:
    /* code */
    cout<<"Thursday";
    break;
case 5:
    /* code */
    cout<<"Friday";
    break;
case 6:
    /* code */
    cout<<"Saturday";
    break;
case 7:
    /* code */
    cout<<"Sunday";
    break;
default:
    cout<<"not any day";
    break;
}



}
