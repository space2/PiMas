// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "MainUI.h"

Fl_Menu_Item MainUI::menu_[] = {
 {"&File", 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {"&New", 0x40006e,  0, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Open", 0x40006f,  0, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Save", 0x400073,  0, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"Save &as", 0x410073,  0, 0, 128, FL_NORMAL_LABEL, 0, 14, 0},
 {"E&xit", 0x400071,  0, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};
Fl_Menu_Item* MainUI::menu_file_new = MainUI::menu_ + 1;
Fl_Menu_Item* MainUI::menu_file_open = MainUI::menu_ + 2;
Fl_Menu_Item* MainUI::menu_file_save = MainUI::menu_ + 3;
Fl_Menu_Item* MainUI::menu_file_saveas = MainUI::menu_ + 4;
Fl_Menu_Item* MainUI::menu_file_exit = MainUI::menu_ + 5;

Fl_Double_Window* MainUI::make_window() {
  { window = new Fl_Double_Window(800, 600, "PiMas - Pixel Master - (C) 2014 Pal Szasz");
    window->user_data((void*)(this));
    window->align(Fl_Align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE));
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 800, 25);
      o->menu(menu_);
    } // Fl_Menu_Bar* o
    { workspace = new Workspace(0, 25, 780, 426);
      workspace->box(FL_DOWN_BOX);
      workspace->color(FL_BACKGROUND_COLOR);
      workspace->selection_color(FL_BACKGROUND_COLOR);
      workspace->labeltype(FL_NORMAL_LABEL);
      workspace->labelfont(0);
      workspace->labelsize(14);
      workspace->labelcolor(FL_FOREGROUND_COLOR);
      workspace->align(Fl_Align(FL_ALIGN_CENTER));
      workspace->when(FL_WHEN_RELEASE);
    } // Workspace* workspace
    { scr_v = new Fl_Scrollbar(780, 25, 20, 445);
    } // Fl_Scrollbar* scr_v
    { scr_h = new Fl_Scrollbar(0, 450, 780, 20);
      scr_h->type(1);
    } // Fl_Scrollbar* scr_h
    { Fl_Group* o = new Fl_Group(0, 470, 200, 90, "Tools");
      o->box(FL_DOWN_BOX);
      o->labelsize(10);
      o->align(Fl_Align(FL_ALIGN_TOP|FL_ALIGN_INSIDE));
      { tool6 = new Fl_Button(5, 535, 60, 20, "Slot#0");
        tool6->labelsize(10);
      } // Fl_Button* tool6
      { tool3 = new Fl_Button(5, 510, 60, 20, "Slot#0");
        tool3->labelsize(10);
      } // Fl_Button* tool3
      { tool0 = new Fl_Button(5, 485, 60, 20, "Slot#0");
        tool0->labelsize(10);
      } // Fl_Button* tool0
      { tool7 = new Fl_Button(70, 535, 60, 20, "Slot#0");
        tool7->labelsize(10);
      } // Fl_Button* tool7
      { tool4 = new Fl_Button(70, 510, 60, 20, "Slot#0");
        tool4->labelsize(10);
      } // Fl_Button* tool4
      { tool1 = new Fl_Button(70, 485, 60, 20, "Slot#0");
        tool1->labelsize(10);
      } // Fl_Button* tool1
      { tool8 = new Fl_Button(135, 535, 60, 20, "Slot#0");
        tool8->labelsize(10);
      } // Fl_Button* tool8
      { tool5 = new Fl_Button(135, 510, 60, 20, "Slot#0");
        tool5->labelsize(10);
      } // Fl_Button* tool5
      { tool2 = new Fl_Button(135, 485, 60, 20, "Slot#0");
        tool2->labelsize(10);
      } // Fl_Button* tool2
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(600, 470, 200, 90, "Inks");
      o->box(FL_DOWN_BOX);
      o->labelsize(10);
      o->align(Fl_Align(FL_ALIGN_TOP|FL_ALIGN_INSIDE));
      { ink6 = new Fl_Button(605, 535, 60, 20, "Slot#0");
        ink6->labelsize(10);
      } // Fl_Button* ink6
      { ink3 = new Fl_Button(605, 510, 60, 20, "Slot#0");
        ink3->labelsize(10);
      } // Fl_Button* ink3
      { ink0 = new Fl_Button(605, 485, 60, 20, "Slot#0");
        ink0->labelsize(10);
      } // Fl_Button* ink0
      { ink7 = new Fl_Button(670, 535, 60, 20, "Slot#0");
        ink7->labelsize(10);
      } // Fl_Button* ink7
      { ink4 = new Fl_Button(670, 510, 60, 20, "Slot#0");
        ink4->labelsize(10);
      } // Fl_Button* ink4
      { ink1 = new Fl_Button(670, 485, 60, 20, "Slot#0");
        ink1->labelsize(10);
      } // Fl_Button* ink1
      { ink8 = new Fl_Button(735, 535, 60, 20, "Slot#0");
        ink8->labelsize(10);
      } // Fl_Button* ink8
      { ink5 = new Fl_Button(735, 510, 60, 20, "Slot#0");
        ink5->labelsize(10);
      } // Fl_Button* ink5
      { ink2 = new Fl_Button(735, 485, 60, 20, "Slot#0");
        ink2->labelsize(10);
      } // Fl_Button* ink2
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(200, 470, 400, 90, "Palette");
      o->box(FL_DOWN_BOX);
      o->labelsize(10);
      o->align(Fl_Align(FL_ALIGN_TOP|FL_ALIGN_INSIDE));
      { fav_colors = new Fl_Box(245, 485, 350, 25, "(fav. colors)");
        fav_colors->box(FL_BORDER_FRAME);
        fav_colors->color(FL_FOREGROUND_COLOR);
      } // Fl_Box* fav_colors
      { cur_color = new Fl_Box(205, 485, 25, 25);
        cur_color->box(FL_BORDER_FRAME);
        cur_color->color(FL_FOREGROUND_COLOR);
      } // Fl_Box* cur_color
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(0, 560, 200, 40, "Layers");
      o->box(FL_DOWN_BOX);
      o->labelsize(10);
      o->align(Fl_Align(FL_ALIGN_TOP|FL_ALIGN_INSIDE));
      { layers = new Fl_Choice(5, 575, 130, 20);
        layers->down_box(FL_BORDER_BOX);
      } // Fl_Choice* layers
      { layer_more = new Fl_Button(175, 575, 20, 20, "@9->");
      } // Fl_Button* layer_more
      { layer_add = new Fl_Button(135, 575, 20, 20, "@+");
      } // Fl_Button* layer_add
      { layer_del = new Fl_Button(155, 575, 20, 20, "@1+");
      } // Fl_Button* layer_del
      o->end();
    } // Fl_Group* o
    window->size_range(800, 600);
    window->end();
  } // Fl_Double_Window* window
  return window;
}
