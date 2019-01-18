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

TEST(EchoTest, Numbers) {
	char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "1"; test_val[2] = "2"; test_val[3] = "3"; 
	EXPECT_EQ("1 2 3", echo(4, test_val));
}
TEST(EchoTest, SpecialCharacters) {
	char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "!"; test_val[2] = "@"; test_val[3] = "#"; test_val[4] = "$"; test_val[5] = "%";
	EXPECT_EQ("! @ # $ %", echo(6,test_val));
}
TEST(EchoTest, EmptyStringWord) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = ""; test_val[2] = "Word";
	EXPECT_EQ(" Word", echo(3,test_val));
}
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
