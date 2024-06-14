//Reverse the array
#include<stdio.h>
void reverse(int arr[],int i,int j){
    int temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
     reverse(arr,0,size-1);
    printf("Reversed array\n");
   
    print(arr,size);
}