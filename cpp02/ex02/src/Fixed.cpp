#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}


Fixed::~Fixed()
{
}

Fixed::Fixed(const int int_val)
{
	this->value = int_val << fractional_bits;
}

Fixed::Fixed(const float float_val)
{
	this->value = static_cast<int>(roundf(float_val * (1 << this->fractional_bits)));
}

float Fixed::toFloat() const
{
	return static_cast<float>(this->value) / (1 << this->fractional_bits);
}

int Fixed::toInt() const
{
	return this->value >> this->fractional_bits;
}


int Fixed::getRawBits() const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
	return;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits(this->value + other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits(this->value - other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits((this->value * other.getRawBits()) >> fractional_bits);
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits((this->value / other.getRawBits()) << fractional_bits);
	return (tmp);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->value == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->value != other.getRawBits());
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->value > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->value < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return !(*this < other);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return !(*this > other);
}

Fixed &Fixed::operator++()
{
	++this->value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	const Fixed tmp = *this;
	++(*this);
	return tmp;
}

Fixed &Fixed::operator--()
{
	--this->value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	const Fixed tmp = *this;
	--(*this);
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
    	return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}