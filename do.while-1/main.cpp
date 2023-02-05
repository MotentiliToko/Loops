#include <iostream>

using namespace std;

int main()
{
    char alphabet = 'A';
    do {
        cout << alphabet << "" << endl;
        alphabet++;
    } while(alphabet <= 'Z');
    cout << alphabet << endl;
    return 0;
}