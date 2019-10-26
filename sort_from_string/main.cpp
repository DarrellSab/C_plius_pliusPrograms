#include <iostream>
#include <string>
using namespace std;
int main() {
    int a,b,i;
    cin>>a>>b;
    string arr[11]={"even","odd","one","two","three","four","five","six","seven","eight","nine"};
    for(i =1; i<=9;i++) {
        if (i <= 1 && i <= 9) {
            if (a == 1)
                cout << arr[2] << endl;
            if (b == 1)
                cout << arr[2] << endl;
            if (a == 2)
                cout << arr[3] << endl;
            if (b == 2)
                cout << arr[3] << endl;
            if (a == 3)
                cout << arr[4] << endl;
            if (b == 3)
                cout << arr[4] << endl;
            if (a == 4)
                cout << arr[5] << endl;
            if (b == 4)
                cout << arr[5] << endl;
            if (a == 5)
                cout << arr[6] << endl;
            if (b == 5)
                cout << arr[6] << endl;
            if (a == 6)
                cout << arr[7] << endl;
            if (b == 6)
                cout << arr[7] << endl;
            if (a == 7)
                cout << arr[8] << endl;
            if (b == 7)
                cout << arr[8] << endl;
            if (a == 8)
                cout << arr[9] << endl;
            if (b == 8)
                cout << arr[9] << endl;
            if (a == 9)
                cout << arr[10] << endl;
            if (b == 9)
                cout << arr[10] << endl;
        }


    }

if(a>9)
{
  cout<<arr[10]<<endl;
}
if(b>9)
{
  cout<<arr[10]<<endl;
}



      if(a%2 == 0)
      cout<<arr[0]<<endl;
      else if (a%2 !=0)
      cout<<arr[1]<<endl;
      if(b%2 == 0)
      cout<<arr[0]<<endl;
      else if(b%2 !=0)
       cout<<arr[1]<<endl;

    return 0;
}

