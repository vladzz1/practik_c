#include <iostream>
using std::cout; using std::endl; using std::string;

class Shape
{
	string name;
	string type;
public:
	Shape() :name("no data"), type("no data") {}
	Shape(string name, string type) :name(name), type(type) {}
	virtual void show()const
	{
		cout << "name: " << name << endl;
		cout << "type: " << type << endl;
	}
	virtual void getArea()const
	{
		cout << "no area" << endl;
	}
};

class Rectangle : public Shape
{
	float a;
	float b;
public:
	Rectangle() :a(0), b(0), Shape() {}
	Rectangle(string name, string type, float a, float b) :a(a), b(b), Shape(name, type) {}
	void show()const override
	{
		Shape::show();
	}
	void getArea()const override
	{
		cout << "area: " << a * b << endl;
	}
};

class Circle : public Shape
{
	float radius;
public:
	Circle() :radius(0), Shape() {}
	Circle(string name, string type, float radius) :radius(radius), Shape(name, type) {}
	void show()const override
	{
		Shape::show();
	}
	void getArea()const override
	{
		cout << "area: " << 3.14 * (radius * radius) << endl;
	}
};

class RightTriangle : public Shape
{
	float a;
	float b;
	float c;
public:
	RightTriangle() :a(0), b(0), c(0), Shape() {}
	RightTriangle(string name, string type, float a, float b, float c) :a(a), b(b), c(c), Shape(name, type) {}
	void show()const override
	{
		Shape::show();
	}
	void getArea()const override
	{
		cout << "area: " << (a * b) / 2 << endl;
	}
};

class Triangle : public Shape
{
	float a;
	float b;
	float c;
public:
	Triangle() :a(0), b(0), c(0), Shape() {}
	Triangle(string name, string type, float a, float b, float c) :a(a), b(b), c(c), Shape(name, type) {}
	void show()const override
	{
		Shape::show();
	}
	void getArea()const override
	{
		cout << "no area" << endl;
	}
};

class Trapeze : public Shape
{
	float a;
	float b;
public:
	Trapeze() :a(0), b(0), Shape() {}
	Trapeze(string name, string type, float a, float b) :a(a), b(b), Shape(name, type) {}
	void show()const override
	{
		Shape::show();
	}
	void getArea()const override
	{
		cout << "no area" << endl;
	}
};

void testShape(Shape& shape)
{
	shape.show();
	shape.getArea();
}

void main()
{
	
}