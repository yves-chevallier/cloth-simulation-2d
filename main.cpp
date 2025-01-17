#include <iostream>
#include <math.h>

#include "application.h"

int main(int argc, char* args[]) {
    Application app;

    app.Setup(1200, 320, 10);

    while(app.IsRunning()) {
        app.Input();
        app.Update();
        app.Render();
    }
    app.Destroy();
}

