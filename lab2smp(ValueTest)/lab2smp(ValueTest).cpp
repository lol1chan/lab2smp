#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

struct SMTH {
    int val;
    SMTH(int val) : val(val) {}
};



void modifySMTH(SMTH& a) {
    a.val = 10;
}

namespace lab2smpValueTest {
    TEST_CLASS(lab2smpValueTest) {
public:
    

    TEST_METHOD(TestMethodmodifySMTH) {
        SMTH b(5);
        modifySMTH(b);

        Assert::AreEqual(b.val, 10);
    }
    };
}