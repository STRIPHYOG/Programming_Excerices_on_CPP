#include<iostream>
using namespace std;
class Time{
int hour;
int minute;
public:
void gettime(int h,int min){
hour=h;
minute=min;
}
void puttime(int i){

cout<<"T"<<i<<" = "<<hour<<" hours and " <<minute<<" minutes "<<endl;
}
void sum(Time,Time);
};
void Time:: sum(Time t1,Time t2){
hour=t1.hour+t2.hour;
minute=t1.minute+t2.minute;
if(minute>60){
hour=hour+1;
minute=minute%60;
}
}
int main(){
Time t1,t2,t3;
t1.gettime(2,45);
t2.gettime(3,30);
t3.sum(t1,t2);
t1.puttime(1);
t2.puttime(2);
t3.puttime(3);
return 0;
}
