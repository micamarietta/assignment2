#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int a[4][5];
  int numberEntered = 0;

  //load the array w user input
  for(int row = 0; row < 4; ++row){
    for(int column = 0; column < 5; ++ column){
      cout << "Enter a number" << endl;
      cin >> numberEntered;
      a[row][column] = numberEntered;
    }
  }

  for(int row = 0; row < 4; ++row){
    for(int column = 0; column < 5; ++column){
      cout << a[row][column] << " ";
      if(column == 4){
        cout << endl;
      }
    }
  }

  return 0;
}
