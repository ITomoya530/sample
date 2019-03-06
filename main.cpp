#include <iostream>
#include <cmath>
using namespace std;

int is_prime(int n) {
    if(n == 2) return 1;
    for(int i = 2; i <= (int)ceil(sqrt(n)); i++){
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int p[100];
    int count = 0;
    int i = 2;
    while(count < 100){
        if(is_prime(i) == 1){
            p[count] = i;
            count++;
        }
        i++;
    }
    cout << p[9] << endl;
    cout << 9[p] << endl;
    cout << *(p + 9) << endl;
    cout << *(9 + p) << endl;
    return 0;
}

