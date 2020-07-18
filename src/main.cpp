#include "vedeoapplication.h"

int main(int argc, char* argv[])
{
    VedeoApplication a("Vedeo", "xavi-b.fr", "xavi-b", argc, argv);
    a.run();
    return a.exec();
}
