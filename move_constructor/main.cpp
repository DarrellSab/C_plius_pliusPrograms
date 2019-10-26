<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> dev
//
// Created by Darius Sabaliauksas on 2019-10-20.
//

<<<<<<< HEAD
>>>>>>> dev
=======
>>>>>>> dev
#include <iostream>
using namespace std;

class CSomeObject
{
private:
<<<<<<< HEAD
<<<<<<< HEAD
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
=======
=======
>>>>>>> dev
    int size;
    double *prgArray;
public:
    CSomeObject()
    {
        prgArray = new double[20];
        cout<<"Default constructor is running"<<this<<endl;
    }
    //////////////////////////////////////////////////
            //copy constructor//
    //this is for deep copying and cost more memory and time
    CSomeObject(const CSomeObject& rgAob)
    {
        size = rgAob.size;
        prgArray = new double[size];
        //copying all from rgAob to *this
        for(auto i =0; i<size;i++)
<<<<<<< HEAD
>>>>>>> dev
=======
>>>>>>> dev
        {
            prgArray[i] = rgAob.prgArray[i];
        }

        cout<<"Copy constructor is running"<<this<<endl;
    }
<<<<<<< HEAD
<<<<<<< HEAD
    CSomeObject(const CSomeObject&& rgAob):prgArray(rgAob.prgArray)
    {
=======
=======
>>>>>>> dev
    /////////////////////////////////////////////////
             //Move constructor//
    //this is for shallow copying and cost less than copy constructor memory and time
    CSomeObject(const CSomeObject&& rgAob)
    {
        size = rgAob.size;
        prgArray = rgAob.prgArray;
        //rgAob.prgArray = nullptr;

<<<<<<< HEAD
>>>>>>> dev
=======
>>>>>>> dev
        cout<<"Moving constructor is running "<<this<<endl;
    }
    ~CSomeObject()
    {
<<<<<<< HEAD
<<<<<<< HEAD
        delete[] prgArray;
=======
        delete prgArray;
        prgArray = nullptr;
>>>>>>> dev
=======
        delete prgArray;
        prgArray = nullptr;
>>>>>>> dev
        cout<<"Destructor is running"<<this<<endl;
    }
};
int main() {

    CSomeObject cSomeObject;
    CSomeObject cSomeObject1 = cSomeObject;
<<<<<<< HEAD
<<<<<<< HEAD
    CSomeObject cSomeObject2 = move(cSomeObject);
    CSomeObject cSomeObject3(cSomeObject2);
    CSomeObject cSomeObject4(move(cSomeObject2));



=======
=======
>>>>>>> dev
    CSomeObject cSomeObject2 = move(cSomeObject); //cast lvalue to rvalue
    CSomeObject cSomeObject3(cSomeObject2);
    CSomeObject cSomeObject4(move(cSomeObject2));

<<<<<<< HEAD
>>>>>>> dev
=======
>>>>>>> dev
    return 0;
}