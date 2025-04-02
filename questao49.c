/* 48. Escreva um programa que determine se um dado número N (digitado pelo usuário) é
primo ou não. */


#include <stdio.h>

int main() {
 
 int divisor = 1;
 int num = 0, primo = 0;
 
 printf("Insira um numero:\n");
 scanf("%d", &num);
 
  while(divisor<=num){
      
      if(num % divisor == 0){
          primo++; }
          divisor++;
  }
      
    if(primo == 2){
        
        printf("E primo");
    }  
    
    else{
       printf("Nao e primo");
    }

}