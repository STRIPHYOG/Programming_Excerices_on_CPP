#include <iostream>
using namespace std;
class DB;
class DM{
int meter,cm;
public:
void setvalue(int c,int d){
meter=c;
cm=d;
}
friend void sum(DM,DB);
};
class DB{
int feet,inch;
public:
void setvalue(int a,int b){
feet=a;
inch=b;
}
friend void sum(DM,DB);
};
void sum(DM m,DB n){
int sum1=m.meter+n.feet*0.3048;
int sum2=m.cm+n.inch*0.393701;
cout<<sum1<<endl;
cout<<sum2<<endl;
}
int main(){
DB n1;
n1.setvalue(1,2);

DM m1;
m1.setvalue(2,4);
sum(m1,n1);
return 0;
}
