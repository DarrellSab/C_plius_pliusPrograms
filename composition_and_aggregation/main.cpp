<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> dev
/*
 * Created by Darius Sabaliauskas
 */

<<<<<<< HEAD
>>>>>>> dev
=======
>>>>>>> dev
#include <iostream>
#include <string>
using namespace std;

//This class for example of aggregation
//this class is not realated with class CUniversity
class CProfesor
{
public:
    string getName()
    {
        return name;
    }
private:
    string name = "Jim Beam";
};
class CColege
{
public:
    void checkJobOfProfesor()
    {
        cout<<"Professor "<<profesor.getName()<<" will stay at colege next friday."<<endl;
    }
private:
    CProfesor profesor;
};
class CUniversity
{
public:
    void teachingStudents()
    {
        student.teachingStudents();
    }
    void checkJobOfProfesor()
    {
        cout<<"This evening professor "<<profesor.getName()<<" will stay at university."<<endl;
    }

private:
    //This class is eaxample of composition
    class CDepartament
    {
    public:
        void teachingStudents()
        {
            cout<<"Departaments organize teaching of students"<<endl;
        }
    };
    CDepartament student;
    CProfesor profesor;
};
int main() {
    CUniversity department;
    department.teachingStudents();
    department.checkJobOfProfesor();
    CColege colege;
    colege.checkJobOfProfesor();

    return 0;
}