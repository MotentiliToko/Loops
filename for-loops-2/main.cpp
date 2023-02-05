#include <iostream>

using namespace std;

int main()
{
    /* Task 4 */
    
    int i = 500;
    for (int i = 0; i <= 500; i++) {
        if(i == 6) {
            cout << "First perfect number: " << i << endl;
        }
        if(i == 28) {
            cout << "Second perfect number: " << i << endl;
        }
        if(i == 496) {
            cout << "Third perfect number: " << i << endl;
        }
    }

    return 0;
}
