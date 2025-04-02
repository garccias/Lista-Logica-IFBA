/* 33. Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0). */


#include <stdio.h>

int main() {

 int x, y;
 
 printf("Digite x e y:\n");
 scanf("%d %d", &x, &y);
 
 if( x > 0 && y > 0) {
     
     printf("Primeiro quadrante");
 }
 
 else if(x < 0 && y > 0){
     printf("Segundo quadrante");
 }
 
 else if(x < 0 && y < 0){
     printf("Terceiro quadrante");
 }
 
 else if(x > 0 && y < 0){
     printf("Quarto quadrante");
 }
 
 else if(x == 0 && y == 0){
     printf("Na origem");
 }
 
 else if(y == 0 && x != 0) {
     printf("Sobre o eixo X");
 }
 
 else if(x == 0 && y != 0){
     printf("Sobre o eixo Y");
 }
     
}