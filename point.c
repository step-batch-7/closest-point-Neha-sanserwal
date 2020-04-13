#include "point.h"

double find_distance(struct Point food_points,struct Point current_location){
  return ZERO;
}


void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location){
  double min_distance = __DBL_HAS_INFINITY__;
  for (int i = ZERO; i < points_length; i++){
    find_distance(food_points[i],current_location);
  }

  closest_food_location->x = food_points[ZERO].x;
  closest_food_location->y = food_points[ZERO].y;
}