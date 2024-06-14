#include <iostream>
using namespace std;
int main(){
int count[]={0,0,0,0,0};
int voter;
int spoilt=0;
cout<<"Enter the number of voters:";
cin>>voter;
for(int i=0;i<voter;i++){
cout<<"Enter the number for vote ";
int vote;
cin>>vote;
switch(vote){
 case 1:
 count[0]+=1;
 break;
 case 2:
 count[1]+=1;
 break;
 case 3:
 count[2]+=1;
 break;
 case 4:
 count[3]+=1;
 break;
 case 5:
 count[4]+=1;
 break;
 default:
 spoilt++;
 break;
 }
}
for(int i=0;i<5;i++){
cout<<"Candidate"<<i+1<<": "<<count[i] << "votes\n";
}
cout<<"Spoilt :"<<spoilt;
return 0;
}
