#include <stdio.h>

int main()
{

  int tile_length,ttlength;
  int area, asingle;
  int total; 
  int nlength, nbreath;
  int ntiles,rtiles;
  printf("Tile measurement ");
  scanf("%d",&tile_length);
  area = tile_length * tile_length;
  /* 11 14 */
  printf("Number of tiles in length and breath in the room \n");
 scanf("%d %d",&nlength,&nbreath);
 ntiles = nlength * nbreath ;
 total = ntiles * area;
 printf("Target tile measurement ");
 scanf("%d",&ttlength);
 asingle = ttlength * ttlength;
 rtiles = total/asingle;

 printf("Number of tiles required: %d \n",rtiles);

 return 0;

}
