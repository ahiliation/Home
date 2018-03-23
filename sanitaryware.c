#include <stdio.h>
#include <stdlib.h>


main()
{

  int item;
  int totalamount;
  int nbcock;
  int sumnbcock = 0;
  int sumbcock;
  int nacock;
  int sumnacock = 0;
  int sumacock;
  int npcock;
  int sumnpcock = 0;
  int sumpcock;
  int nohshower;
  int sumnohshower = 0;
  int sumohshower;

  struct bibcock {
    int cg603;
     };

  struct anglecock {
    int cm108a;
  };

  struct pillarcock {
    int cg601;
  };


  struct overheadshower {
    int cg404;
  };

  struct bibcock bcock;
  struct anglecock acock;
  struct pillarcock pcock;
  struct overheadshower ohshower;

  bcock.cg603 = 1956;
  acock.cm108a = 445;
  pcock.cg601 = 1936;
  ohshower.cg404 = 317;
  sumbcock = 0;
  sumacock = 0;
  sumpcock = 0;
  sumohshower = 0;

  while (1)
    {
      printf("bibcock[1] 1956 \nanglecock[2] 445 \npillarcock[3] 1936 \noverheadshower[4] 317 \ntotalamount[5]\n");
  scanf("%d",&item);

  switch(item)
    {
    case 1:
      printf(" \nEnter the number of bibcock: ");
      scanf("%d",&nbcock);
      sumnbcock = sumnbcock + nbcock;
      sumbcock = sumnbcock * 1956;
      break;

    case 2:
      printf(" \nEnter the number of anglecock: ");
      scanf("%d",&nacock);
      sumnacock = sumnacock + nacock;
      sumacock = sumnacock * 445;
      break;

    case 3:
      printf(" \nEnter the number of pillarcock: ");
      scanf("%d",&npcock);
      sumnpcock = sumnpcock + npcock;
      sumpcock = sumnpcock * 1936;
      break;

    case 4:
      printf(" \nEnter the number of overheadshower: ");
      scanf("%d",&nohshower);
      sumnohshower = sumnohshower + nohshower;
      sumohshower = sumnohshower * 317;
      break;

    case 5:
      totalamount = sumbcock + sumacock + sumpcock + sumohshower;
      printf("\n Total Amount = %d \n",totalamount);
      exit(0);
    }
    }
}
