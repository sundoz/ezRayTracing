#pragma once

#include "rtweekend.hpp"

class hit_record;

class material {
	public
		virtual ~material() = default;

	virtual bool scatter(
		const ray& r_in, const hit_record& rec, color& attenuation, ray& scattered
	) const {
		return false;
	}
};