#include <iostream>
using namespace std;
int addition(int number);

main()
{
    int number;
    int result;
    cout << "Enter a number : ";
    cin >> number;
    result=addition(number);
    cout << result;

}
int addition(int number)
{
    int answer=0;
    int result=0;
    while(number>0)
    {
        result=number%10;
        answer=answer+result;
        number=number/10;
    }
    return answer;
}