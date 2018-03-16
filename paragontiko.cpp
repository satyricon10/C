#include <stdio.h>
#include <stdlib.h>

main()

{
      int p=1;
      int i;
      int ar;
      printf("Dwse arithmo: ");
      scanf("%d", ar);
      for (i=2;i<=ar;i++)
      p=p*i;
      printf("To paragontiko tou %d einai %d",ar,p);
      
      return 0;
}
