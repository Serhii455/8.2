#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_8.2/8.2.cpp"

using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "Hello 123";

			int g = MinLength(str);

			Assert::AreEqual(g, 3);
		}
	};
}
