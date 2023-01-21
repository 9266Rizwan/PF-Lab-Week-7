#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);

main()
{
    system("cls");
    int number;
    int digit;
    int answer;
    cout << "Enter Number : ";
    cin >> number;
    cout << "Enter Digit  : ";
    cin >> digit;
    answer=frequencyChecker(number,digit);
    cout << "Number of digit is : " << answer << endl ;

}
int frequencyChecker(int number, int digit)
{
    int counter=0;
    int mod=0;
    while(number!=0)
    {
        mod=number%10;
        number=number/10;
        if(mod==digit)
        {
            counter=counter+1;
        }
    }
    return counter;
}