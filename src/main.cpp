#include "ui/MainUI.h"

static MainUI ui;

static void cb_window_close(Fl_Widget * w, void * d)
{
	ui.window->hide();
}

static void setup_window()
{
	ui.window->callback(cb_window_close);
	ui.menu_file_exit->callback(cb_window_close);
}

int main(int argc, const char * argv[])
{
	Fl::scheme("gtk+");
	ui.make_window();
	setup_window();
	ui.window->show();
	Fl::run();
}
