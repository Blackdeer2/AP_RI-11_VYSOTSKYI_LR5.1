#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.1/PR5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = k(1, 1);
			Assert::AreEqual(t, 1.08545, 0.0001);
		}
	};
}