#include "Draw_Tools.h"
#include "Graph.h"
#include "Simple_window.h"

void runCircles() 
{
	using namespace Graph_lib;
	using namespace Draw_Tools_lib;

	const Point x(0, 0);
	Simple_window win(x, 600, 400, "circles");

	Circle c1{ Point{100,200}, 50 };
	c1.set_color(Color::black);

	Circle c2{ Point{150,200}, 100 };
	c2.set_color(Color::black);

	Circle c3{ Point{200,200},150 };
	c3.set_color(Color::black);


	win.attach(c1);
	win.attach(c2);
	win.attach(c3);
	win.wait_for_button();
}
