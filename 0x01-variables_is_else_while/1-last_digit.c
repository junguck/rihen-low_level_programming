#include<stdio.h>
int main(){
    int n=srand(time(0));
if(n<5){
printf("last digit of %d is and is greater than 5",n);
}else if(n>6){
printf("last digit of %d is and is less than 6",n);
}else if(n=0 || n>6){
printf("last digit of %d is and is less than 6 and not 0",n);
}
return 0;
}