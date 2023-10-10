#include<stdio.h>
// This function compares two numbers to determine the greater from the lesser
int max(int num1, int num2){
    int result;
    if(num1 > num2){
       result=num1;
    }else{
       result=num2;
    }
    return result;
}
int main(){
printf("%d", max(354,332));
   return 0;
}

