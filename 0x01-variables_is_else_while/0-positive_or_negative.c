#include<stdio.h>

int main(){
 int n = rand();
 if(n<0){
printf("%d is negative",n);
 }
 else if(n>0){
printf("%d is positive",n);
 }else{
printf("%d is zero",n);
 }
 }