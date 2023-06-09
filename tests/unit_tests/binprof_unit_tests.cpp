///   _     _                        __ 
///  | |__ (_)_ __  _ __  _ __ ___  / _|
///  | '_ \| | '_ \| '_ \| '__/ _ \| |_   binprof - non-invasive cpu profiler
///  | |_) | | | | | |_) | | | (_) |  _|  --------------------------------
///  |_.__/|_|_| |_| .__/|_|  \___/|_|    https://github.com/q-ptr/binprof
///                |_|     
/// 
/// SPDX-FileCopyrightText: 2023 q-ptr
/// SPDX-License-Identifier: MIT

#include <catch_amalgamated.hpp>
#include <fmt/core.h>


int main(int argc, char *argv[])
{
	int   result = Catch::Session().run(argc, argv);

	if (0 != result)
	{
		fmt::print("Press ENTER key to continue...\n");
		(void) getchar();
	}

	return result;
}


TEST_CASE("test", "[test]")
{
	REQUIRE(true == true);
}
