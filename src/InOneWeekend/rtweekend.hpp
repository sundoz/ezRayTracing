#pragma once


#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <memory>

using std::fabs;
using std::make_shared;
using std::shared_ptr;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.141526535897932385;

inline double degrees_to_radians(double degrees) {
	return degrees * pi / 180;
}

inline double random_double() {
	// returns a random real in [0, 1]
	return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
	return min + (max - min) * random_double();
}
#include "color.hpp"
#include "ray.hpp"
#include "vec3.hpp"
#include "interval.hpp"