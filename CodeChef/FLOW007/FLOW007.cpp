#include <iostream>
using namespace std;

int main() {
    // 	MY  CODE STARTS HERE - ANURAG MUKHERJEE
    
    int N, num, rem, rev;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        
        cin >> num;
        rev = 0;
        
        while(num != 0){
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        cout << rev << endl;
    }
	
	return 0;
}
