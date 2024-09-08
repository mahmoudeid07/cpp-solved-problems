#include <iostream>
using namespace std;

int main() {
  string fName = "Elzero ";
  string mName = "Web ";
  string lName = "School";

  // Method 1: Using + operator
  cout << fName + mName + lName << "\n";

  // Method 2: Using append() method
  string fullName = fName;
  fullName.append(mName);
  fullName.append(lName);
  cout << fullName << "\n";

  // Method 3: Using concatenation inside cout
  cout << fName << mName << lName << "\n";

  return 0;
}
