#include <iostream>
using namespace std;
void printpercentage(int number);

main()
{
    system("cls");
    int number;
    cout << "Enter a number : ";
    cin >> number;
    printpercentage(number);

}
void printpercentage(int number)
{
    int count;
    int value1;
    int range1=0;
    int range2=0;
    int range3=0;
    int range4=0;
    int range5=0;
    for (count=1; count<=number; count++)
    {
        cout <<"Enter numbers : ";
        cin >> value1;
        if(value1<=200)
        {
            range1=range1+1;
        }
        else if(value1>200 && value1<=400)
        {
            range2=range2+1;
        }
        else if(value1>400 && value1<=600)
        {
            range3=range3+1;
        }
        else if(value1>600 && value1<=800)
        {
            range4=range4+1;
        }
        else if(value1>800 && value1<=1000)
        {
            range5=range5+1;
        }
    }
        cout << endl ;
        int p1=(range1*100)/number;
        cout << "Numbers in Range   (0-200) : " << p1 <<"%" << endl;
        int p2=(range2*100)/number;
        cout << "Numbers in Range (200-400) : " << p2 <<"%" << endl ;
        int p3=(range3*100)/number;
        cout << "Numbers in Range (400-600) : " << p3 <<"%" << endl ;
        int p4=(range4*100)/number;
        cout << "Numbers in Range (600-800) : " << p4 <<"%" << endl ;
        int p5=(range5*100)/number;
        cout << "Numbers in Range (800-1000): " << p5  <<"%" << endl;
    
}