/* 
You are a single celled organism whose location is represented in two dimensions.
You have several food targets around you, whose locations are also represented in two dimensions.

Write a program, which when given the above data can determine the food target closest to the single celled organism.
Assuming that there are five food targets at:
    [18 76] [19 66] [89 57] [9 71] [55 38]

Location of organism: [18 86],  Closest food target : [18 76]
Location of organism: [97 27],  Closest food target : [89 57]
Location of organism: [69 7],   Closest food target : [55 38]
Location of organism: [10 94],  Closest food target : [18 76]
Location of organism: [36 27],  Closest food target : [55 38]
*/

#include <math.h>

#define ZERO 0
#define FOR_EACH_POINT_IN_FOOD_POINTS for (int i = ZERO; i < points_length; i++)
#define POINT food_points[i]
#define SQUARE_OF_DIFF pow(diff,2)
#define POINT_TO_FOOD(pointer_for_organism , food ) \
      pointer_for_organism->x = food.x;\
      pointer_for_organism->y = food.y;
typedef struct Point{
  int x;
  int y;
} Point;

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
double find_distance(Point food_points,Point current_location);
double get_pow_of_diff(int value1, int value2 );