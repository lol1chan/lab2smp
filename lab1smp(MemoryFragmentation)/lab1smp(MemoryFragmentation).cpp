#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab1smpMemoryFragmentation
{
    TEST_CLASS(lab1smpMemoryFragmentation)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            try {
                
                while (true) {
                    int* ptr;
                    ptr = new int[1000000000];
                }
            }
            catch (std::bad_alloc&) {
                Assert::IsTrue(true);
                return;
            }

            Assert::Fail(L"Memory allocation did not throw an exception.");
        }
    };
}