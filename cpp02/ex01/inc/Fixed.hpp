#pragma once

#include <iostream>
#include <cmath>
#include <string>
#include<math.h>

class Fixed
{
private:
	int value;
	static const int fractional_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	Fixed(const int int_val);
	Fixed(const float float_val);
	float toFloat() const;
	int toInt() const;
	int getRawBits() const;
	void setRawBits(int const raw);
};

inline std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}