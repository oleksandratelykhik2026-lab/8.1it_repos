#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1 it/lab8.1 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
	TEST_CLASS(UnitTest81it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const char str[] = "ab.cd.ef.gh";

			Assert::AreEqual(8, FindThirdDot(str));
		}

		TEST_METHOD(FindThirdDotNotFoundTest)
		{
			const char str[] = "ab.cd.ef";

			Assert::AreEqual(-1, FindThirdDot(str));
		}
	};
}
