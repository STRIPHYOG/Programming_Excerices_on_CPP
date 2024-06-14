// /*In India the currency is made up of Rupee denominations Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs.
// 50, Rs. 100, Rs. 500 and Rs. 2000. A bank is trying to find the number of notes of each
// denomination that the teller can give a customer for a certain amount of money, such that he
// has to handle minimum number of notes. Write a program to list out the number of notes of
// each denomination for an amount received through the keyboard.
// Sample Run:
// Enter the amount to be tendered:
// 23418
// Denomination details:
// 2000 x 11 = 22000
// 500 x 2 = 1000
// 100 x 4 = 400
// 10 x 1 = 10
// 5 x 1 = 5
// 2 x 1 = 2
// 1 x 1 = 1
// */
// #include <iostream>
// using namespace std;
// int main(){
// int amount;
// int two_thousand,five_hundred,hundred,fifty,twenty,ten,five,two,one;
// cout<<"Enter the amount to be tendered: ";
// cin>>amount;
// two_thousand=amount/2000;
// amount= amount%2000;
// five_hundred=amount/500;
// amount= amount%500;
// hundred=amount/100;
// amount= amount%100;
// fifty=amount/50;
// amount= amount%50;
// twenty=amount/20;
// amount= amount%20;
// ten=amount/10;
// amount= amount%10;
// five=amount/5;
// amount= amount%5;
// two=amount/2;
// amount= amount%2;
// one=amount;
// cout<<"Denomination details: "<<endl;
// cout<<two_thousand<<"\n";
// cout<<five_hundred<<"\n";
// cout<<hundred<<"\n";
// cout<<fifty<<"\n";
// cout<<twenty<<"\n";
// cout<<ten<<"\n";
// cout<<five<<"\n";
// cout<<two<<"\n";
// cout<<one<<"\n";
// }
#include<iostream>
using namespace std;
int main(){
    int x;
    int n2000,n500,n100,n50,n10,n5,n2,n1;
    cout<<"Enter the amount:";
    cin>>x;
    
    n2000=x/2000;
    x=x%2000;
    n500=x/500;
    x=x%500;
    n100=x/100;
    x=x%100;
    n50=x/50;
    x=x%50;
    n10=x/10;
    x=x%10;
    n5=x/5;
    x=x%5;
    n2=x/2;
    x=x%2;
    n1=x/1;
    x=x%1;

    cout<<"Details are:"<<endl;
    cout<<"n2000:"<< n2000 <<endl;
    cout<<"n500:"<< n500 <<endl;
    cout<<"n100:"<< n100 <<endl;
    cout<<"n50:"<< n50 <<endl;
    cout<<"n10:"<< n10 <<endl;
    cout<<"n5:"<< n5 <<endl;
    cout<<"n2:"<< n2<<endl;
    cout<<"n1:"<< n1 <<endl;

}