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

static void set_image(Image * img)
{
	ui.workspace->image(img);
}

int main(int argc, const char * argv[])
{
	Fl::scheme("gtk+");
	ui.make_window();
	setup_window();
	//XXX
	Image * img = new Image(64, 64);
	img->add_layer(new Layer(64, 64, "Background"));
	Palette & pal = img->pal();
	pal[0] = 0xff00ffff;
	pal[1] = 0x000000ff;
	pal[2] = 0xffffffff;
	set_image(img);
	//---
	ui.window->show();
	Fl::run();
}
