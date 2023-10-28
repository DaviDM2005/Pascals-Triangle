#include <iostream>
using namespace std;

int main() {
    int row;

    cout << "Enter rows: ";
    cin >> row;

    
    for (int line = 1; line <= row; line++) {
        int k = 1;  

       
        for (int dashoreba = 1; dashoreba <= row - line; dashoreba++) {
            cout << "  ";
        }

        
        for (int i = 1; i <= line; i++) {
            cout << k << "   ";
            k = k * (line - i) / i;
        }

        cout << endl; 
    }

    return 0;
}
