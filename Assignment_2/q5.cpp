#include<iostream>
#include<cmath>

using namespace std;
double power(int m,int n=2){
double result;
while(n!=0){
result=pow(m,n);
}
return result;
}
double power(double m,int n=2){
double result;
while(n!=0){
result=pow(m,n);
}
return result;
}
int main(){
double m;
int n;
cout<<"Enter the value of which you want power";
cin>>m;
cout<<"Enter the power";
cin>>n;
double res1=power(m,n);
cout<<"Result of "<<m<<" to the  power "<<n<<" is "<<res1<<endl;
cout<<"Enter the double value of which you want power";
cin>>m;
cout<<"Enter the power";
cin>>n;
double res2=power(m,n);
cout<<"Result for overloading method "<<m<<" to the  power "<<n<<" is "<<res2<<endl;
}
