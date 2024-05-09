#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int int_val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = int_val << fractional_bits;
}

Fixed::Fixed(const float float_val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = static_cast<int>(roundf(float_val * (1 << fractional_bits)));
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member fanction called" << std::endl;
	this->value = raw;
	return;
}