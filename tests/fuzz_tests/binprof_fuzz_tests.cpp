///   _     _                        __ 
///  | |__ (_)_ __  _ __  _ __ ___  / _|
///  | '_ \| | '_ \| '_ \| '__/ _ \| |_   binprof - non-invasive cpu profiler
///  | |_) | | | | | |_) | | | (_) |  _|  --------------------------------
///  |_.__/|_|_| |_| .__/|_|  \___/|_|    https://github.com/q-ptr/binprof
///                |_|     
/// 
/// SPDX-FileCopyrightText: 2023 q-ptr
/// SPDX-License-Identifier: MIT

#include <cstdint>


extern "C" int LLVMFuzzerInitialize(int *argc, char ***argv)
{
	(void) argc;
	(void) argv;

	return 0;
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t data_size)
{
	(void) data;
	(void) data_size;

	return 0;
}
