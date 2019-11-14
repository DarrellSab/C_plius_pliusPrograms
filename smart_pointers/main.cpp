#include <iostream>
#include <memory>
using namespace std;
int main() {


    shared_ptr<int> ptr4(new int(125));
    shared_ptr<int> ptr5(ptr4);
    cout<<*ptr4<<endl;
    cout<<*ptr5<<endl;
    *ptr4 =225;
    cout<<*ptr4<<endl;
    cout<<*ptr5<<endl;

    return 0;
}