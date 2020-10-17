#include <iostream>
using namespace std;

// MY CODE STARTS FROM HERE - ANURAG MUKHERJEE

int main()
{
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
      int x, y;
      
      cin >> x >> y;
      if(x > y){
        cout << ">" << endl;
      }
      
      else if(x < y){
        cout << "<" << endl;
      }
      else if(x == y){
        cout << "=" << endl;
      }
    }
    
    return 0;
}