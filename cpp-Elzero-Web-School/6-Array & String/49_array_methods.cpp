#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  // Method 1
  cout << nums[0] << "\n";
  cout << nums[5] << "\n";


  // Method 2
  cout << nums.front() << "\n" << nums.back() << "\n";

  // Method 3
  cout << nums[0] << "\n";
  cout << nums[(nums.size() - 1)] << "\n";

  return 0;
}