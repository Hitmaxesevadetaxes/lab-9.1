#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\HP\source\repos\lab 9.1\lab 9.1\Lab_9_1.cpp"
#include "C:\Users\HP\source\repos\lab 9.1\lab 9.1\sum.cpp"
#include "C:\Users\HP\source\repos\lab 9.1\lab 9.1\dod.cpp"
#include "C:\Users\HP\source\repos\lab 9.1\lab 9.1\var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            x = 1.0;
            e = 0.0001;

            // Call the sum function
            sum();

            
            double expected = 0.367882;
            double AcceptableMistake = 0.0001;

            
            Assert::AreEqual(expected, s, AcceptableMistake);
        };
    };
}