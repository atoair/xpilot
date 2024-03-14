/*
 * xPilot: X-Plane pilot client for VATSIM
 * Copyright (C) 2019-2024 Justin Shannon
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
*/

#ifndef PDU_ADDPILOT_H
#define PDU_ADDPILOT_H

#include "pdu_base.h"

class PDUAddPilot : public PDUBase
{
public:
    PDUAddPilot(QString callsign, QString cid, QString password, NetworkRating rating, ProtocolRevision proto, SimulatorType simType, QString realName);

    QStringList toTokens() const;

    static PDUAddPilot fromTokens(const QStringList& fields);

    static QString pdu() { return "#AP"; }

    QString CID;
    QString Password;
    NetworkRating Rating;
    ProtocolRevision Protocol;
    SimulatorType SimType;
    QString RealName;

private:
    PDUAddPilot();
};

#endif
