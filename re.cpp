#include <stdio.h>
#include <stdlib.h>

/*Gia pinaka*/
char seats[13][5];
int i,n,m1,n1,j;
	
void pinakas();
void menu();
void kratiseis();
void akirosi();
	
int main(void)
{
   menu();
   pinakas();   
   kratiseis();
   
 return 0;
}

/*Arxizei to menu*/
void menu()
{
int choice;

 while (choice != 7)
 {
        printf("\n");
        printf("**********************************************************\n");
        printf("*                 KRATISEIS THESEON LEOFOREIOU           *\n");
        printf("* 1.Emfanisi theseon                                     *\n");
        printf("* 2.Kratiseis theseon�                                   *\n");
        printf("* 3.Akirosi theseon                                      *\n");
        printf("* 4.Αποτύπωση θέσεων λεωφορείου *\n");
        printf("* 5.Ακύρωση θέσης                            *\n");
        printf("* 6.Αναζήτησης θέσης                      *\n");
        printf("* 7.Τέλος                                           *\n");
        printf("**********************************************************\n");
        printf("\n Epilexte apo to menu :");
        if (scanf("%d", &choice)==1)
          {
             
          }  else choice=getchar();             

   if (choice>=1 && choice<=6)
   {
    switch (choice)
    {
    case 1:
        
	    pinakas();
        break;
    case 2:
        kratiseis();       
        break;
    case 3:
               
        break;
    case 4:
          	
        break;
    case 5:
            	
        break;
    case 6:
            	
        break;
    }
   }
 }

}
/*Telionei to menu*/

/*O pinakas*/
void pinakas()
{
	char seats[13][5];
	int i,n,m1,n1,j;	
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
		seats[i][j]='b';
		}
	}
	for(i=2;i<13;i++)
	{
		for(j=0;j<5;j++)
		{
			seats[i][j]='b';
		}
	}
	while(1)
	{
		for(i=0;i<13;i++)	{	
		
			for(j=0;j<5;j++){
				printf("%c",seats[i][j]);				
			} 
			printf("\n");
		}
		printf("\n Dose 0 gia exodo sto menu:\n");
		scanf("%d",&n);
		
		if(n==0)break;		
		
	}
}
/*telionei o pinakas*/

/*Kratiseis theseon*/
void kratiseis()
{
	char seats[13][5];
	int i,n,m1,n1,j;	
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
		seats[i][j]='b';
		}
	}
	for(i=2;i<13;i++)
	{
		for(j=0;j<5;j++)
		{
			seats[i][j]='b';
		}
	}
	while(1)
	{
		for(i=0;i<13;i++)	{	
		
			for(j=0;j<5;j++){
				printf("%c",seats[i][j]);				
			} 
			printf("\n");
		}
		printf("\n Dose theseis (i 0) gia exodo:\n");
		scanf("%d",&n);
		
		if(n==0)break;
		
		printf("(Oi theseis tha fenontai me x)Dialexte grammi(1-13) kai stili(1-5) gia %d theseis:",n);
		for(i=0;i<n;i++)
		{
		 scanf("%d%d",&m1,&n1);
		}
		 if(seats[m1-1][n1-1]=='x')
		 
		 	printf("I thesi einai piasmeni, dose nea thesi:");
		 
		 seats[m1-1][n1-1] = 'x';
		
	}
	
}
/*telos kratiseon*/	

/*Akirosi theseon*/
void akirosi()
{

	char akirosi[53];
	printf("Poses theseis thelete na akirosete:?\n");
	scanf("%c",&akirosi);
	for(int i=0; i<4 ; i++)
              {
                      for (int j =0 ; j<5; j++)
                      {
                          if (stdin(seats[i][j].name , akirosi) == 0)
                          {
                                         //seats_num++;
                                         choice[i][j].seats = 1 ;
                                         system("pause");
                                         system("cls");
                                         displaymenu();
                                         return ;
                          }
                      }
              }	
}
	
	
	
	
	
	
	
	
