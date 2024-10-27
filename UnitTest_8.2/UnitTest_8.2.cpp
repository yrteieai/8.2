#include "pch.h"
#include "CppUnitTest.h"
#include "../8.2/8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
	
			string input = "Hello. this is a test.";
			string expected = "Hello. This is a test.";
			Assert::AreEqual(expected, CapitalizeAfterPeriod(input), L"The first letter after a period should be capitalized");

			input = "Hello.   how are you?";
			expected = "Hello.   How are you?";
			Assert::AreEqual(expected, CapitalizeAfterPeriod(input), L"The word after the period with spaces should start with a capital letter");

			input = "this is a test without periods";
			expected = "this is a test without periods";
			Assert::AreEqual(expected, CapitalizeAfterPeriod(input), L"A string without periods should not change");

			input = "Here is a sentence. here is another one. and another.";
			expected = "Here is a sentence. Here is another one. And another.";
			Assert::AreEqual(expected, CapitalizeAfterPeriod(input), L"The first letter of each word after a period should be capitalized");

			input = ".starting with a period.";
			expected = ".Starting with a period.";
			Assert::AreEqual(expected, CapitalizeAfterPeriod(input), L"The first word after an initial period should start with a capital letter");
		}
	};
}
