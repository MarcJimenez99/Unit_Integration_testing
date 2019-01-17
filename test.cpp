#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, ThreeWords) {
	char* test_val[0] = "./c-echo"; test_val[1] = "What's"; test_val[2] = "Up"; test_val[3] = "Bitches"; 
	EXPECT_EQ("What's Up Bitches", echo(4, test_val));
}
TEST(EchoTest, SpecialCharacters) {
	char* test_val[0] = "./c-echo"; test_val[1] = "Me"; test_val[2] = "+"; test_val[3] = "Food";  test_val[4] = "="; test_val[5] = "Love";
	EXPECT_EQ("Me + Food = Love", echo(5,test_val));
}
TEST(EchoTest, SpaceLiteral) {
	char* test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = " "; test_val[3] = "world";
	EXPECT_EQ("hello   world", echo(4,test_val));
}
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
