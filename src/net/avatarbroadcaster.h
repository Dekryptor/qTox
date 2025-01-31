/*
    Copyright © 2015 by The qTox Project

    This file is part of qTox, a Qt-based graphical interface for Tox.

    qTox is libre software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    qTox is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with qTox.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef AVATARBROADCASTER_H
#define AVATARBROADCASTER_H

#include <QByteArray>
#include <QMap>

/// Takes care of broadcasting avatar changes to our friends
class AvatarBroadcaster
{
private:
    AvatarBroadcaster()=delete;

public:
    /// Set our current avatar
    static void setAvatar(QByteArray data);
    /// Send our current avatar to this friend, if not already sent
    static void sendAvatarTo(uint32_t friendId);
    /// If true, we automatically broadcast our avatar to friends when they come online
    static void enableAutoBroadcast(bool state = true);

private:
    static QByteArray avatarData;
};

#endif // AVATARBROADCASTER_H
