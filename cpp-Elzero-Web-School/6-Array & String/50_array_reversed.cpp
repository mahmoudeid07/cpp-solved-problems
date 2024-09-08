#include <array>
#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit The Next 3 Lines
  int index = 1;
  array<int, 3> oldNums = {10, 20, 30};
  array<int, 3> newNums;

  // Write Your Code Here
  newNums.at(0) = oldNums.at(2);
  newNums.at(1) = oldNums.at(1);
  newNums.at(2) = oldNums.at(0);

  // Do Not Edit The Next 3 Lines
    cout << newNums.at(0) << "\n"; // 30
  cout << newNums.at(1) << "\n"; // 20
  cout << newNums.at(2) << "\n"; // 10


  return 0;
}