// SPDX-FileCopyrightText: 2024 Manuel Schneider
// SPDX-License-Identifier: MIT

#include "qnotification.h"
#include "qnotificationmanager.h"
#include <QLoggingCategory>
Q_LOGGING_CATEGORY(LC, "QNotifications")
using namespace std;


class QNotificationManagerPrivate
{
public:
};


QNotificationManager::QNotificationManager():
    d(new QNotificationManagerPrivate)
{
    qFatal("QNotificationManager (Win): Not implemented");
}

QNotificationManager::~QNotificationManager()
{
}

QNotificationManager &QNotificationManager::instance()
{
    static QNotificationManager instance;
    return instance;
}

void QNotificationManager::send(QNotification &qdn)
{
}

void QNotificationManager::dismiss(QNotification &qdn)
{
}

