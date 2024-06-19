#pragma once

class interval {
public:
	double min;
	double max;

	interval() : min(+infinity), max(-infinity) {} // Default interval is empty

	interval(double min, double max) : min(min), max(max) {}

	double size() const {
		return max - min;
	}

	bool coutains(double x) const {
		return min <= x && max >= x;
	}

	bool surrounds(double x) const {
		return min < x && max > x;
	}

	static const interval empty;
	static const interval universe;
};

const interval interval::empty = interval(+infinity, -infinity);
const interval interval::universe = interval(-infinity, +infinity);