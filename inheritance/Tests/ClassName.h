//
// Created by darius on 2019-10-28.
//

#ifndef INHERITANCE_CLASSNAME_H
#define INHERITANCE_CLASSNAME_H

class  ClassName
{
public:
    ClassName(){}
    ClassName(int i) {

    }



    void setAge(int age)
    {
        //ClassName::age = age;
        this->age = age;
    }
    int getAge() const{
        return age;
    }
private:
    int age;
};

#endif //INHERITANCE_CLASSNAME_H
