/*
  UB C Programming Unit 1 Lesson 2 Program 11
  Area of a Triangle
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  float triangleBase, triangleHeight, triangleArea;
  //^initialize variables as float

  printf("Triangle Base: "); //ask user for triangle base
  scanf("%f", &triangleBase); //accepts user input, format as float
  printf("Triangle Height: "); //ask user for triangle height
  scanf("%f", &triangleHeight); //accepts user input, format as float

  triangleArea = 0.5 * (triangleBase * triangleHeight);
  //^find area of triangle

  printf("Area: %0.2f", triangleArea); //output area
  
  return 0;
}