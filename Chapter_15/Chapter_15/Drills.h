#pragma once
#include <iostream>
#include "Graph.h"
#include "Window.h"
#include "Point.h"

using namespace Graph_lib;


class Function_graph : public Window
{
public:
	Function_graph(int w, int h, const std::string& title)
		: Window(w, h, title), xmax(w), ymax(h)
	{
		xoffset = w / 10;
		yoffset = h / 10;

		x_orig = xmax / 2;
		y_orig = xmax / 2;

		xlength = 500;
		ylength = 500;

		// === object must be static === //
		static Axis x{ Axis::x, Point{20, y_orig}, xlength, xlength / scale, "1 == 20 Pixels" };				
		static Axis y{ Axis::y, Point{x_orig, ylength + 20}, ylength, ylength / scale, "1 == 20 Pixels" };
		
		attach(x);
		attach(y);

		x.set_color(Color::red);
		y.set_color(Color::red);
	}

	int getX_orig() const { return x_orig; }
	int getY_orig() const { return y_orig; }

private:
	int xmax;
	int ymax;

	int x_orig;
	int y_orig;

	int xoffset;
	int yoffset;

	int space = 40;
	int scale = 20;

	int xlength;
	int ylength;

};

constexpr int r_min = -10;
constexpr int r_max = 11;
constexpr int num_of_points = 400;
constexpr int scale = 20;

const Point orig{ 300,300 };



double one(double x) { return 1; }
double slope(double x) { return x / 2; }
double square(double x) { return x * x; }
double sloping_cos(double x) { return cos(x) + slope(x); }


void runFunction_graph()
{
	Function_graph fg(600, 600, "Function Graph");

	Function f1{ one, r_min, r_max, orig, num_of_points, scale, scale };
	f1.set_color(Color::black);
	fg.attach(f1);
	Text t1(Point{ 100,fg.getY_orig() - 40 }, "one");
	t1.set_color(Color::black);
	fg.attach(t1);

	Function f2{ slope, r_min, r_max, orig, num_of_points, scale, scale };
	f2.set_color(Color::blue);
	fg.attach(f2);
	Text t2(Point{ 100,fg.getY_orig() + fg.getY_orig() / 2 - 60 }, "x/2");
	t2.set_color(Color::blue);
	fg.attach(t2);

	Function f3{ square, r_min, r_max, orig, num_of_points, scale, scale };
	f3.set_color(Color::yellow);
	fg.attach(f3);
	Text t3(Point{ fg.getX_orig() - 100, 20 }, "x*x");
	t3.set_color(Color::yellow);
	fg.attach(t3);

	Function f4{ cos, r_min, r_max, orig, num_of_points, scale, scale };
	f4.set_color(Color::green);
	fg.attach(f4);

	Function f5{ [](double x) {return cos(x) + slope(x); } , r_min, r_max, orig, num_of_points, scale, scale };
	f5.set_color(Color::magenta);
	fg.attach(f5);

	Graph_lib::gui_main();
}

class Person
{
public:
	Person():age(0){}
	Person(string n, int a) :name{ n }
	{
		if (a < 0 ) throw "Person: cannot be negative age";
		else if (a > 150) throw "Person class: cannot be older than 150";
		else age = a;

		for (char ch : n) {
			switch (ch)
			{
			case ';': case ':': case '"': case '[': case ']': case '*':
			case '&': case '^': case '%': case '$': case '#': case '@':
			case '!':
				throw "Person: bad character in name";
				break;
			default:
				break;
			}
		}
	}

	string getName() const { return name; }
	int getAge() const { return age; }

private:
	string name;
	int age;
};

ostream& operator<<(ostream& os, const Person& p)
{
	const char colon = ':';
	return os << p.getName() << colon
		<< p.getAge();
}

istream& operator>>(istream& is, Person& p)
{
	string name;
	int age;

	is >> name >> age;
	if (!is) throw "Person operator: unable to read Person";

	p = Person(name, age);

	return is;
}

void runClassDefinition()
{
	vector<Person> persons;
	cout << "End with f " << endl;
	for (Person p; cin >> p;) {
		if (p.getName() == "f") break;;
		persons.push_back(p);
	}
	
}