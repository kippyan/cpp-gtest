//Author: Kevin Buffardi
#include "rando.h"
#include <string>

/**
 * Determines if either first or second parameter is evenly 
 * divisible by the other.
**/
bool Rando::isDivisibleBy(int first, int second)
{
  return (first % second) ? false : true;
}

/**
 * Determines, without case sensitivity, whether the parameter is
 * if read either backwards (right-to-left) or forwards (left-to-right)
**/
bool Rando::isPalindrome(std::string eval)
{

	return true;
}

/**
 * Returns the digit {0...9} that occurs the most often within the parameter
 * or returns -1 if there is no single digit that occurs more often than all
 * the others
**/
unsigned int Rando::mostPopularDigit(unsigned int num)
{
  std::string istr = (std::string) num;
  int[] digits = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  for(int i = (int)num.size(); i > 0; i--){
    digits[stoi(num[i])]++;
  }
  int mostcount = -1;
  int mostindex = -1;
  for(int i = 0; i < 10; i++){
    if(digits[i] > most){
      mostcount = digits[i];
      mostindex = i;
    }
  }
  for(int i = 0; i < 10; i++){
    if(digits[i] == mostcount && mostindex != i)
      return -1;
  }
  return mostindex;
}
