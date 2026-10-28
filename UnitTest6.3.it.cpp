#include "pch.h"
#include "CppUnitTest.h"
#include "/ap_labs/lab6.3it/lab6.3it/lab6.3.it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
        // Звичайна функція Count(int*, int)
        TEST_METHOD(TestCountOrdinaryInt)
        {
            const int n = 10;
            int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int k;
            k = Count(a, n);
            Assert::AreEqual(k, 5);
        }

        // Шаблонна функція з явним типом int
        TEST_METHOD(TestCountTemplateInt)
        {
            const int n = 10;
            int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int k;
            k = Count<int>(a, n);
            Assert::AreEqual(k, 5);
        }

        // Шаблонна функція для типу long
        TEST_METHOD(TestCountTemplateLong)
        {
            const int n = 10;
            long b[n] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 101 };
            int k;
            k = Count(b, n);
            Assert::AreEqual(k, 5);
        }

	};
}
