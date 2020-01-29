#include <iostream>
using namespace std;

//gets user input in feet and inches
void userInput(double& feet, double& inches){

  cout << "Enter the number of feet.";

  cin >> feet;

  cout << "Enter the number of inches.";

  cin >> inches;
}

//converts feet and inches into meters and centimeters
void convertToMetCent(double& feet, double& inches, double& meters, double& centimeters){
  meters = feet * 0.3048;
  centimeters = ((inches /12) * 0.3048) / 100.0;
}

//output converted values to console
void outputValues(double& feet, double& inches, double& meters, double& centimeters){
  cout << feet << " feet and " << inches << " inches is " << meters << " meters and " << centimeters << " centimeters." << endl;
}

int main(int argc, char **argv){
  double feet = 0;
  double inches = 0;
  double meters = 0;
  double centimeters = 0;
  string userResponse = " ";

//keep prompting the user until they want to stop
  while(userResponse != "exit"){
    cout << "Program starting..." << endl;
    userInput(feet, inches);
    convertToMetCent(feet, inches, meters, centimeters);
    outputValues(feet, inches, meters, centimeters);

    //ensure the user wants to continue
    cout << "Do you want to exit? Type 'exit' to leave the program." << endl;

    cin >> userResponse;
  }
  return 0;
}
