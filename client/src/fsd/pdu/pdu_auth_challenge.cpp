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

#include "pdu_auth_challenge.h"

PDUAuthChallenge::PDUAuthChallenge() : PDUBase() {}

PDUAuthChallenge::PDUAuthChallenge(QString from, QString to, QString challenge) :
    PDUBase(from, to)
{
    ChallengeKey = challenge;
}

QStringList PDUAuthChallenge::toTokens() const
{
    QStringList tokens;
    tokens.append(From);
    tokens.append(To);
    tokens.append(ChallengeKey);
    return tokens;
}

PDUAuthChallenge PDUAuthChallenge::fromTokens(const QStringList &tokens)
{
    if(tokens.length() < 3) {
        throw PDUFormatException("Invalid field count.", Reassemble(tokens));
    }

    return PDUAuthChallenge(tokens[0], tokens[1], tokens[2]);
}
