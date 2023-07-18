#include "Graph.h"
#include "Simple_window.h"

int main()
{
	using namespace Graph_lib;

	Point tl(150, 150);
	Simple_window win(tl, 800, 600, "PPP Chapter 12 exercise #1");

	win.wait_for_button();
}