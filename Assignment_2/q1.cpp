#include<iostream>
#include<cmath>
using namespace std;
int main(){

double v;

for(int p=1000;p<=10000;p=p+1000){
float r=0.10;
double temp=p;
for(int n=1;n<11;n++){

    v=temp*(1+r);
     temp=v;
    cout<<v<<"\n";
    r=r+0.01;
    
    }
    
}
}
