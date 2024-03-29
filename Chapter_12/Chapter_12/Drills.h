#include "Graph.h"
#include "Simple_window.h"

void drills()
{
    using namespace Graph_lib;

    Point tl(150, 150);                 //top left corner of our window
    Simple_window win(tl, 600, 400, "My window");
            // screen coordinate tl for top left corner
            // windowsize(600*400)
            // title: My window
    win.wait_for_button();              // display!


    Axis xa{ Axis::x, Point{20,300},380, 12,"x axis" };   //make an Axis
            //an Axis is a kind of shape
            //Axis::x means horizontal
            //starting at (20, 300)
            //280 pixels long
            //10 "notches"
            // label the axis "x axis"
    xa.set_color(Color::black);        // choose a colour
    xa.label.set_color(Color::black);   //choose colour for text
    win.attach(xa);                //atach xa to the window, win
    win.set_label("My window #2");  //re-label the window
    win.wait_for_button();              // display!


    Axis ya(Axis::y, Point{ 20,300 }, 280, 10, "y axis");
    ya.set_color(Color::green);        // choose a colour
    ya.label.set_color(Color::dark_red);   //choose colour for text
    win.attach(ya);                //atach xa to the window, win
    win.set_label("My window #3");  //re-label the window
    win.wait_for_button();              // display!


    Function sine{ sin,0,100,Point{20,150},1000,45,45 }; //sine curv
            //plot sin() in range [0:100] with (0,0) at (20,150)
            // using 1000 points; scale x values *50, scale y values * 50
    win.attach(sine);
    win.set_label("My window #4");
    win.wait_for_button();

    sine.set_color(Color::blue);        //changed our mind about sine's colour'


    Graph_lib::Polygon poly;            //a polygon is a kind of shape: Graph_lib stops ambiguous error
    poly.add(Point{ 300,200 });         // three points make a triangle
    poly.add(Point{ 350,100 });
    poly.add(Point{ 400,200 });

    poly.set_color(Color::red);
    poly.set_style(Line_style::dashdotdot);
    win.attach(poly);
    win.set_label("My window #5");
    win.wait_for_button();


    Graph_lib::Rectangle r{ Point{200,200}, 100,50 };       //rectangle
    win.attach(r);
    win.set_label("My window #6");
    win.wait_for_button();


    Closed_polyline poly_rect;              
    poly_rect.add(Point{ 100,50 });
    poly_rect.add(Point{ 200,50 });
    poly_rect.add(Point{ 250,75 });
    poly_rect.add(Point{ 200,100 });
    poly_rect.add(Point{ 100,100 });
    poly_rect.add(Point{ 50,75 });
   
    win.attach(poly_rect);

    r.set_fill_color(Color::yellow);                        //fill
    poly.set_style(Line_style(Line_style::dash, 4));
    poly_rect.set_style(Line_style(Line_style::dot, 2));
    poly_rect.set_fill_color(Color::green);
    win.set_label("My window #7");
    win.wait_for_button();


    Text t{ Point{150,150}, "Hello, Graphical Dave!" };     //text
    win.attach(t);
    win.set_label("My window #8");
    win.wait_for_button();


    t.set_font(Font::times_bold);                           //font
    t.set_font_size(20);
    win.set_label("My window #9");
    win.wait_for_button();


    Image ii{ Point{100,50}, "old marina.jpg" };            //image
    win.attach(ii);
    win.set_label("My window #10");
    win.wait_for_button();


    ii.move(100, 200);
    win.set_label("My window #11");
    win.wait_for_button();


    Circle c{ Point{100,200},50 };
    Graph_lib::Ellipse e{ Point{100,200},75,25 };
    e.set_color(Color::dark_red);
    Mark m{ Point{100,200},'x' };

    ostringstream oss;
    oss << "screen size: " << x_max() << "*" << y_max()
        << "; window size: " << win.x_max() << "*" << win.y_max();
    Text sizes{ Point{100,20}, oss.str() };

    Image cal{ Point{225,255}, "it.gif" };
    cal.set_mask(Point{ 40,40 }, 200, 150);

    win.attach(c);
    win.attach(m);
    win.attach(e);

    win.attach(sizes);
    win.attach(cal);
    win.set_label("My window #12");
    win.wait_for_button();


}

void runDrills()
{
    drills();
}
