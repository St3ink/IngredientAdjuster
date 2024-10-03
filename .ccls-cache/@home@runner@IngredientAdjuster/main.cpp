/*
Title: Chapter 3 Excercise 6 - Ingredient Adjuster
File Name: IngredientList.cpp
Programmer: Kason Steiner
Date: 09/2024
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks the user how many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream>

using namespace std;
int main() { 

  double sugar = 1.5;
  double butter = 1;
  double flour = 2.75;
  double cookies;

  cout << "How many cookies do you want to make? ";
  cin >> cookies;

  cout << "You will need " << (cookies / 48) * sugar << " cups of sugar.\n";
  cout << "You will need " << (cookies / 48) * butter << " cups of butter.\n";
  cout << "You will need " << (cookies / 48) * flour << " cups of flour.\n";
  
return 0;
}