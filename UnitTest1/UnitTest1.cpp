#include "pch.h"
#include "CppUnitTest.h"
#include "../lab91/lab91.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 1;
			Students* S = new Students[k];
			S->grade_math = 4;
			S->grade_math = 4;
			S->grade_physics = 4;
			int t = List(S, k);
			Assert::AreEqual(t, 1);
		}
	};
}
