#include <iostream>
using namespace std;
int factorial(int n) {
    int result = 1;
    while (n > 1) {
        result = result * n;
        n--;
    }
    return result;
}
int zero(int num){
int fact = factorial(num);
    int count = 0;
    while (fact % 10 == 0) {
        count++;
        fact /= 10;
    }
    return count;
}
int main(){
int num;
cout<<"Enter the number :";
cin>>num;
int result=zero(num);
cout<<result;
return 0;
}
