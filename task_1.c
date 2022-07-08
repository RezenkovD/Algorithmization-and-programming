#include <stdio.h>
#include <stdlib.h>
#define N 6

int main(){

FILE *file1 = fopen("test.txt", "w");
char array [N][N];
char temp [256];
char ch;

char a[255] = "КПІ ім. Ігоря Сікорського, кафедра АПЕПС, ТР-14, Рєзєнков Дмитро, 21 варіант\n";

fprintf(file1, a);

for (int x = 0; x < N; x++){
   for (int y = 0; y < N; y++){
     printf("Enter [%d][%d] character : ", x, y);
     scanf(" %c", &array[x][y]);
   }
 }

for (int x = 0; x < N; x++){
   for (int y = 0; y < N; y++){
     fprintf(file1, "%c  ", array[x][y]);
   }
   fprintf(file1,"\n");
 }

fclose(file1);

file1 = fopen("test.txt", "r");
FILE *file2 = fopen("test.bak", "w");

while((ch = fgetc(file1)) != EOF){
 fputc(ch, file2);
}

fclose(file1);
fclose(file2);

return 0;

}
