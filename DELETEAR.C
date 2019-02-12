#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,pos=0,ar[12];
 clrscr();
 printf("enter the array:\n");
 for(i=0;i<10;i++)
 {
   printf("enter the element %d:\n",i);
   scanf("%d",&ar[i]);
 }
 printf("enter the position to be deleted:\n");
 scanf("%d",&pos);
 for(i=pos;i<=9;i++)
 {
   ar[i]=ar[i+1];
 }
 printf("the new array is:\n");
 for(i=0;i<9;i++)
 {
   printf("%d %d\n",i,ar[i]);
 }
 getch();
 }