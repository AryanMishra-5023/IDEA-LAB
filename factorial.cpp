#include <iostream>
using namespace std;
class Fact{
public:
int factorial(int num){
  int mul = 1;
  for(int i = 1;i <= num;i++){
    mul = mul * i;
  }
  return mul;
}
};
int main(){
  Fact f;
  int num;
  cout << "Enter a number: " << endl;
  cin >> num;
  cout << "Factorial of entered number: " << f.factorial(num) << endl;
}
