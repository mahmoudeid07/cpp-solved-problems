#include <iostream>
using namespace std;

int main() {

    int age = 40;
    int points = 100;

    // Using nested ternary operators and inline ifs for conditions
    (age > 18 ? cout << "Age Is Ok\n" : cout << ""),
    (age > 18 && points > 50 ? cout << "Points Is Ok\n" : cout << ""),
    (age > 18 && points > 50 && sizeof(age) == 4 ? cout << "Age Data Is 4 Bytes\n" : cout << "");

    return 0;
}
