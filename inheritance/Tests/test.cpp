//
// Created by Darius Sabaliauskas on 2019-10-28.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassName.h"

using testing::Eq;

namespace {
class ClassDeclaration : public ::testing::Test
{
public:


    ClassDeclaration(){}

protected:
    ClassName obj;
};
}
TEST_F(ClassDeclaration,nameOfTheTest1) //we use TEST_F instead TEST because we can access inside of class
{
    obj.setAge(45);
    ASSERT_EQ(45, obj.getAge());
}
TEST_F(ClassDeclaration,nameOfTheTest2)
{
    obj.setAge(95);
    ASSERT_THAT(95.00, testing::Eq(obj.getAge()));
    //ASSERT_EQ("",1);
}

