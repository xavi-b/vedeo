#ifndef FILELOGGER_H
#define FILELOGGER_H

#include <QObject>
#include <QFile>
#include "logger.h"

class FileLogger : public QObject
{
    Q_OBJECT
private:
    QString dirPath;
    qint64 logFileMaxSize = 1024 * 1024; // 1024 KB
    QFile currentLogFile;

    void logWrittenHandler(Log const& log);
    QString getLogFilenameFormat(QString const& baseFilename, char c) const;
    QString getLogFilenameFormat(QString const& baseFilename, int currentLogFileNum) const;
    QString getCurrentLogFilename() const;

public:
    FileLogger(QString const& dirPath, QObject* parent = nullptr);
    ~FileLogger();

    void setLogFileMaxSize(qint64 kbSize)
    {
        this->logFileMaxSize = kbSize * 1024;
    }

signals:
    void fileError(QFile::FileError);
};

#endif // FILELOGGER_H
