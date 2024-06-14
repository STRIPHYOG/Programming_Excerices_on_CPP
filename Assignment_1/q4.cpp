#include <iostream>
#include <cmath>
bool check(int a,int b, int c){
if(a+b+c>100)
return false;
float result1 = cbrt(a + (b * sqrt(c)));
    float result2 = cbrt(a - (b * sqrt(c)));
    float result= result1+result2;
    if (result== 1.0) {
        std::cout << a << " " << b << " " << c << std::endl;
        return true;
}
return false;
}
int main(){
//int count=0;
for(int i=1;i<100;i++){
for(int j=1;j<100;j++){
for(int k=1;k<100;k++){
if(check(i,j,k)){
// count++;
 }
}
}
}
//std :: cout<<"count:"<< count<< std :: endl;

return 0;
}

