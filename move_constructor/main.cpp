#include <iostream>
using namespace std;

class CSomeObject
{
private:
    int *prgArray;
public:
    CSomeObject()
    {
        prgArray = new int[20];
        cout<<"Default constructor is running"<<this<<endl;
    }
    CSomeObject(const CSomeObject& rgAob)
    {
        prgArray = new int[20];
        //copying all from rgAob to *this
        for(auto i =0; i<20;i++)
        {
            prgArray[i] = rgAob.prgArray[i];
        }

        cout<<"Copy constructor is running"<<this<<endl;
    }
    CSomeObject(const CSomeObject&& rgAob):prgArray(rgAob.prgArray)
    {
        cout<<"Moving constructor is running "<<this<<endl;
    }
    ~CSomeObject()
    {
        delete[] prgArray;
        cout<<"Destructor is running"<<this<<endl;
    }
};
int main() {

    CSomeObject cSomeObject;
    CSomeObject cSomeObject1 = cSomeObject;
    CSomeObject cSomeObject2 = move(cSomeObject);
    CSomeObject cSomeObject3(cSomeObject2);
    CSomeObject cSomeObject4(move(cSomeObject2));



    return 0;
}