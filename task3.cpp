#include <iostream>
using namespace std;
int countNo(int number);

main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;
    cout << countNo(number);

}
int countNo(int number)
{
    int counter=0;
    while(number!=0)
    {
        number=number/10;
        counter=counter+1;
    }
    return counter;
}