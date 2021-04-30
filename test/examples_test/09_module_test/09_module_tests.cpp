#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test reference and pointer parameter")
{
	int num = 0, num1 = 0;
	ref_ptr(num, &num1);

	REQUIRE(num == 10);
	REQUIRE(num1 == 20);
}

TEST_CASE("Test class memberwise copy")
{
	Vector v(3);
	Vector v1 = v;

	REQUIRE(v.Size() == v1.Size());
}

TEST_CASE("Test class dynamic memory copy")
{
	Vector v(3);
	Vector v1 = v;
	v[0] = 5;

	REQUIRE(v[0] != v1[0]);
}

TEST_CASE("Test overwrite new Vector from an existing Vector instance")
{
	Vector v(3);
	Vector v1(3);
	v1 = v;
	v[0] = 5;

	REQUIRE(v[0] != v1[0]) ;
}

TEST_CASE("Test vector dynamic memory with std move")
{
	Vector v(3);
	Vector v1 = std::move(v);

}

TEST_CASE("Test vector Size and Space class functions")
{
	Vector v(3);

	REQUIRE(v.Size() == 0);
	REQUIRE(v.Capacity() == 3);
}

TEST_CASE("Test vector Size and Space class functions with push back")
{
	Vector v(3);
	v.PushBack(1);

	REQUIRE(v[0] == 1);
	REQUIRE(v.Size() == 1);
	REQUIRE(v.Capacity() == 3);
}

TEST_CASE("Test vector Size and Space class functions with push backs")
{
	Vector v(3);
	v.PushBack(1);
	v.PushBack(99);
	v.PushBack(50);
	v.PushBack(25);

	REQUIRE(v[0] == 1);
	REQUIRE(v[3] == 25);
	REQUIRE(v.Size() == 4);
	REQUIRE(v.Capacity() == 6);
}

TEST_CASE("Test empty vector ")
{
	Vector v;

	REQUIRE(v.Size() == 0);
	REQUIRE(v.Capacity() == 0);
}

TEST_CASE("Test empty vector with pushback")
{
	Vector v;
	v.PushBack(10);

	REQUIRE(v[0] == 10);
	REQUIRE(v.Size() == 1);
	REQUIRE(v.Capacity() == 8);
}