#include <iostream>

using namespace std;

int main() {
    int *a = new int(3);
    delete a;
    
    int sum = a + 3;
}
