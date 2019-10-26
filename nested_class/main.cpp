/*
 * Created by Darius Sabaliauskas
 * Inner classes
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class CUniversity
{
public:
    //this is inner class
    class CStudent
    {
    public:
        CStudent(int m_iNUmberOfBook, int m_iStudentID)
        {
            this->m_iNUmberOfBook = m_iNUmberOfBook;
            this->m_iStudentID = m_iStudentID;
        }
        string GetInfo()
        {
            return "Number "+ to_string(m_iNUmberOfBook) + " Student ID" + to_string(m_iStudentID);
        }

    private:
        int m_iNUmberOfBook;
        int m_iStudentID;
    };
    CUniversity()
    {}
    CUniversity(string m_FirstName, string m_SecondName) {
        this->m_FirstName = m_FirstName;
        this->m_SecondName = m_SecondName;
    }
    void getStudentsInfo()
    {
<<<<<<< HEAD
    for(int i=0; i<LENGTH;i++)
    {
       cout<<cStudent[i].GetInfo()<<endl;
    }
    }
    void geTeachersInfo()
=======
        for(int i=0; i<LENGTH;i++)
        {
            cout<<cStudent[i].GetInfo()<<endl;
        }
    }
    void getTeachersInfo()
>>>>>>> dev
    {
        for(int i=0; i<LENGTH;i++)
        {
            cout<<cTeachers[i].GetInfo()<<endl;
        }
    }
    void setName(string m_FirstName, string m_SecondName)
    {
        this->m_FirstName = m_FirstName;
        this->m_SecondName = m_SecondName;
    }
    basic_string<char> getName()
    {
        return  m_FirstName + " " + m_SecondName;
    }

private:
<<<<<<< HEAD
    friend void Human::TakeName(CUniversity &student);
=======

>>>>>>> dev
    string m_FirstName;
    string m_SecondName;
    static const int LENGTH = 4;
    CStudent cStudent[LENGTH]
            {
<<<<<<< HEAD
        CStudent(1,125),
        CStudent(2,126),
        CStudent(3,225),
        CStudent(4,1025)
=======
                    CStudent(1,125),
                    CStudent(2,126),
                    CStudent(3,225),
                    CStudent(4,1025)
>>>>>>> dev
            };
    int m_age;
    //this is inner class in private access specifier
    class CTeachers
    {
    public:
        CTeachers(int m_iNumberInBook, int m_iTeacherID)
        {
            this->m_iNumberInBook = m_iNumberInBook;
            this->m_iTeacherID = m_iTeacherID;
        }
        string GetInfo()
        {
            return "Number "+ to_string(m_iNumberInBook) + " Teacher ID" + to_string(m_iTeacherID);
        }
    private:
        int m_iTeacherID;
        int m_iNumberInBook;
    };
    CTeachers cTeachers[LENGTH]
            {
<<<<<<< HEAD
        CTeachers(1,12),
        CTeachers(2,15),
        CTeachers(3,27),
        CTeachers(4,56)
=======
                    CTeachers(1,12),
                    CTeachers(2,15),
                    CTeachers(3,27),
                    CTeachers(4,56)
>>>>>>> dev
            };

};


int main() {
    CUniversity student;
    student.getStudentsInfo();

    CUniversity teacher;
<<<<<<< HEAD
    teacher.geTeachersInfo();
=======
    teacher.getTeachersInfo();
>>>>>>> dev
    CUniversity member;
    member.setName("Darrell","Johnson" );
    teacher.setName("John", "James");
    cout<<teacher.getName()<<endl;
    cout<<member.getName()<<endl;


    return 0;
}