#include "point.h"

double find_distance(struct Point food_points,struct Point current_location){
  return ZERO;
}


void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location){
  double min_distance = __DBL_HAS_INFINITY__;
  double distance = ZERO;

  FOR_EACH_POINT_IN_FOOD_POINTS{
    distance = find_distance(POINT,current_location);

    if(distance < min_distance){
      closest_food_location->x = POINT.x;
      closest_food_location->y = POINT.y;
    }
    
  }

  
}