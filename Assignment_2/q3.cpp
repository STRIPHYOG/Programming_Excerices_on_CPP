#include<iostream>
#include<cmath>
using namespace std;
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
double res=power(m,n);
cout<<"Result of "<<m<<" to the  power "<<n<<" is "<<res<<endl;
double res2=power(m);
cout<<"Default power 2 of "<<m<<" is "<<res2;
}
