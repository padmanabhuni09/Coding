#include <iostream>
#include <string>
using namespace std;

void Palindrome(string);


void Palindrome(string MyString) {
  int i = 0;
  int j = MyString.length() - 1;
  int flag = 0;

  while(j > i){
    if (tolower(MyString[i]) != tolower(MyString[j])){
      flag = 1;
      break;
    }
    i++;
    j--;
  }

  if (flag == 0){
    cout<< MyString <<" is Palindrome.\n";
  }
  else{
    cout << MyString <<" is not Palindrome\n";
  }
}

int main() {
  Palindrome("1881");
  Palindrome("Dad");
  Palindrome("Step on no pets");
  return 0;
}
