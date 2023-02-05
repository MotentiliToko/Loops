#include <iostream>

using namespace std;

int main()
{
    /* Task 12 */
    
    int i,n, sum = 0;
    cout << "Input the random number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum = sum + (i*i);
    }
    cout << "The sum is: " << sum;

    return 0;
}
