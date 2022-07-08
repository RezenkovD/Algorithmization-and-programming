#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(){
  int *array;
  int i, j, size;

  printf("Enter size array : ");
  scanf("%d", &size);

  array = (int*)malloc(size *sizeof(int));

 for(i = 0; i<size; i++){
   printf("Enter the array element [%d] : ", i);
   scanf("%d", &array[i]);
 }
 printf("Output of the initial array\n");
  for(i = 0; i<size; i++){
   printf("%d ", array[i]);
 }

 int newarray[size+1];
 printf("\nEnter the array element [0] : ");
 scanf("%d", &newarray[0]);

 for(i = 1, j = 0; i < size+1 && j<size; i++, j++){
   newarray[i] = array[j];
 }

 printf("Updated array\n");
 
  for(i = 0; i<size+1; i++){
   printf("%d ", newarray[i]);
 }
 return 0;
}