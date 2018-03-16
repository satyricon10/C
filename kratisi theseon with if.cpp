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
    printf("Dwse 0 gia exodo\n");
    scanf("%d",&plithos);
    
    if (plithos==0)break;
    
    
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


