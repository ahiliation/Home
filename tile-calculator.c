/*
Copyright 2018 Jeffrin Jose T

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

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
