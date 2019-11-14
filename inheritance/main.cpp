/*
 * Created by Darius Sabaliauskas
 * Inheritance
 */
#include <iostream>
#include <string>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
using  namespace std;
///////////////////////////////////////////////////////////////////////////////
class CPeople
{
public:
    CPeople(const string&);
    string getName() const
    {
    return m_sName;
    }

    void setName(string m_sName)
    {
        this->m_sName = m_sName;
    }
private:
    string m_sName;

};
/////////////////////////////////////////////////////////////////////////////
CPeople::CPeople(const string& n)  : m_sName(n)
        {}
///////////////////////////////////////////////////////////////////////////
class CStudent : public CPeople
{
public:
    CStudent(const string&, const string&);

   void Learn()
   {
       cout<<"I am learning"<<endl;
   }
   string setGroup(string m_sGroup)
   {
       this->m_sGroup = m_sGroup;
   }
    string getGroup() const
    {
        return m_sGroup;
    }
private:
    string m_sGroup;
};
////////////////////////////////////////////////////////////////////////////////////////////////
CStudent::CStudent(const string& n, const string& g): CPeople(n){
        m_sGroup = g;
}
///////////////////////////////////////////////////////////////////////////////////////////////
class COnlineStudent : public CStudent
{
public:
    COnlineStudent(const string& n, const string& g);
    void Learn()
    {
        cout<<"I study on Online"<<endl;
    }
};
/////////////////////////////////////////////////////////////////////////////////////////////////
COnlineStudent::COnlineStudent(const string& n, const string& g) : CStudent(n,g) {}
//////////////////////////////////////////////////////////////////////////////////////////////////
class CProfessor : public CPeople
{
public:
    CProfessor();
    CProfessor(const string&, const string&);
    void setSubject(string& m_s) //here should be function of void type because it don't return anything
    {
        m_sSubject = m_s;
    }
    string getSubject() const
    {
        return m_sSubject;
    }
private:
    string m_sSubject;
};
/////////////////////////////////////////////////////////////////////////////////////////////////////
CProfessor::CProfessor() {}
CProfessor::CProfessor(const string & n, const string & s) :CPeople(n)
{
    m_sSubject = s;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[]) {

    CStudent student("James Nori", "ISit");
    student.Learn();
    cout<<"Student: "<<student.getName()<<" from group "<<student.getGroup()<<endl;
    student.setName("Marie Kuri");
    cout<<student.getName()<<endl;
    CProfessor professor("Albert Einstein","Information system");
    cout<<"Proffesor:"<<professor.getName()<<" subject "<<professor.getSubject()<<endl;
    professor.setName("Albert Einstein");
    cout<<professor.getName()<<endl;
    COnlineStudent onlineStudent("Karoline Online", "KILO12");
    onlineStudent.Learn();
    onlineStudent.getName();
    cout<<"Online student is "<<onlineStudent.getName();
    cout<<" in group "<<onlineStudent.getGroup()<<" and ";
    onlineStudent.Learn();
    CProfessor professor1(<#initializer#>);

    ::testing::InitGoogleTest(&argc, argv);

    return  RUN_ALL_TESTS();
    //return 0;
}