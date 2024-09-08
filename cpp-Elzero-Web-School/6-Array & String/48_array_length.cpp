#include <iostream>
using namespace std;


int main() {

int nums[] = {10, 20, 30, 40, 20, 50};

// Method 1
int length1 = sizeof(nums) / sizeof(nums[0]);
cout << length1 << "\n";
// Method 2
int length2 = end(nums) - begin(nums);
cout << length2 << "\n";
// Method 3
//int length3 = size(nums); //Error in size
//cout << length3 << endl;
return 0;
}