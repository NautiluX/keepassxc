/*
 *  Copyright (C) 2017 KeePassXC Team <team@keepassxc.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEEPASSXC_UTILS_H
#define KEEPASSXC_UTILS_H

#include "cli/TextStream.h"
#include "core/Database.h"
#include "keys/CompositeKey.h"
#include "keys/FileKey.h"
#include "keys/PasswordKey.h"
#include <QtCore/qglobal.h>

#ifdef WITH_XC_YUBIKEY
#include "keys/YkChallengeResponseKey.h"
#include "keys/YkChallengeResponseKeyCLI.h"
#include "keys/drivers/YubiKey.h"
#endif

namespace Utils
{
    extern FILE* STDOUT;
    extern FILE* STDERR;
    extern FILE* STDIN;
    extern FILE* DEVNULL;

    void setStdinEcho(bool enable);
    QString getPassword(FILE* outputDescriptor = STDOUT);
    int clipText(const QString& text);
    QSharedPointer<Database> unlockDatabase(const QString& databaseFilename,
                                            const bool isPasswordProtected = true,
                                            const QString& keyFilename = {},
                                            const QString& yubiKeySlot = {},
                                            FILE* outputDescriptor = STDOUT,
                                            FILE* errorDescriptor = STDERR);

    namespace Test
    {
        void setNextPassword(const QString& password);
    }
}; // namespace Utils

#endif // KEEPASSXC_UTILS_H
