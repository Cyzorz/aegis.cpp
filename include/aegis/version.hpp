//
// version.hpp
// ***********
//
// Copyright (c) 2019 Sharon W (sharon at aegis dot gg)
//
// Distributed under the MIT License. (See accompanying file LICENSE)
// 

#pragma once

#if !defined(AEGIS_VERSION_LONG)
#define AEGIS_VERSION_LONG 0x00020500
#define AEGIS_VERSION_SHORT 020500
#define AEGIS_VERSION_TEXT "aegis.cpp 2.5.0 2019/11/21"

#define AEGIS_VERSION_MAJOR ((AEGIS_VERSION_LONG & 0x00ff0000) >> 16)
#define AEGIS_VERSION_MINOR ((AEGIS_VERSION_LONG & 0x0000ff00) >> 8)
#define AEGIS_VERSION_PATCH (AEGIS_VERSION_LONG & 0x000000ff)
#endif
