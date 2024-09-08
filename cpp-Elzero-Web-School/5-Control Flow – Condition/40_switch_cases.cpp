#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Type a number\n";
  cin >> num;

  switch(num)
  {
    case 10:
    cout << "case 1\n";
    break;

    case 20:
    cout << "case 2\n";
    break;

    case 30:
    case 31:
    case 32:
    cout << "case 3\n";
    break;

    default:
    cout << "Invalid Number\n";
  }

 /* if (num == 10)
  {
    cout << "Case 1";
  }
  else if (num > 19 && num < 21)
  {
    cout << "Case 2";
  }
  else if (num > 29 && num < 33)
  {
    cout << "Case 3";
  }
  else
  {
    cout << "Invalid Number";
  }*/

  return 0;
}