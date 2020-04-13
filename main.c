#include <stdio.h>
#include "point.h"
int main(void)
{
  Point food_points[] = {{18 , 76},{19 ,66}, {89, 57}, {9 ,71}, {55, 38},};
  int points_length = 5;
  Point current_location;
  Point closest_food_location = {0,0};
  printf("Enter the location of organism (x, y): \n");
  scanf("%d %d", &current_location.x,&current_location.y);
  get_closest_food( food_points,  points_length,current_location, &closest_food_location);
  printf("Location of organism: [%d %d],\t",current_location.x, current_location.y);
  printf("Closest food target : [%d %d]\n",closest_food_location.x, closest_food_location.y);
  return 0;
}