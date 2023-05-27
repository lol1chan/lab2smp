#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab2smpHeapTest
{
	TEST_CLASS(lab2smpHeapTest)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			char* heapArr = new char[99999];
			Assert::AreEqual(sizeof(heapArr), size_t(8));
		}
	};
}
