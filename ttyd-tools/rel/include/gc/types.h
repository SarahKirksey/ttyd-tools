#pragma once

#include <cstdint>

namespace gc {

struct vec3
{
	float x, y, z;
} __attribute__((__packed__));

struct color4
{
	uint8_t r, g, b, a;
} __attribute__((__packed__));

}