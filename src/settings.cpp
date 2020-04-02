#include "settings.h"

Settings::Settings(QObject* parent)
{

}

Settings* Settings::instance()
{
    static Settings i;
    return &i;
}
