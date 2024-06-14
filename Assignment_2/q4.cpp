#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no of users";
cin>>n;
int *p=new int [n];
cout<<"Enter user number";
for(int i=0;i<n;i++){
cin>>*(p+i);
}
cout<<"the entered numbers are";
for(int i=0;i<n;i++){
cout<<*(p+i)<<"\n";
}

delete []p;
return 0;
}

