#include <iostream>
using namespace std;
float calculatemoney(int age,float price,float toyprice);

main()
{
    system("cls");
    int age;
    float price;
    float toyprice;
    float answer;
    cout << "Enter Lill's age              : ";
    cin >> age ;
    cout << "Enter Washing machine's price : " ;
    cin >> price ;
    cout << "Enter each toy's price        : " ;
    cin >> toyprice;
    answer=calculatemoney(age,price,toyprice);
    if(answer>=0)
    {
        cout << "Yes! : " << answer << endl ;
    }
    else
    {
        cout << "NO!  :" << answer*(-1) << endl ;
    }

}
float calculatemoney(int age,float price,float toyprice)
{

 float value;
 float rupee;
 float money;
 float sum=0;
 float toys=0;
 for(int count=2; count<=age; count=count+2)
 {
    rupee=count*5;
    sum=sum+rupee-1;
    value=sum;
 } 

    age=age-(age/2);
    toys=age;
    money=value+(toys*toyprice);
    money=money-price;
 

 return money;
}