#include <stdio.h>

main() 
{
       
int capacity=500;
int plithos,ypoloipo;

do 

{
    
    printf("Yparxoun %d theseis\n",capacity);   
    printf("Exoun kratithei %d theseis\n",500-capacity);   
    printf("Dwse arithmo theseon pou epithimoun\n");
    scanf("%d",&plithos);
    while (plithos>capacity)
    {
          printf("Yparxoun mono %d theseis\n",capacity);
          printf("Poses theseis epithimeis?");
          scanf("%d",&plithos);
          
          }
    capacity=capacity-plithos;
       
}
while (capacity>0);

return 0;
}
