#include <iostream>
using namespace std;

// MY CODE STARTS FROM HERE - ANURAG MUKHERJEE

int main()
{
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
      int x;
      cin >> x;
      if(x == 2010 || x == 2015 || x == 2016 || x == 2017 || x == 2019){
        cout << "HOSTED" << endl;
      } 
      else{
        cout << "NOT HOSTED" << endl;
      }
    }
    return 0;
}