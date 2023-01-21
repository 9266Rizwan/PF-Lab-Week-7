#include <iostream>
using namespace std;
void FiboNacci(int value);
main()
{
    int value;
    cout << "Enter number for FiboNacci : ";
    cin >> value;
    FiboNacci(value);
}
void FiboNacci(int value)
{
    int x=0;
    int y=1;
    cout << x <<"," << y << ",";
    for(int sum=1; sum<=value-2; sum++)
    {
        sum=x+y;
        cout<< sum <<",";
        x=y;
        y=sum;
        
    }
}