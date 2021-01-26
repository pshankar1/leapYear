#include <iostream>
using namespace std;

bool leapYear(int x){

  bool leap=false;
  if(x%4 ==0){
    leap= true;
  }
  else if(x%100){
    leap=true;
  }
  else if(x%400){
    leap=true;
  }
  return leap;

}
int main() {
int year=200;
  cout<< "Is given year a leap year?";
  if(leapYear(year))
    cout <<"true";
    else 
    cout<< "false";
  return 0;}