#pragma once

#include <iostream>
#include <cmath>
#include <string>

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

	friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
};