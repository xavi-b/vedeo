#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>

class Settings : public QSettings
{
    Q_OBJECT
private:
    Settings(QObject* parent = nullptr);

public:
    static Settings* instance();
};

#endif // SETTINGS_H
