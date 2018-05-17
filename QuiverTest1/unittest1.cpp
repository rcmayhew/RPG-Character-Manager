#include "stdafx.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../CharacterManager/Quiver.h"
// #include "../CharacterManager/Quiver.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace QuiverTest1
{		
	TEST_CLASS(Quiver_Tests)
	{
	public:
		
		TEST_METHOD(Quiver_total_weight)
		{
			//  arrange
			// each arrow is 0.15 lbs x 4 = 0.60 lbs
			auto quiver = std::make_shared<Quiver>();
			auto arrow0 = std::make_shared<Ammo>();
			auto arrow1 = std::make_shared<Ammo>();
			auto arrow2 = std::make_shared<Ammo>();
			auto arrow3 = std::make_shared<Ammo>();
			double expeted = 0.60;

			// act
			quiver->add_ammo(arrow0);
			quiver->add_ammo(arrow1);
			quiver->add_ammo(arrow2);
			quiver->add_ammo(arrow3);
			double actual = quiver->total_weight();

			// assert
			Assert::AreEqual(expeted, actual);

		}
		TEST_METHOD(Quiver_add_same_item)
		{

		}
			

	};
}