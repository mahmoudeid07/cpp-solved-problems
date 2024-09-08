#include <iostream>
using namespace std;

int main() {

// Example 1
int check = 25;
int nums[]{40, 20, 30, 70, 100};
if(nums[0] > check) {
cout << "{" << nums[0] << "} + ";
cout << "{" << nums[3] << "} = ";
cout << nums[0] + nums[3]; 
}

// Ouput
//"{40} + {70} = 110"

// Example 2
//int check = 25;
//int nums[]{20, 35, 30, 70, 100};

// Ouput
//"{35} + {70} = 105"

// Example 3
//int check = 25;
//int nums[]{20, 25, 30, 70, 100};

// Ouput
//"{30} + {70} = 100"

return 0;
}