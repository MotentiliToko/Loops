#include <iostream>

using namespace std;

int main()
{
    /* Task 1 and 2 */
    int i, sum = 0;
    cout << " The natural numbers are: ";
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of first 10 natural numbers: "<<sum << endl;
    
    return 0;
}