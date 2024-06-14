#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
   while(n>1){
    fact = fact*n;
    n--;
    }
    return fact;
}

bool is_curious(int num){
    int sum = 0;
    int temp = num;
    while(temp > 0){
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return num == sum;
}

int main(){
    for(int i=1; i<=10000; i++){
        if(is_curious(i)){
            cout << i << " ";
        }
    }
    return 0;
// }
// #include <iostream>

// int main() {
//     printf("Numbers up to 10000 equal to the sum of the factorial of their digits are:\n");

//     for (int number = 10; number <= 10000; ++number) {
//         int sumOfFactorials = 0;
//         int originalNumber = number;

//         while (originalNumber > 0) {
//             int digit = originalNumber % 10;
//             originalNumber /= 10;

//             // Calculate factorial of the digit
//             int factorial = 1;
//             for (int i = 1; i <= digit; ++i) {
//                 factorial *= i;
//             }

//             sumOfFactorials += factorial;
//         }

//         if (sumOfFactorials == number) {
//             printf("%d\n", number);
//         }
//     }

//     return 0;
}
