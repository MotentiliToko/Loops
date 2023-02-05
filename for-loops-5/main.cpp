#include <iostream>

using namespace std;

int main()
{
    /* Task 18 */
    
    int i, randomnum, cube;
    cout << "Input the number of terms : ";
    cin >> randomnum;
    for(int i = 1; i <= randomnum; i++) {
        cube = i*i*i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cube << endl;

    }

    return 0;
}