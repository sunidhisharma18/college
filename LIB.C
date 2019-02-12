#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
struct lib
		{
			int id, cost;
			char name[20],author[20];
		}b[3];
void main()
{
	int add_book();
	int display();
	int author();
	int list();
	int count();
	int a;
	char ch;
	clrscr();
	printf("The menu :\n1.Add book \n2.Display book \n3.List book of given author\n4.Book of given title\n 5.Count of book\n 6.Exit");
	do
	{
		printf("\nEnter the choice:");
		scanf("%d",&a);
		switch(a)
		{
			case 1: add_book();
					break;
			case 2: display();
					break;
			case 3: author();
					break;
			case 4: title();
					break;
			case 5: count();
					break;
			case 6: exit(0);
					break;
		}
		fflush(stdin);
		printf("\n do u want to continue :");
		scanf("%c",&ch);
		}while(ch=='y'||ch=='Y');
		getch();
		}

		int add_book()
		{
			int i;
			for(i=0;i<2;i++)
			{
					fflush(stdin);
					printf("\nEnter book name :");
					gets(b[i].name);
					printf("\nEnter author :");
					gets(b[i].author);
					fflush(stdin);
					printf("\nEnter id:");
					scanf("%d",&b[i].id);
					printf("\nEnter cost:");
					scanf("%d",&b[i].cost);
			}
			return 0;
		}
		int display()
		{
			int i;
			for(i=0;i<2;i++)
			{
				printf(" Books %d :",i+1);
				printf(" \nName : %s",b[i].name);
				printf(" \nAuthor : %s",b[i].author);
				printf(" \nId : %d ",b[i].id);
				printf(" \nCost : %d",b[i].cost);
			}
			return 0;
		}
		int author()
		{
			int i,temp=0;
			char n[20];
			clrscr();
			printf( "\nEnter author name :");
				fflush(stdin);
			gets(n);

			for(i=0;i<2;i++)
			{
				   if(strcmp(n,b[i].author)==0)
					{
						temp++;
						printf(" Book are : ",b[i].name);
					}
				}
			return 0;
			}
		int title()
		{
			int i,temp=0;
			char m[20];
			clrscr();
			printf( "\nEnter title name :");
			fflush(stdin);
			gets(m);

			for(i=0;i<2;i++)
			{   if(strcmp(m,b[i].name)==0)
					{
						temp++;
						printf(" Book is :",b[i].name);
			}          }
			return 0;
		}
		int count()
		{
			int i,p=0;
			for(i=0;i<2;i++)
			{
				p++;
			}
			fflush(stdin);
			printf("\n No.of book :",p);
			return 0;
		}





