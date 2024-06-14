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
int n;
int sal;
int hour;
cout<<"Enter no of employee"<<endl;
cin>>n;
Employee x[n];
for(int i=0;i<n;i++){
cout<<"Enployee "<<i<<endl;
cout<<"Enter your sal "<<endl;
cin>>sal;
cout<<"Enter your working  hour "<<endl;
cin>>hour;
x[i].getInfo(sal,hour);
x[i].AddSal();
x[i].AddWork();
}}

