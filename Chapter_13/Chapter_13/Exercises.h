#include "Draw_Tools.h"
#include "Graph.h"
#include "Simple_window.h"
 

void runExercises()
{
	using namespace Graph_lib;
	using namespace Draw_Tools_lib;

	Point tl(150, 150);
	Simple_window win(tl, 1400, 800, "PPP Chapter 13 exercise #1");

	// === exercise 1 === //
	Draw_Tools_lib::Arc arc1(Point(300, 200), 50, 0, 90);
	arc1.set_color(Color::black);
	arc1.draw_lines();

	Draw_Tools_lib::Arc arc2(Point(300, 200), 50, 90, 180);
	arc2.set_color(Color::yellow);
	arc2.draw_lines();

	Draw_Tools_lib::Arc arc3(Point(300, 200), 50, 180, 270);
	arc3.set_color(Color::green);
	arc3.draw_lines();

	win.attach(arc3);
	win.attach(arc1);
	win.attach(arc2);
	win.wait_for_button();

	// === exercise 2 === //
	Draw_Tools_lib::Box box1{ Point {200,150}, 200,100,10 };
	box1.set_color(Color::red);

	Draw_Tools_lib::Box box2{ Point {150,200}, 100,200,20 };
	box2.set_color(Color::blue);

	win.set_label("ppp Chapter 13 exercise #2");
	win.attach(box2);
	win.attach(box1);
	win.wait_for_button();
	
	// === exercise 3 === //
	Draw_Tools_lib::Arrow arrow1{ Point {200,100},Point {200,300} };
	arrow1.set_color(Color::black);
	Draw_Tools_lib::Arrow arrow2{ Point {400,250},Point {200,300} };
	arrow2.set_color(Color::black);
	
	win.set_label("ppp Chapter 13 exercise #3");
	win.attach(arrow1);
	win.attach(arrow2);
	win.wait_for_button();
	
	// === exercise 4 === //
	Graph_lib::Rectangle rec(Point(300, 300), Point(500, 400));
	rec.set_color(Color::dark_blue);
	win.attach(rec);

	Point nPoint = Draw_Tools_lib::nR(rec);
	Mark nMark(nPoint, 'x');
	nMark.set_color(Color::dark_red);
	win.attach(nMark);

	Point sePoint = Draw_Tools_lib::seR(rec);
	Mark seMark(sePoint, 'x');
	seMark.set_color(Color::dark_red);
	win.attach(seMark);

	Point cPoint = Draw_Tools_lib::centerR(rec);
	Mark cMark(cPoint, 'x');
	cMark.set_color(Color::dark_red);
	win.attach(cMark);

	win.set_label("ppp Chapter 13 exercise #4");
	win.wait_for_button();

	// === exercise 5 === //
	Circle cir(Point(500, 200), 50);
	cir.set_color(Color::dark_green);
	win.attach(cir);

	Point nCPoint = Draw_Tools_lib::nC(cir);
	Mark nCMark(nCPoint, 'x');
	nCMark.set_color(Color::red);
	win.attach(nCMark);

	Point eCPoint = Draw_Tools_lib::eC(cir);
	Mark eCMark(eCPoint, 'x');
	eCMark.set_color(Color::red);
	win.attach(eCMark);

	win.set_label("ppp Chapter 13 exercise #5");
	win.wait_for_button();

	// === exercise 6 === //
	TextBox graph(Point{ 100,500 },100,30, "Graph.h");
	graph.set_color(Color::black);
	win.attach(graph);

	win.set_label("ppp Chapter 13 exercise #6");
	win.wait_for_button();

	// === exercise 7 === //
	Vector_ref<Graph_lib::Rectangle> vr;

	for (int i = 0; i < 16; ++i) {
		for (int j = 0; j < 16; ++j) {
			vr.push_back(new Graph_lib::Rectangle{ Point{i * 20,j * 20},20, 20 });
			vr[vr.size() - 1].set_fill_color(Color{ i * 16 + j });
			win.attach(vr[vr.size() - 1]);
		}
	}

	win.set_label("ppp Chapter 13 exercise #7");
	win.wait_for_button();

	// === exercise 8 === //
	Regular_hexagon rh{ Point{500, 300}, 100 };
	rh.set_fill_color(Color::blue);
	win.attach(rh);

	win.set_label("ppp Chapter 13 exercise #8");
	win.wait_for_button();

	// === exercise 9 === //
	Vector_ref<Regular_hexagon> vrh;
	
	for (int i = 0; i != 4; i++) {
		int x = 400, y = 400;
		x += i * 30;
		y += i * 20;
		vrh.push_back(new Regular_hexagon{ Point{x,y },20 });
		vrh[vrh.size() - 1].set_color(Color::black);
		win.attach(vrh[vrh.size() - 1]);
	}
	for (int i = 0; i != 4; i++) {
		int x = 400, y = 435;
		x += i * 30;
		y += i * 20;
		vrh.push_back(new Regular_hexagon{ Point{x,y },20 });
		vrh[vrh.size() - 1].set_color(Color::red);
		win.attach(vrh[vrh.size() - 1]);
	}

	win.set_label("ppp Chapter 13 exercise #9");
	win.wait_for_button();

	// === exercise 10 === //
	Regular_polygon reg_poly{ Point{600, 500}, 50, 6 };
	reg_poly.set_fill_color(Color::dark_cyan);
	win.attach(reg_poly);

	Regular_polygon reg_poly2{ Point{700, 500}, 50, 3 };
	reg_poly2.set_fill_color(Color::dark_cyan);
	win.attach(reg_poly2);

	win.set_label("ppp Chapter 13 exercise #10");
	win.wait_for_button();

	// === exercise 11 === // 
	Graph_lib::Ellipse ell{ Point{900, 200}, 150, 100 };
	ell.set_color(Color::black);
	win.attach(ell);

	Axis x_axis{ Axis::x, Point{700,200},400,10,"x axis" };
	x_axis.set_color(Color::black);
	win.attach(x_axis);

	Axis y_axis{ Axis::y, Point{900,350},300,10,"y axis" };
	y_axis.set_color(Color::black);
	win.attach(y_axis);

	Mark foci1{ ell.focus1(), 'x' };
	foci1.set_color(Color::red);
	win.attach(foci1);

	Mark foci2{ ell.focus2(), 'x' };
	foci2.set_color(Color::red);
	win.attach(foci2);

	Point ell_point = Draw_Tools_lib::ene(ell);
	Mark ell_mark(ell_point, 'x');
	eCMark.set_color(Color::red);
	win.attach(ell_mark);

	win.set_label("ppp Chapter 13 exercise #11");
	win.wait_for_button();

}




