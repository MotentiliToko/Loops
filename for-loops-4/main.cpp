#include <iostream>

using namespace std;

int main()
{
    /* Task 17 */
    
    int size;
    cout<< "Input a number of charachters: ";
    cin >> size;
    for (int row = 1; row <= size; ++row) 
    {
        for (int col = 1; col <= size; ++col) 
        {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}
