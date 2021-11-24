#include "pch.h"
#include "CppUnitTest.h"
#include "../6,1/6,1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 0;
			int sum = 0;
			const int n = 25;
			int p[n] = { 94, 64, 57, 20, 15, 89, 61, 56, 94, 71, 15, 28, 19, 36, 81, 42, 64, 92, 65, 71, 68, 46, 45, 40, 18 };

			format_mas(p, sum, k, n);

			Assert::AreEqual(11, k);
			Assert::AreEqual(589, sum);

		}
	};
}
