#include <iostream>
using namespace std;

int main(int argc, char ** argv){
  int numberArray[10];
  int numEntered;

//load array with input
  for(int i = 0; i < 10; ++i){
    numEntered = 0;

    while(numEntered <= 0){
      cout << "Enter an integer" << endl;
      cin >> numEntered;
    }
    //only positive integers are entered into the array
    numberArray[i] = numEntered;
  }

cout << "The array is [";

//loop through array to print values

for(int i = 0; i <= 9; ++i){
  if(i == 9){
    cout << numberArray[i] << "]" << endl;
  }
  else{
    cout << numberArray[i] << ",";
  }
}

return 0;
}
