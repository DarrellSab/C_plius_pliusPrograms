/*
 * Created by Darius Sabaliauskas 2019-10-20
 */
#include <iostream>
using namespace std;

class CSomeObject
{
private: //We could not use private access modifiers because in an class private is by default
    double m_dWeight;
public:
    ////////////////////////////////////////////////////////////////////////
<<<<<<< HEAD
    //All constructors can perform initialization work for the object
    //Whenever an object is created, one of its constructors is executed
    //The constructor creates an object and initializes its values
=======
>>>>>>> dev
    //Default constructor
    CSomeObject()
    // "This pointer" will show address of your every object which will be created
    {
        m_dWeight =0;
        cout<<"Default constructor is calling "<<this<<endl;
        cout<<endl;
    }
    ///////////////////////////////////////////////////////////////////////
    //Parameterised constructor
    CSomeObject(double m_dWeight)
    {
        this->m_dWeight = m_dWeight;
        cout<<"Parameterised constructor is calling "<<this<<endl;
        cout<<endl;
    }
    /////////////////////////////////////////////////////////////////////
    //The function member which will call info about objects the instances of classes
    void display() const // when you just calling better use const function
    {
        cout<<"The weight of the object is "<<m_dWeight<<endl;

    }
    /////////////////////////////////////////////////////////////////////
    CSomeObject(CSomeObject &rdVar);//Prototype of the copy constructor
    /////////////////////////////////////////////////////////////////////
    //The Destructor of the class CSomeObject NO PARAMETERS!!!
    ~CSomeObject()
    {
        cout<<"\nDestructor is calling "<< this<<endl;
    }
    ////////////////////////////////////////////////////////////////////
};
//We can create some constructor outside of the classes. This time will be copy constructor
//The compiler this job can do by itself but we do it manually for understanding
CSomeObject::CSomeObject(CSomeObject &rdVar) //we use references that don't copy just get address
{
    m_dWeight = rdVar.m_dWeight; // copy in different places of memory that don't get problem than we calling destructor
    cout<<"Copy constructor is calling "<<" and adress of every object is "<<this<<endl;
    cout<<endl;
}
int main() {
    //now we creating instances of classes some objects
    CSomeObject cSomeObjectDefault;
    CSomeObject cSomeObject(25.56);
    CSomeObject cSomeObject1(cSomeObject);
    CSomeObject cSomeObjectDefaultCopy(cSomeObjectDefault);
    //Here we display the results
    cout<<"Information from objects: "<<endl;
    cSomeObject.display();
    cSomeObject1.display();
    cSomeObjectDefault.display();
    cSomeObjectDefaultCopy.display();
/*
 * You can run debugger and will see how everything is running
 */
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> dev
