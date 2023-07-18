#include "Graph.h"
#include "fltk.h"

using namespace Graph_lib;

namespace MyTools_lib {

	// ==== Exercise 1 ==== //
	class Smiley : public Circle
	{
	public:
		Smiley(Point p, int r)
			:Circle{ p, r },
			lEye{ Point{p.x - r / 3, p.y - r / 3}, 'x' },
			rEye{ Point{p.x + r / 3, p.y - r / 3 }, 'x' },
			mouth{ p, r * 2 / 3, 200, 340 } {}

		void draw_lines() const {
			Circle::draw_lines();
			lEye.draw_lines();
			rEye.draw_lines();
			mouth.draw_lines();
		}

	private:
		Mark lEye;
		Mark rEye;
		Graph_lib::Arc mouth;
	};

	class Smiley_hat : public Smiley
	{
	public:
		Smiley_hat(Point p, int r) : Smiley{ p, r }
			, rim{ Point{p.x - r,p.y - r},r + r, r / 5 }
			, top{ Point{(p.x - r) + r / 2 ,(p.y - r) - r / 2},r ,r / 2 }
		{
			rim.set_color(Color::black);
			top.set_color(Color::black);
			rim.set_fill_color(Color::black);
			top.set_fill_color(Color::black);
		}

		void draw_lines() const {
			Smiley::draw_lines();
			rim.draw_lines();
			top.draw_lines();
		}
	private:
		Graph_lib::Rectangle rim;
		Graph_lib::Rectangle top;
	};

	class Frowney : public Circle
	{
	public:
		Frowney(Point p, int r)
			:Circle{ p, r },
			lEye{ Point{p.x - r / 3, p.y - r / 3}, 'x' },
			rEye{ Point{p.x + r / 3, p.y - r / 3 }, 'x' },
			mouth{ Point{p.x, p.y + r * 3 / 4}, r * 2 / 3, 22, 157 } { }

		void draw_lines() const {
			Circle::draw_lines();
			lEye.draw_lines();
			rEye.draw_lines();
			mouth.draw_lines();
		}
	private:
		Mark lEye;
		Mark rEye;
		Graph_lib::Arc mouth;
	};

	class Frowney_hat : public Frowney
	{
	public:
		Frowney_hat(Point p, int r) : Frowney{ p, r }
			, rim{ Point{p.x - r,p.y - r},r + r, r / 5 }
			, top{ Point{(p.x - r) + r / 2 ,(p.y - r) - r / 2},r ,r / 2 }
		{
			rim.set_color(Color::magenta);
			top.set_color(Color::magenta);
			rim.set_fill_color(Color::magenta);
			top.set_fill_color(Color::magenta);
		}

		void draw_lines() const {
			Frowney::draw_lines();
			rim.draw_lines();
			top.draw_lines();
		}
	private:
		Graph_lib::Rectangle rim;
		Graph_lib::Rectangle top;
	};

	// ==== Exersise 4 ==== //
	class Immobile_Circle : public Circle
	{
	public:
		Immobile_Circle(Point p, int r) : Circle{ p, r } {}
		void move(int dx, int dy) override{}
	};

	// ==== Exercise 5 ==== //
	class Striped_rectangle : public Rectangle
	{
	public:
		Striped_rectangle(Point p, int w, int h, int s):
			Rectangle{p, w, h}, space{s}
		{
			for (int i = p.y + space; i < p.y + h; i += space) {
				stripes.add(Point{ p.x, i }, Point{ p.x + w - 1, i });
			}
		}

		void draw_lines() const {
			Rectangle::draw_lines();
			stripes.draw_lines();
		}
	private:
		Lines stripes;
		int space;
	};

	// ==== Exercise 6 ==== //
	class Striped_Circle : public Circle
	{
	public:
		Striped_Circle(Point p, int r, int s):
			Circle{ p, r }, space{ s }
		{
			for (int i = p.y - r; i < p.y + r; i += space) {
				int mod = sqrt(pow(r, 2) - pow(p.y - i, 2));
				stripes.add(Point{ p.x + mod, i }, Point{ p.x - mod, i });
			}
		}

		void draw_lines() const {
			Circle::draw_lines();
			stripes.draw_lines();
		}
	private:
		Lines stripes;
		int space;
	};

	// ==== Exercise 8 ==== //
	
	constexpr double PI = 3.14159265;

	struct Regular_Octagon : Closed_polyline {
		Regular_Octagon(Point p, int r)
			:centre{ p }, radius{ r }, numOfSides(8) {
			for (int i = 0; i < 360; i += 360 / numOfSides) {
				double x = centre.x + cos(i * PI / 180) * radius;
				double y = centre.y + sin(i * PI / 180) * radius;
				add(Point{ int(x), int(y) });
			}
		}

	private:
		Point centre;
		int radius;
		int numOfSides;
	};
	
	// === Exercise 9 === // 
	class Group {
	public:
		Group() {}

		void add(Shape& s) { gr.push_back(s); }

		void move(int dx, int dy) {
			for (int i = 0; i != gr.size(); i++) {
				gr[i].move(dx, dy);
			}
		}
		void set_color(Color colour) {
			for (int i = 0; i != gr.size(); i++) {
				gr[i].set_color(colour);
			}
		}
		void set_fill_color(Color colour) {
			for (int i = 0; i != gr.size(); i++) {
				gr[i].set_fill_color(colour);
			}
		}
		void set_style(Line_style lstyl) {
			for (int i = 0; i != gr.size(); i++) {
				gr[i].set_style(lstyl);
			}
		}

	private:
		Vector_ref<Shape> gr;
	};
}

