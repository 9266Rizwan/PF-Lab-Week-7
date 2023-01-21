#include <iostream>
using namespace std;
int calculategcd(int number1,int number2);
int calculatelcm(int number1,int number2,int gcd);
main()
{
    system("cls");
    int number1;
    int number2;
    int gcd;
    int lcm;
    cout << "Enter 1st number : ";
    cin >> number1;
    cout << "Enter 2nd number : ";
    cin >> number2;
    gcd=calculategcd(number1,number2);
    lcm=calculatelcm(number1,number2,gcd);
    cout << "GDC or HCF of ("<< number1 << " & " << number2 << ") : " << gcd << endl ;
    cout << "LCM  of       ("<< number1 << " & " << number2 << ") : " << lcm << endl ;

    

}
int calculategcd(int number1,int number2)
{
    int value;
    int gcd=0;
    for(value=1; value<=number1 || value<=number2; value++)
    {
        if(number1%value==0 && number2%value==0)
        {
            gcd=value;
        }
    }
    return gcd;
}
int calculatelcm(int number1,int number2,int gcd)
{
    int value;
    int lcm;
        for(value=1; value<=number1 || value<=number2; value++)
    {
        if(number1%value==0 && number2%value==0)
        {
            lcm=(number1*number2)/gcd;
            return lcm;
        }
    }
    return 0;
}