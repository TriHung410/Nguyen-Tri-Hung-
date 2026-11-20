#include <iostream>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 102; i <= 999; i++){ 
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    return 0;
}