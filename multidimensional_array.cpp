/***********************************
This program shows features of multidimensional array
The code inspired by Robert Lafore Object-oriented programming in C++
**********************************/
#include <iostream>
#include <iomanip>
#include <ctime>
using  namespace std;
const int PLACES = 5;
const int MONTHS = 12;

int main() {
    srand(time(NULL));
    int d, m;
    double sales[PLACES][MONTHS];
    cout<<endl;
    for (d =0; d<PLACES;d++)
        for(m=0;m<MONTHS;m++)
        {
            //cout<< "Enter sales for places "<<d+1;
           // cout<<", month "<<m+1<<": ";
            sales[d][m] = rand()%100+1;
        }
    cout<<endl<<endl;
        cout<<"            Month\n";
        cout<<"               1         2        3     ";
        for(d=0; d<PLACES; d++)
    {
            cout<<"\nPLACES "<<d+1;
            for(m=0;m<MONTHS;m++)
        {
            cout<<setiosflags(ios::fixed)
            <<setiosflags(ios::showpoint)
            <<setprecision(2)
            <<setw(10)
            <<sales[d][m];
        }
    }
    cout<<endl;
    
    return 0;
}

