#include <iostream>
using namespace std;

int main() {

int by = 82; // by => Birth Year
int s = 500; // s => Salary

cout << (by > 80 ? (s < 600 ? "Ok\n" : "High\n") : "Not Ok");

return 0;
}