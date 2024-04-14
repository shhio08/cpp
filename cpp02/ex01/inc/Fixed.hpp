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
	// 定数整数をパラメータとして受け取るコンストラクタ。
	// これを対応する固定小数点値に変換します。小数ビットの値は、練習問題 00 のように 8 に初期化されます
	Fixed(const float float_val);
	// 定数の浮動小数点数をパラメータとして受け取るコンストラクタ。
	// これは、対応する固定小数点値に変換します。小数ビットの値は、練習問題00のように8に初期化されます。
	float toFloat(void) const;
	// 固定小数点値を浮動小数点値に変換するメンバ関数
	int toInt(void) const;
	//固定小数点値を整数値に変換するメンバ関数
	int getRawBits() const;
	void setRawBits(int const raw);

	friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
};