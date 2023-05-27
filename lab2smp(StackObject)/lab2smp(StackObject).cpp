#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab2smpStackObject
{
	TEST_CLASS(lab2smpStackObject)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			char stackArr[99999];
			Assert::AreEqual(sizeof(stackArr), size_t(99999));
		}
	};
}