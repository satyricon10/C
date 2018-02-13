WHILE

Askisi 1 

Na grafei ena programma to opoio na emfanizei tous arithmous apo to 1 ews to 10

#include <stdio.h>
#include<stdlib.h>
main()
{
Int  i= 1;
while(i<=10)
 { 
printf("%d\n", i);
i++;
 }
system ("pause");
}

Askisi 2 

Na grafei ena programma to opoio na diavazei sinexos enan akeraio kai na ton emfanizei stin
othoni mexri o xristis na eisagei to miden

#include <stdio.h>
#include<stdlib.h>
main()
{ 
int i=1; /* mia  arxiki  tim i  ektos  apo  0  gia  na imaste  sigouroi  oti  tha  ektelestei  o broxos*/
while(i!=0 )
{
printf("Enter  number:\n");
scanf ("%d",&i);
if (i!=0)
printf("Num= %d\n", i);
}
system ("pause");
}


Askisi 3

Na grafei ena programma to opoio na diavazei sinexos enan akeraio kai na emfanizei to minima
"Hello" toses fores oses kai i timi tou akeraiou. H eisagogi akeraion stamata otan eisagei
arnitiko arithmo.Episis to programma prin termatisei na emfanisei to sinoliko arithmo ton
Hello minimaton pou emfanistikan stin othoni.

#include <stdio.h>
#include<stdlib.h>
main()
{
int i,num,times;
times=0;
while(1)
{
printf("Enter  number:\n");
scanf ("%d",&num);
if (num<0)
break;
for (i=0; i<num; i++)
printf("Hello\n");
times +=num;
}
printf ("total number is=%d\n", times);
system ("pause");
}


Askisi 4

Na grafei ena programma to opoio na diavazei enan akeraio kai na emfanizei apo posa
psifia apoteleitai kathos kai to athroisma ton psifion tou.

#include <stdio.h>
#include<stdlib.h>
main()
{
int num,sum,dig;
sum=dig= 0;
printf("Enter  number:");
scanf("%d",&num);
if (num<0)
num = -num;
else if (num == 0)
dig=1;
while (num>0)
{
sum+=num % 10 ;
num=num/10;
dig++;
}
printf ("%d digits  and  their sum is %d\n", dig, sum);
system ("pause");
}

Askisi 6

oriste san stathera enan arithmo PIN. Dimiourgeiste ena programma to opoio tha zita
diarkos apo ton xristi arithmo PIN mexri autos na to dosei to swsto PIN. 
na emfanizontai ta antistoixa minimata.

#include <stdio.h>
#include <stdlib.h>

#define PIN 1234

main()
{
	int x;
	printf("Give your pin number.\n");
	scanf("%d",&x);
	while(x!=PIN)
	{
		printf("Wrong PIN.Try again...\n");
		scanf("%d",&x);
	}
	printf("PIN accepted.Welcome!\n");
	system("pause");
}


Askisi 7 

Tropopoiiste to proigoumeno programma katallila wste o xristis se periptosi lathous
na exei mono 3 prospatheies

#include <stdio.h>
#include <stdlib.h>

#define PIN 1234

main()
{
	int x,counter=1,flag=1;
	printf("Give your pin number.\n");
	scanf("%d",&x);
	while((x!=PIN) && (counter<3))
	{
		flag=0;
		printf("Wrong PIN.Try again...\n");
		scanf("%d",&x);
		if(x==PIN)
		{
			flag=1;
		}
		counter++;
	}
	if(flag==1)
	{
		printf("PIN accepted.Welcome!\n");		
	}
	else
	{
		printf("Your card is blocked now!\n");	
		
	}
	system("pause");
}


PINAKES

ASKISEIS

Na grafei ena programma to opoio na dilonei enan pinaka 5 akeraion, na dinei tis times 100
101 102 103 104 sta stoixeia tou kai na emfanizontai stin othoni

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i,arr[5];
    arr[0]=100;
    arr[1]=101;
    arr[2]=102;
    arr[3]=103;
    arr[4]=104;
    for(i=0; i<5; i++)
    printf("%d\n",arr[i]);
    system("pause");
}

ASKISI

Na grafei ena programma to opoio na dilonei enan pinaka 5 akeraion kai na tis times 
10,20,30,40,50 sta stoixeia tou. Stin sinexeia to programma na emfanizei ta stoixeia 
tou pinaka pou exoun timi megaliteri apo 20
 
#include <stdio.h>
#include<stdlib.h>
main()
{
      int i, arr[]={10,20,30,40,50};
      for(i=0; i<5; i++)
      {
               if (arr[i]>20)
               printf("%d\n",arr[i]);
               }
      system("pause");
      }
      
   
   ASKISI
      
  Na grafei ena programma to opoio na dilonei ena pinaka 10 akeraion na thetei tixaies times
 sta stoixeia tou kai na emfanizei to meso oro ton timon tou pinaka
 
# include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    int i,arr[SIZE];
    float sum;
    sum=0; /*Arxiki  timi  gia ton  ipologismo  toy  athroismatos  tvn stoixivn tou  pinaka*/
    for(i=0; i<SIZE; i++)
    {
            
    printf (" Dose times  arr[%d]=",i);
    
    scanf("%d", &arr[i]);
    sum += arr[i];

}
printf("Avg=%f\n",sum/SIZE);

system ("pause");
}


ASKISI
	
Na grafei ena programma to opoio diavazei 10 akeraious kai na tous apothikevei se ena pinaka.
Sti sinexeia n a elegxei tin an o pinakas einai simetrikos. Os simmetria tou pinaka theoreiste 
tin idiotita to prwto tou stoixeio na einai me to teleutaio to deutero me to proteleutaio

#include <stdio.h>
#include<stdlib.h>
# define SIZE 10
int main()
{
    int i, a[SIZE];
      for(i=0; i<SIZE; i++)
     {
               printf("enter element a[%d]:", i);
               scanf ("%d", &a[i]);
               }
               for (i=0; i<SIZE/2; i++)
               if (a[i]!=a[SIZE-1-i])
               {
                                     printf("mi simetrikos pinakas");
                                     system ("pause");
                                     return 0;
                                     }
                                     
                                     printf("simetrikos pinakas");
                                     
      system ("pause");
      return 0;
      }  
      
      
Askisi 1

Dimiourgiste ena programma to opoio na zitaei apo ton xristi pente akeraious arithmous kai na 
tous apothikevei se ena pinaka. environ sinexeia ypologiste to athroisma kai to ginomeno ton 
stoixeion tou pinaka. Ta apotelesmta sas na apothikeuontai se ena neo pinaka kai sto telos na
ektiponontai 

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a[5],b[2],x,sum=0,prod=1;
	for(int i=0; i<5; i++)
	{
		printf("Dwse arithmo\n");
		scanf("%d",&x);
		a[i]=x;
		sum+=x;
		prod*=x;	
	}
	b[0]=sum;
	b[1]=prod;
	printf("To athroisma twn stoixeiwn einai %d\n",b[0]);
	printf("To ginomeno twn stoixeiwn einai %d\n",b[1]);
	system("pause");
}


 Askisi 2
 
 Dimiourgiste ena programma me 2 diaforetikous pinakes gia 2 diaforetikous mathites.Se kathe
 pinaka tha apothikevontai 3 vathmoi gia kathe mathiti. en sinexeia se ena trito pinaka 
 ypologiste ton meso oro ton 2 mathiti ana mathima. Ektiposte ta apotelesmata
 
 
 #include <stdio.h>
#include <stdlib.h>

main()
{
	int math1[3],math2[3],x;
	float mo[3];
	for(int i=0; i<3; i++)
	{
		printf("Dwse vathmo gia ton prwto mathiti\n");
		scanf("%d",&x);
		math1[i]=x;
	}
	for(int i=0; i<3; i++)
	{
		printf("Dwse vathmo gia ton deutero mathiti\n");
		scanf("%d",&x);
		math2[i]=x;
	}
	for(int i=0; i<3; i++)
	{
		mo[i]=(math1[i]+math2[i])/2;
	}
	printf("Oi mesoi oroi twn mathimatwn einai:\n");
	for(int i=0; i<3; i++)
	{
		printf("%f\t",mo[i]);
	}
	system("pause");
}
 
 
  
 Askisi 3 seiriaki anazitisi
    
Dimiourgiste ena programma to opoio na zitaei apo ton xristi 5 arithmous kai na apothikevei se
ena pinaka.en sinexeia me mia strathera ton arithmo KEY=3. Psaxte an yparxei ston pinaka sas
kai emfaniste to antistoixo minima

#include <stdio.h>
#include <stdlib.h>
#define KEY 3

main()
{
	int a[5],x,flag=0;
	for(int i=0; i<5; i++)
	{
		printf("Dwse arithmo\n");
		scanf("%d",&x);
		a[i]=x;
	}
	for(int i=0; i<5; i++)
	{
		if(a[i]==KEY)
		{
			printf("To KEY vrethike stin thesi %d tou pinaka\n",i+1);
			i=5;
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("To KEY den vrethike ston pinaka\n");
	}
	system("pause");
} 


Askisi 4 

Dimiourgiste ena programma to opoio na zitaei apo ton xristi 5 arithmous kai na apothikevei se
ena pinaka en sinexeia tiposte ton pinaka me seira apo to telos pros tin arxi

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a[5],x;
	for(int i=0; i<5; i++)
	{
		printf("Dwse arithmo\n");
		scanf("%d",&x);
		a[i]=x;	
	}
	printf("The reversed array is:\n");
	for(int i=4; i>=0; i--)
	{
		printf("%d\t",a[i]);
	}

	system("pause");
}

Askisi 5

Dimiourgiste ena pinaka to opoio na zitaei apo ton xristi 5 arithmous kai na tous apothikevei 
se ena pinaka. en sinexeia vreite to megisto kai to elaxisto stoixeio tou pinaka

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a[5],x,min,max;
	for(int i=0; i<5; i++)
	{
		printf("Dwse arithmo\n");
		scanf("%d",&x);
		a[i]=x;	
	}
	min=max=a[0];
	for(int i=0; i<5; i++)
	{
		if(a[i]<min) 
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("min=%d max=%d\n",min,max);

	system("pause");
}


Askisi 6

Dimiourgiste ena programma to opoio na zitaei apo ton xristi 10 arithmous kai na tous 
apothikevei se ena pinaka. en sinexeia ypologiste to plithos ton artion kai to plithos ton 
peritton arithmon tou pinaka

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a[10],x,artioi=0,perittoi=0;
	for(int i=0; i<10; i++)
	{
		printf("Dwse arithmo\n");
		scanf("%d",&x);
		a[i]=x;
		if(a[i]%2==0)
		{
			artioi++;
		}
		else
		{
			perittoi++;
		}
		
	}
	printf("artioi=%d perittoi=%d\n",artioi,perittoi);

	system("pause");
}









