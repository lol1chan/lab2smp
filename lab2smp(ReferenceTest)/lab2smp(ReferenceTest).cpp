#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class SMTH {
public:
    int val;
};

void modifySMTH(SMTH& a) {
    a.val = 5;
}



namespace lab2smpValueTest {
    TEST_CLASS(lab2smpValueTest) {
public:
    TEST_METHOD(TestMethodmodifySMTH) {
        SMTH b;
        b.val = 10;
        modifySMTH(b);

        Assert::AreEqual(b.val, 5);
    }

    
    };
}
