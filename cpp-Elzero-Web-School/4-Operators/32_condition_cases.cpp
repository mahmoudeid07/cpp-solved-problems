#include <iostream>
using namespace std;

int main() {

int age = 18;
int points = 450;

if(age >= 18) {
    cout << "Age is OK." << endl;
} else {
    cout << "Age isn't OK" << endl;
}
if (points > 500) {
    cout << "pass" << endl;
} else {
    cout << "fail" << endl;
} 

//Case 2
age = 15;
points = 600;

if(age >= 18) {
    cout << "Age is OK." << endl;
} else {
    cout << "Age isn't OK" << endl;
}
if (points > 500) {
    cout << "pass" << endl;
} else {
    cout << "fail" << endl;
}

return 0;
}