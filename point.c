#include <stdio.h>
#include "point.h"
void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location){
  closest_food_location->x = &food_points[0].x;
  closest_food_location->y = &food_points[0].y;
}