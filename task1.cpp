#include <iostream>
using namespace std;
/*
main()
{
    system("cls");
    int number;
    cout << "Enter value : ";
    cin >> number;
    for(int x=1 ; x<=10 ; x++)
    {
        cout << number << " * " << x <<" = " <<number*x << endl;
    }
}*/
void FiboNacci(int value);
main()
{
    int value;
    cout << "Enter number for FiboNacci : ";
    cin >> value;
    cout << FiboNacci(value);
}
void FiboNacci(int value)
{
    int x=0;
    int y=1;
    cout << x <<"," << y <<","<< endl;

    for(int sum=0; sum<=value; sum++)
    {
        sum=x+y;
        cout << sum <<",";
        x=y;
        y=sum;
        
    }
}