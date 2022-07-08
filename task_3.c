// varian = 22
// Структура «Перукарня»: назва, адреса, кількість майстрів, час
// роботи, номер черги.

#include <stdio.h>
#include <stdlib.h>

struct hairdressers {
  char name_shop[32];
  char street[32];
  char work_time[16];
  int personal;
  int queue_number;
};

int main(){
FILE *file1 = fopen("hairdresser.txt", "w");

struct hairdressers HD[5] = 
{
  {"U_Reznkova","Khreshchatyk", "09:00-18:00", 12, 1},
  {"U_M","Fulton Street", "11:00-17:00", 20, 2},
  {"UL_U_A","Park Avenue", "07:00-19:00", 5, 4},
  {"N_LA","Lafayette Avenue", "10:00-16:00", 10, 6},
  {"NY_C","Rockaway", "12:00-16:00", 22, 8}
};

for(int i = 0; i < 5; i++){
fprintf(file1, "%s ", HD[i].name_shop);
fprintf(file1, "%s ", HD[i].street);
fprintf(file1, "%s ", HD[i].work_time);
fprintf(file1, "%d ", HD[i].personal);
fprintf(file1, "%d\n", HD[i].queue_number);

}

fclose(file1);

int nb;
printf("Enter you number [0,4] : ");
scanf("%d", &nb);

FILE *fl = fopen("hairdresser.txt", "r");
char cn;
int counter = 0;

if(abs(nb) <=4){
  while(cn != EOF)
  {
    cn = fgetc(fl);  
    if(cn == '\n')
    {
      counter++;
    }
    if((counter) == nb)
    {
      printf("%s", &cn);
    }
  }
}
else
  {
    printf("!!!Enter you number [0,4]!!!\n");
    exit(1);
  }
}
