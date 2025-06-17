#include <iostream>
#include <string>
#include "view.h"
#include "controller.h"
#include "AnsiPrint.h"
/**
 * Print my id
 * */
void
PrintMyID(std::string studId) {

    std::string str = "ID: " + studId;
    std::cout << AnsiPrint(str.c_str(),YELLOW,RED, true, true) << std::endl << std::endl;
}
void
Printf(std::string studId) {

    std::string str = studId;
    std::cout << AnsiPrint(str.c_str(),YELLOW,RED, true, true) << std::endl << std::endl;
}



int main(){
    View view;
    Controller controller(view);
    controller.run();
    if(controller.getstatus==false){
        Printf("Serious one lose.");
    }else{
        Printf("You lose but gwaen-chanh-ayo");
    }
    PrintMyID("113703041");
}
