#include <iostream>
#include <memory>
using namespace std;
int main() {

    /*unique_ptr<int> ptr(new int(10));
    unique_ptr<int>ptr1;*/
    //ptr1 = move(ptr);
   // cout<<*ptr<<endl;
    //cout<<*ptr1<<endl;
    shared_ptr<int> ptr4(new int(125));
    shared_ptr<int> ptr5(ptr4);
    cout<<*ptr4<<endl;
    cout<<*ptr5<<endl;
    *ptr4 =225;
    cout<<*ptr4<<endl;
    cout<<*ptr5<<endl;

    return 0;
}