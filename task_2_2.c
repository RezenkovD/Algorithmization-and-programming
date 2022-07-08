#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(){
  int **array;
  int R, C, D;
  int i, j;

  printf("Enter the number of rows : ");
  scanf("%d", &R);
  printf("Enter the number of columns : ");
  scanf("%d", &C);
  
  array = (int**)malloc(R *sizeof(int*));
    
  for(i = 0; i < R; i++){
    array[i] = (int*)malloc(C *sizeof(int));
  }
  
  printf("\n");
  
  for(i = 0; i < R; i++){
    for(j = 0; j < C; j++){
      printf("Enter the array element[%d][%d] : ", i, j);
      scanf("%d",&array[i][j]);
    }
  }

  printf("Enter the line number you want to delete : ");
  scanf("%d", &D);

  if(abs(D)>R-1){
    printf("Going beyond the array");
    exit(1);
  }

  int newarray [R-1][C];
  int x = 0;
  
  for(i = 0; i < R; i++){
    if(i != D){
      for(j = 0; j < C; j++){
        newarray[x][j] = array[i][j];
      }
    x++;
    }
    else{
      continue;
    }
  }
  
  printf("\nNew modified array :\n");
  
  for(i = 0; i < R-1; i++){
    for(j = 0; j < C; j++){
      printf("%d ",newarray[i][j]);
    }
    printf("\n");
  }
  
  for(i = 0; i < R; i++){
    free(array[i]);
  }
  
  free(array);
  
  return 0;
}
