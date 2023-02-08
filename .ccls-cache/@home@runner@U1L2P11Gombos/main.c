/*
  UB C Programming Unit 1 Lesson 2 Program 11
  Area of a Triangle
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  float triangleBase, triangleHeight, triangleArea;
  //^initialize variables as float

  printf("This program allows you to enter the base and height of a triangle. The program will then output the area of this triangle. You will get two prompts:\n\t- Base: Enter the base of the triangle\n\t- Height: Enter the height of the triangle\n"); //Intructions
  
  printf("Base: "); //ask user for triangle base
  scanf("%f", &triangleBase); //accepts user input, format as float
  printf("Height: "); //ask user for triangle height
  scanf("%f", &triangleHeight); //accepts user input, format as float

  triangleArea = 0.5 * (triangleBase * triangleHeight);
  //^find area of triangle

  printf("The area of your triangle is %0.2f units squared.", triangleArea); //output area
  
  return 0;
}