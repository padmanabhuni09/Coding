#include <string.h>
#include<iostream>

using namespace std;

class Palindrome
{
public:
static bool stringPalindrome(const std::string& word)
{
  std::string rs(word.rbegin(), word.rend());  // reverse the string 
  return strcasecmp(rs.c_str(), word.c_str()) ; // ignore the case and proceed with comparison
 }
 
};

int main() {
    
    if ( Palindrome::stringPalindrome("Dad") != 0 )
    cout << "Not Palindrome" << endl;
    else
    cout << "it is Palindrome" << endl;
        
    return 0;
}
