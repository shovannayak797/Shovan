#include <iostream>
using namespace std;

int main()
{
    int days , m , y ,d;
    cout<<"Enter number of days";
    cin >>days ;
    y = days/365;
    days = days%365;
    m = days/30;
    d = days%30;
    cout<<"years :\t"<< y <<"\nmounths: "<< m <<"\ndays:\t" <<d;

   
    return 0;
}