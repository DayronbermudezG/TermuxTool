// PROYECTO: TermuxTool //

#include <iostream>


void Mensaje();
void Menu(int &numOption);

int main() {

    // Me quede pensando en arreglar la funcion Menu(); por que
    // quiero que el mensaje de ingresar la opcion salga despues del menu opciones.

    int numOption = 0;

    Mensaje();
    Menu(numOption);

    return 0;
}

void Mensaje() {

    std::cout << " ______                       ______          __     " << std::endl;
    std::cout << "/_  __/__ ______ _  __ ____ _/_  __/__  ___  / /     " << std::endl;
    std::cout << " / / / -_) __/  ' \\/ // /\\ \\ // / / _ \\/ _ \\/ / " << std::endl;
    std::cout << "/_/  \\__/_/ /_/_/_/\\_,_//_\\_\\/_/  \\___/\\___/_/ " << std::endl;
    std::cout << "            Creado por DayronBG                      " << std::endl;
    std::cout << std::endl;
}

void Menu(int &numOption) {

    std::cout << "             ╓─[Opciones]───╖" << std::endl;
    std::cout << "             ║              ║" << std::endl;
    std::cout << "             ║ 1-Iniciar    ║" << std::endl;
    std::cout << "             ║ 2-Salir      ║" << std::endl;
    std::cout << "             ║              ║" << std::endl;
    std::cout << "             ╟──────────────╜" << std::endl;
    std::cout << "             ╙> "; std::cin >> numOption;
    
    if(numOption == 1) {

        std::cout << "Se ingreso la opcion de iniciar\n";
    }
    else if(numOption == 2) {

        std::cout << "Se ingreso la opcion de salir\n";
    }
    else {

        std::cout << "La opcion ingresada no es valida.\n";
    }
}