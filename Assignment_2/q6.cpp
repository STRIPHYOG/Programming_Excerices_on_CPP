#include<iostream>
#include<cmath>
using namespace std;
double avg(int n,int arr[]){
int sum=0;
for(int i=0;i<n;i++){
sum=sum+arr[i];
}
double resut= sum/n;
return resut;
}

double varience(int n,int* arr,double avg){
double res=0;
for(int i=0;i<n;i++){
res=res+((arr[i]-avg)*(arr[i]-avg));
}
double result=res/n;
return result;
}

double standard_dev(int var){

return sqrt(var);
}
int main(){
int n;

double var,sd,x_bar;
cout<<"Enter no of element";
cin>>n;
int *arr=new int[n];
cout<<"Enter the elements";
for(int i=0;i<n;i++){
cin>>arr[i];
}
x_bar=avg(n,arr);
var=varience(n,arr,x_bar);
sd=standard_dev(var);
cout<<"Average"<<x_bar<<endl;
cout<<"varience"<<var<<endl;
cout<<"standard deviation"<<sd<<endl;
return 0;
}


