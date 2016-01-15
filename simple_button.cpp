#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
using namespace std;

void but_cb( Fl_Widget* o, void*  ) {
   Fl_Button* b=(Fl_Button*)o;
   b->label("Test Successful");

   b->resize(10,150,140,30);
   b->redraw();
}

int main() {

    Fl_Window win( 300,200,"Testing" );
    win.begin();
       Fl_Button but( 10, 150, 70, 30, "Test" );
    win.end();
    but.callback( but_cb );
    win.show();
    return Fl::run();
}

