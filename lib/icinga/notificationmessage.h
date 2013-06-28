/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012 Icinga Development Team (http://www.icinga.org/)        *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#ifndef NOTIFICATIONMESSAGE_H
#define NOTIFICATIONMESSAGE_H

#include "icinga/i2-icinga.h"
#include "icinga/notification.h"
#include "remoting/messagepart.h"

namespace icinga
{

/**
 * A notification message for a service.
 *
 * @ingroup icinga
 */
class I2_ICINGA_API NotificationMessage : public MessagePart
{
public:
	NotificationMessage(void) : MessagePart() { }
	explicit NotificationMessage(const MessagePart& message) : MessagePart(message) { }

	String GetService(void) const;
	void SetService(const String& service);

	String GetUser(void) const;
	void SetUser(const String& user);

	NotificationType GetType(void) const;
	void SetType(NotificationType type);

	String GetAuthor(void) const;
	void SetAuthor(const String& author);

	String GetCommentText(void) const;
	void SetCommentText(const String& comment_text);

	Dictionary::Ptr GetCheckResult(void) const;
	void SetCheckResult(const Dictionary::Ptr& result);
};

}

#endif /* NOTIFICATIONMESSAGE_H */
