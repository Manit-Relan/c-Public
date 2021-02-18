#include <iostream>

int main() {
  
  double height, weight, bmi;
  
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  std::cout <<"Tyep weight in (kg):";
  std::cin>> weight;


  // Now ask the user for their weight and calculate BMI
   bmi = weight/(height*height);

   std::cout << "Your BMI is "<< bmi<<"\n";
  return 0;

}