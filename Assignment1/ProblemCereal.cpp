#include <iostream>
#include <cmath>

using namespace std;
const double METRIC_TON_IN_OZ = 35273.92;
double cerealWeightOz;
double cerealWeightTons;
double ouncesToTons(double ounces);
double numToMakeTon(double ounces);
void userInput();
void output();

int main() {
   userInput();
   cerealWeightTons = ouncesToTons(cerealWeightOz);
   output();

   return 0;
}

//method to convert ounces to metric tons
double ouncesToTons(double ounces) {
   return ounces / METRIC_TON_IN_OZ;
}

//method to determine how many times a weight in ounces goes into a metric ton
double numToMakeTon(double ounces) {
   return METRIC_TON_IN_OZ / ounces;
}

//handles the user interaction
void userInput() {
   cout << endl << "Enter the weight of your cereal in ounces: ";
   cin >> cerealWeightOz;
   cout << endl;

   //ensures an input greater than 0
   while(cerealWeightOz <= 0) {
      cout << "Please enter a value greater than 0: ";
      cin >> cerealWeightOz;
   }

   cout << endl;
}

//formats and prints the output to console
void output() {
   cout << "The cereal weighs " << cerealWeightTons << " metric tons." << endl;
   cout << "You would need " << ceil(numToMakeTon(cerealWeightOz)) << " (" << numToMakeTon(cerealWeightOz);
   cout << " to be exact) boxes to have one metric ton of cereal!" << endl;
   cout << endl;
}



