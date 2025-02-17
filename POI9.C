#include<stdio.h>
#include<conio.h>
typedef struct
{
int a,b,c,d,e;
}s;
int main(void){
clrscr();
s *ptr=NULL;
ptr++;
printf("%d",(int)ptr);
getch();
return 0;
}