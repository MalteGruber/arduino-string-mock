#include <iostream>

/*Include this in your linux/non-Arduino program*/
#include "WStringMock.h"

void demo_print(String s) {
	std::cout << s.c_str() << std::endl;
}

int main(const int, const char**) {
	/*Some quick tests just to see that things are working*/
	String s = "The quick brown fox jumps over the lazy dog";

	demo_print(String("Hello world"));
	demo_print(String(42));
	demo_print(String(42.1337));
	demo_print(String(42.1337, 4));
	demo_print(String(45, 16)); //HEX
	demo_print(String(45, 2)); 	//BIN

	String test = "Hello";
	test.setCharAt(2, 'L');

	demo_print(test);
	test = s;
	test.toUpperCase();
	demo_print(test);
	test = s;
	test.toLowerCase();
	demo_print(test);

	String dbl = "1337.42";
	std::cout << dbl.toDouble() << std::endl;
	std::cout << dbl.toFloat() << std::endl;
	std::cout << dbl.toInt() << std::endl;

	test = s;
	test.replace("lazy dog", "good boy");
	demo_print(test);

	return 0;
}
