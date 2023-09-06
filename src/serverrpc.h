/******************************************************************************\
 * Copyright (c) 2021-2023
 *
 * Author(s):
 *  dtinth
 *  Christian Hoffmann
 *
 ******************************************************************************
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 *
\******************************************************************************/

#pragma once

#include "server.h"
#include "rpcserver.h"

/* Classes ********************************************************************/
class CServerRpc : public QObject
{
    Q_OBJECT

public:
    CServerRpc ( CServer* pServer, CRpcServer* pRpcServer, QObject* parent = nullptr );
    static QJsonValue SerializeRegistrationStatus ( ESvrRegStatus eSvrRegStatus );
};
