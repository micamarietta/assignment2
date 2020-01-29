#include <iostream>
using namespace std;

//user references to set the vars equal to 0
void zeroBooth(int& var1, int& var2){
  var1 = 0;
  var2 = 0;
}

int main(int argc, char **argv){
  int var1 = 1;
  int var2 = 2;

//call function to set vars equal to 0
  zeroBooth(var1,var2);
  return 0;
}
