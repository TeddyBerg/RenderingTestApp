#pragma once


/// <summary>
/// A 2-dimensional vector that encodes a direction and a magnitude
/// </summary>
class Vector2 {
public:

#pragma region Constructors

	Vector2();
	Vector2(double x, double y);

#pragma endregion

#pragma region Getters and Setters

	double x() const;
	double y() const;
	void x(double newX);
	void y(double newY);

#pragma endregion

#pragma region Arithmetic

	friend Vector2 operator/(const Vector2& lhs, const double rhs);
	friend Vector2 operator*(const Vector2& lhs, const double rhs);
	friend Vector2 operator*(const Vector2& lhs, const Vector2& rhs);
	friend Vector2 operator+(const Vector2& lhs, const Vector2& rhs);
	friend Vector2 operator-(const Vector2& lhs, const Vector2& rhs);
	friend Vector2 operator==(const Vector2& lhs, const Vector2& rhs);
	friend Vector2 operator!=(const Vector2& lhs, const Vector2& rhs);

#pragma endregion

#pragma region Transformers

	/// <summary>
	/// Return a normalized vector using the L2 Norm
	/// </summary>
	/// <returns>A unit length vector in the same direction as the calling Vector</returns>
	Vector2 getNormalized() const;
	/// <summary>
	/// Normalize the vector in-place using the L2 Norm
	/// </summary>
	void normalize();

	double normL1() const;
	double normL2() const;
	double normInfinity() const;

#pragma endregion

private:
	double x_;
	double y_;

};