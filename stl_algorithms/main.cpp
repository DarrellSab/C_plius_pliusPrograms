#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
//const T&;
const T& minSome (const T& a, const T& b)
{
    return a<b ? a:b;
}
int main() {
    cout<<minSome(4,4)<<endl;
    cout<<min(3,4);
    return 0;
}