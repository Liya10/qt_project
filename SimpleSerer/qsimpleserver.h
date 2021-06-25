 #ifndef QSIMPLESERVER_H
#define QSIMPLESERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QDateTime>

class QSimpleServer : public QTcpServer
{
    Q_OBJECT
public:
    QSimpleServer(QObject *parent=0);
    void incomingConnection(int handle);
public slots:
    void onReadyRead();
    void onDisconnected();
};

#endif // QSIMPLESERVER_H
