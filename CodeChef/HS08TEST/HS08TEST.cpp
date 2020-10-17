#include <iostream>
using namespace std;

int main(){
   int amount;
   double balance,remainder;
   cin >> amount;
   cin >> balance;
   if(amount % 5 ==0){
   if((amount<balance) && ((amount+0.5)<=balance)){
      remainder = balance - amount - (0.5);
      cout << remainder;
   }
   else{
   cout << balance;
   }
  }
  else{
  cout << balance;
  }
  return 0;
}