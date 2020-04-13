#include <limits.h>
#include "point.h"

double get_pow_of_diff(int value1, int value2 ){
  double diff = value1-value2;
  return SQUARE_OF_DIFF;
}

double find_distance(Point food_points,Point current_location){
  double pow_of_x_diff = get_pow_of_diff(food_points.x, current_location.x);
  double pow_of_y_diff = get_pow_of_diff(food_points.y, current_location.y);
  return pow_of_x_diff+ pow_of_y_diff;
}


void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location){
  double distance =find_distance(food_points[ZERO],current_location);
  
  double min_distance = distance;
  closest_food_location->x = food_points[ZERO].x;
  closest_food_location->y = food_points[ZERO].y;

  FOR_EACH_POINT_IN_FOOD_POINTS{
    distance = find_distance(POINT,current_location);

    if(distance < min_distance){
      min_distance = distance;
      closest_food_location->x = POINT.x;
      closest_food_location->y = POINT.y;
    }
  }
}