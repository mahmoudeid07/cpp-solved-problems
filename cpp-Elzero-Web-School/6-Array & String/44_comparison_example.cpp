#include <iostream>
using namespace std;

int main() {

// Example 1
/*int vals[]{100, 200, 250, 400, 200};

if(vals[0] + vals[4] > vals[2]) {
    cout << "First Number + Last Number are Larger Than Middle Number\n";
    cout << vals[0]<< " + " ;
    cout << vals[4];
    cout << " = " << vals[0] + vals[4] << "\n";
    cout << vals[0] + vals[4] << " > " << vals[2];
}*/

// Example 2
int vals[]{100, 200, 500, 400, 200};

if(vals[1] + vals[3] > vals[2]) {
    cout << "Second Number + Fourth Number are Larger Than Middle Number\n";
    cout << vals[1]<< " + " ;
    cout << vals[3];
    cout << " = " << vals[1] + vals[3] << "\n";
    cout << vals[1] + vals[3] << " > " << vals[2];
}

return 0;
}