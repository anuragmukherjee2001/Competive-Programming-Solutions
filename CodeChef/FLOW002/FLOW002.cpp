#include<iostream>
using namespace std;

int main(){
    
    int N;
    cin >> N;
    
    for (int i; i < N; i++) {
        int a, b, c;
        
        cin >> a >> b;
        
        c = a % b;
        cout << c << endl;
    }
    return 0;
}