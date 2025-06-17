#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <termios.h>
#include <vector>
#include "view.h"
#include "gameObject.h"

class Controller{

public:
    bool collision();
    Controller(View&);
    void run();
    bool getstatus();
private:

    void handleInput(int);
    void update();
    bool status=true;
    // Model
    std::vector<GameObject*> _objs;

    // View
    View& _view; 
};

static struct termios old_termios, new_termios;
void reset_terminal();
void configure_terminal();
int read_input();

#endif
