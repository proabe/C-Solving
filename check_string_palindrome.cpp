#include <iostream>
using namespace std;

bool isPalindrome(string str) {
  unsigned int stringLength = str.size();
  if (str[0] != str[stringLength-1])
  {
    return false;
  }
  unsigned int start = 1, end = stringLength - 2;
  if (stringLength % 2 == 0) {
    while (start <= end)
    {
      if (str[start] != str[end])
      {
        return false;
      }
      start++;
      end--;
    }
    
  } else {
    while (start != end)
    {
     if (str[start] != str[end])
      {
        return false;
      }
      start++;
      end--;
    }
  }
  return true;
}

int main() {
  string input;
  cin >> input;
  cout << isPalindrome(input) << endl;
}