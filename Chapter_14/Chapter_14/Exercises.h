#include "MyTools14.h"
#include "Simple_window.h"


using namespace Graph_lib;
using namespace MyTools_lib;

void runExercises() {


	Point tl(150, 150);
	Simple_window win(tl, 1000, 800, "PPP Chapter 14 exercise #1");

	// === exercise 1 === //
	Smiley smile(Point(200, 200), 50);
	smile.set_color(Color::yellow);
	Frowney frown(Point(300, 200), 50);
	frown.set_color(Color::red);
	// hats //
	Smiley_hat smileyHat(Point(400, 200), 50);
	smileyHat.set_color(Color::green);
	Frowney_hat frowneyHat(Point(500, 200), 50);
	frowneyHat.set_color(Color::dark_magenta);


	win.attach(smile);
	win.attach(frown);
	win.attach(smileyHat);
	win.attach(frowneyHat);
	win.wait_for_button();

	// === exercise 4 === //
	Immobile_Circle immobile_circle(Point(200, 400), 50);
	immobile_circle.set_color(Color::black);

	win.attach(immobile_circle);
	win.wait_for_button();

	immobile_circle.move(300,600);
	
	win.wait_for_button();

	// === exercise 5 === //
	Striped_rectangle stripedRectangle(Point(300,350 ), 200, 100, 10);
	stripedRectangle.set_color(Color::black);

	win.attach(stripedRectangle);
	win.wait_for_button();

	// === Exercise 6 === //
	Striped_Circle stripedCircle(Point(600, 400), 50, 5);
	stripedCircle.set_color(Color::black);

	win.attach(stripedCircle);
	win.wait_for_button();

	// === Exercise 8 === //
	Regular_Octagon regular_octagon(Point(200, 600), 50);
	regular_octagon.set_color(Color::black);

	win.attach(regular_octagon);
	win.wait_for_button();

	//regular_octagon.move(250, 600);
	regular_octagon.set_color(Color::yellow);
	regular_octagon.set_fill_color(Color::green);
	regular_octagon.set_style(Line_style(Line_style::dash, 4));
	win.wait_for_button();

	// == Exercise 9 == //
	Group group;

	Circle circle{ Point{400, 400}, 50 };
	Graph_lib::Rectangle rectangle{ Point{450, 450}, 50, 100 };
	
	win.attach(circle);
	win.attach(rectangle);
	group.add(circle);
	group.add(rectangle);
	win.wait_for_button();

	group.set_color(Color::blue);
	win.wait_for_button();

	group.set_fill_color(Color::dark_yellow);
	win.wait_for_button();

	group.move(100, 25);
	win.wait_for_button();
}
