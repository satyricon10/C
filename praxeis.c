#include<stdio.h>
#include<stdlib.h>
int x,y;
void menu();
int prosthesi();
int afairesh();
int pollaplasiasmos();
int diairesh();

int main (void)
{
menu();
return 0;
}
void menu()
{
	int choice,ad,af,pol,di;
	while(choice !=5)
	{
	printf("*********************\n");
	printf("*     CHOICES       *\n");
	printf("* 1.PROSTHESI       *\n");
	printf("* 2.AFAIRESH        *\n");
	printf("* 3.POLLAPLASIASMOS *\n");
	printf("* 4.DIAIRESH        *\n");
	printf("* 5.END             *\n");
	printf("*********************\n");
	printf("give a num between 1-4: ");
	if(scanf("%d", &choice)==1)
	{
		system ("clear");
	}		else choice=getchar();
			system("clear");
			
			if (choice>=1 && choice<=4)
			{
			switch(choice) 
			{
			case 1:
			printf("give the first num a=");
			scanf("%d",&x);
			printf("give the second num b=");
			scanf("%d",&y);
			ad=prosthesi(x,y);
			printf("\nthe result is a+b=%d\n",ad);
			break;
			case 2:
			printf("give the first num a=");
			scanf("%d",&x);
			printf("give the second num b=");
			scanf("%d",&y);
			af=afairesh(x,y);
			printf("\nthe result is a-b=%d\n",af);
			break;
			case 3:
			printf("give the first num a=");
			scanf("%d",&x);
			printf("give the second num b=");
			scanf("%d",&y);
			pol=pollaplasiasmos(x,y);
			printf("\nthe result is a*b=%d\n",pol);
			break;
			case 4:
			printf("give the first num a=");
			scanf("%d",&x);
			printf("give the second num b=");
			scanf("%d",&y);
			di=diairesh(x,y);
			printf("\nthe result is a/b=%d\n",di);
			break;
			
		 }
	 }
   }
}
   
int prosthesi(int a , int b)
{
return a+b;
}

int afairesh(int a, int b)
{
	return a-b;
}
int pollaplasiasmos(int a, int b)
{
	return a*b;
}
int diairesh(int a, int b)
{
	return a/b;
}


			
			
			
			
	
    
