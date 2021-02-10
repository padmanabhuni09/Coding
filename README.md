Solution for Q1:
===============
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

Solution for Question 2:
=======================
select
  c.id,
  c.name
from
  customer c
order by
  c.name desc, 
  c.id asc;

Solution for Question 3:
=======================
select
  id,
  name,
  marks,
  case
    WHEN marks > 90 
     THEN 'A+'
    WHEN marks > 70
     THEN 'A'
    WHEN marks > 50
     THEN 'B'
    WHEN marks >= 40
     THEN 'C' ELSE 'Fail'
  END AS grade
FROM
  students;
