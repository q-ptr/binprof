///   _     _                        __ 
///  | |__ (_)_ __  _ __  _ __ ___  / _|
///  | '_ \| | '_ \| '_ \| '__/ _ \| |_   binprof - non-invasive cpu profiler
///  | |_) | | | | | |_) | | | (_) |  _|  --------------------------------
///  |_.__/|_|_| |_| .__/|_|  \___/|_|    https://github.com/q-ptr/binprof
///                |_|     
/// 
/// SPDX-FileCopyrightText: 2023 q-ptr
/// SPDX-License-Identifier: MIT

#pragma once


#include <semver.hpp>
#include <string>


namespace qptr::srcprof
{

static inline const std::string           VERSION_NAME          = "q-ptr.binprof";
static inline const std::string           VERSION_DESCRIPTION   = "non-invasive cpu profiler";
static inline const std::string           VERSION_URL           = "https://github.com/q-ptr/binprof";

static inline constexpr uint8_t           VERSION_MAJOR         = 0;
static inline constexpr uint8_t           VERSION_MINOR         = 0;
static inline constexpr uint8_t           VERSION_PATCH         = 1;
static inline constexpr auto              VERSION_PREREL_TYPE   = semver::prerelease::alpha;
static inline constexpr uint8_t           VERSION_PREREL_NUMBER = 1;

static inline constexpr semver::version   VERSION               = semver::version 
{
	VERSION_MAJOR, 
	VERSION_MINOR, 
	VERSION_PATCH, 
	VERSION_PREREL_TYPE, 
	VERSION_PREREL_NUMBER
};

}//namespace qptr::srcprof
