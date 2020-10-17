#include <iostream>
using namespace std;

int main() {
	// your code goes
  int num,N, rem, temp;
  cin>>N;
  for(int i =0; i < N; i++){
    cin>>num;
  temp=0;
   while(num != 0){
    rem = num % 10;
    if(rem == 4)
    temp++;
    num = num / 10;
    }
  cout << temp << endl;
}
	return 0;
}
