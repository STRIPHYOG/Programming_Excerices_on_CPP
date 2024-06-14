#include<iostream>
using namespace std;
void example(char a,int b,float c=3.14,double d=6.28){
cout<<"a = "<<a
    <<"\nb = "<<b
    <<"\nc = "<<c
    <<"\nd = "<<d<<endl;
}
int main(){
example('a',5,6.65,8.999);
example('a',5,6.65);
example('a',5);
return 0;
}

// #include <iostream>

// using namespace std;

// // Define the function with default values for the last two parameters
// void displayValues(char c, int i, float f = 3.14, double d = 6.28) {
//     cout << "Character: " << c 
//          << ", Integer: " << i 
//          << ", Float: " << f 
//          << ", Double: " << d << endl;
// }

// int main() {
//     // First call: Pass all four arguments
//     displayValues('A', 100, 1.23f, 9.81);

//     // Second call: Pass three arguments, the fourth uses default
//     displayValues('B', 200, 2.34f);

//     // Third call: Pass two arguments, the third and fourth use defaults
//     displayValues('C', 300);

//     return 0;
// }


