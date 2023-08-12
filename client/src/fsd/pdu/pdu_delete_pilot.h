/*
 * xPilot: X-Plane pilot client for VATSIM
 * Copyright (C) 2019-2023 Justin Shannon
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

#ifndef PDU_DELETEPILOT_H
#define PDU_DELETEPILOT_H

#include "pdu_base.h"

class PDUDeletePilot : public PDUBase
{
public:
    PDUDeletePilot(QString from, QString cid);

    QStringList toTokens() const;

    static PDUDeletePilot fromTokens(const QStringList& fields);

    static QString pdu() { return "#DP"; }

    QString CID;

private:
    PDUDeletePilot();
};

#endif
