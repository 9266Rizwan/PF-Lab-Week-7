#include <iostream>
using namespace std;
float calculateprice(float inherited,int year);

main()
{
    float inherited;
    int year;
    float result;
    cout << "Enter Inherited : " ;
    cin >> inherited;
    cout << "Enter Year      : " ;
    cin >> year ;
    result=calculateprice(inherited,year);
    if(result>=0)
    {
        cout << "Yes! He will live a carefree life and will have  " << result;
    }
    else
    {
        cout << "He will need " << result*(-1) << " dollars to survive";
    }


}
float calculateprice(float inherited,int year)
{
    float answer;
    float evenyear=0;
    float oddyear=0;
    for(int count=1800; count<=year; count=count+2)
    {
        evenyear=12000+evenyear;
    }
    for(int count=1801; count<=year; count=count+2)
    {
        oddyear=(12000+50*(18+(count-1800)))+oddyear;
    }
    float money=inherited-(evenyear+oddyear);
    return money;
}