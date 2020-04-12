#include <stdio.h>
#include "point.h"

int main(void)
{
  struct Point food_points[] = {{18 , 76},{19 ,66}, {89, 57}, {9 ,71}, {55, 38},};
  int points_length = 5;
  struct Point current_location = {18,86};
  struct Point *closest_food_location = NULL;
  for (int i = 0; i < 5; i++)
  {
    printf("%d %d\n",food_points[i].x,food_points[i].y);
  }
  

  return 0;
}