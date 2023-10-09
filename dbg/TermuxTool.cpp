// PROYECTO: TermuxTool //

#include <iostream>


void Mensaje();
void pause();

int main() {

    Mensaje();
    pause();

    return 0;
}

void Mensaje() {

std::cout << " ______                       ______          __     " << std::endl;
std::cout << "/_  __/__ ______ _  __ ____ _/_  __/__  ___  / /     " << std::endl;
std::cout << " / / / -_) __/  ' \\/ // /\\ \\ // / / _ \\/ _ \\/ / " << std::endl;
std::cout << "/_/  \\__/_/ /_/_/_/\\_,_//_\\_\\/_/  \\___/\\___/_/ " << std::endl;
std::cout << "            Creado por DayronBG                      " << std::endl;

std::cout << std::endl;

std::cout << "             ╓─[Opciones]───╖                        " << std::endl;
std::cout << "             ║              ║                        " << std::endl;
std::cout << "             ║ 1-Iniciar    ║" << std::endl;
std::cout << "             ║ 2-Salir      ║" << std::endl;
std::cout << "             ║              ║" << std::endl;
std::cout << "             ╙──────────────╜" << std::endl;
}

void pause() {

    system("pause>nul");
}