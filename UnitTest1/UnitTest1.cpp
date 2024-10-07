#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1it/Lab_6.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[24];
			genArray(arr, 24);

			for (int i = 0; i < 24; i++) {
				Assert::IsTrue(arr[i] >= -17 && arr[i] <= 53);
			}
		}
	};
}
