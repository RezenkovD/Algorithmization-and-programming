//Rezenkov variant 4//
#include <stdio.h>
#include <stdlib.h>
#define N 4

int main(int argc, char* argv[]){
printf("\n\t\t\tЛАБОРАТОРНА РОБОТА № 7");
char array [N][N];
for (int i = 0; i < N; i++){
 for (int j = 0; j < N; j++){
   array[i][j] = *argv[1 + i * 3 + j];
   }
 }
//
printf("\n\nВивід початкового масиву : \n");
for(int i = 0; i < N;i++){
 for (int j = 0; j < N; j++){
   printf("%c\t" , array[i][j]);
   }
 printf("\n");
 }
//Перестановка через додаткову діагональ 
char temp1;
for(int i=0,j=0;i<N/2;i++,j++){
   temp1=array[N-1-j][i];
   array[N-1-j][i]=array[i][N-1-j];
   array[i][N-1-j]=temp1;
}
//
printf("\nВивід зміненого масиву : \n");
for (int i = 0; i < N; i++){
 for (int j = 0; j < N; j++){
   printf("%c\t", array[i][j]);
 }
 printf("\n");
}
///////////////////////////////////////
printf("\n\t\t\tЛАБОРАТОРНА РОБОТА № 8\n");
///////////////////////////////////////
int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
printf("\nПочатковий масив :\n\n");
for(int i = 0 ; i < 20; i ++){
 printf("%d ",a[i]);
}
int temp;
for(int j = 0; j < 20; j ++){
for(int i = 0; i < 20 - 1 ; i++ ){
 if(a[i]%2==0){
 if(a[i]<a[i+2]){
   temp = a[i];
   a[i] = a[i+2];
   a[i+2] = temp;
     } 
   }
 } 
}
printf("\n\nМасив після сортування :\n\n");
for(int i = 0 ; i < 20; i ++){
 printf("%d ",a[i]);
}
return 0;
}