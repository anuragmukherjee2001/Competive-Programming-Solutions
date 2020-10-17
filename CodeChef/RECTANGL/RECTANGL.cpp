#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int N;
	cin >>N;
    
    for(int i = 0; i <N; i++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
    
        if((a == c && b == d) || (a == b && c == d) || (a == d && b == c)){
            cout << "YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }  
        
	return 0;
}
