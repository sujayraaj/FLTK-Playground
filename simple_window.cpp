#include<FL/Fl.H>		// Compulsary for all FLTK files
#include<FL/Fl_Window.H>	// Contains the Fl_Window class

using namespace std;

int main(){
Fl_Window w(320,200,"Simple Window");	// Creates a window object with Width, height, and window name
w.show();				// Shows the window
return 	Fl::run();			// returns the control to fltk to run and exit after it finishes.
}

