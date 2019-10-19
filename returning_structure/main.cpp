/*
 * The code inspired by Robert Lafore Object-oriented programming in C++
 * Returning structures
 */
#include <iostream>
using namespace std;
///////////////////////////
struct Distance
{
    int meter;
    float centimeter;
};
/////////////////////////
//There are declarations of functions
Distance adding(Distance, Distance);
void display(Distance);
int main() {
    Distance d1, d2, d3; //declare some lengths

    //get some data from user for object d1
    cout<<"Enter meter: ";
    cin>>d1.meter;
    cout<<"Enter centimeter: ";
    cin>>d1.centimeter;

    //get some data from user for object d2
    cout<<"Enter meter: ";
    cin>>d2.meter;
    cout<<"Enter centimeter: ";
    cin>>d2.centimeter;
    //here we are starting adding two structures and display result
    d3 = adding(d1, d2);
    cout<<endl;
    display(d1);
    cout<<" + ";
    display(d2);
    cout<<" = ";

    display(d3);
    cout<<endl;

    return 0;
}

//There are definitions of functions
Distance adding(Distance ee1, Distance ee2)
{
    Distance ee3;
    ee3.meter = 0;
    if (ee3.centimeter >= 100)
    {
        ee3.centimeter -=100;
        ee3.meter;
    }
    ee3.meter += ee1.meter + ee2.meter;
    return ee3;
}
void display( Distance ee)
{
    cout<<ee.meter<<"."<<ee.centimeter<<" m";
}