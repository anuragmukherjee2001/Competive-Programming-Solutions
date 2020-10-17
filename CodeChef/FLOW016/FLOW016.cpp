#include <iostream>
using namespace std;

// 	My code starts from here - Anurag Mukherjee

int GCD(int a, int b){
        if(b == 0){
            return a;
        }
        else{
            return GCD(b, a % b);
        }
    }

int main() {
	// your code goes here
	


    int N, num;
    long long int a1, b1;
    
    cin >> N;
    
    
    
    for (int i = 0; i < N; i++) {
        
        long long int gcd;
        long long int lcm;
        
        cin >> a1 >> b1;
        
        gcd = GCD(a1, b1);
        
        lcm = (a1 * b1) / gcd;
        
        cout << gcd << " " << lcm << endl;
    }
	return 0;
}
