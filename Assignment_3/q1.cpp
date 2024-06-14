#include<iostream>
using namespace std;
class Employee {
int sal;
int hour;
public:
void getInfo(int sal1,int hour1){
sal=sal1;
hour=hour1;
cout<<"Salary= "<<sal<<endl;
cout<<"Hours work= "<<hour<<endl;
}
void AddSal(){
if(sal<500){
sal=sal+10;
cout<<"New salary= "<<sal<<endl;
}
}
void AddWork(){

if(hour>6){
sal=sal+5;
cout<<"New salary= "<<sal<<endl;
}
}
};
int main(){
Employee x;
x.getInfo(470,4);
x.AddSal();
x.AddWork();
}
