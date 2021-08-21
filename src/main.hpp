#pragma once

#include "lib/cache/jsoncache.hpp"
#include "lib/developermode.hpp"
#include "lib/log.hpp"
#include "lib/spotify/playback.hpp"
#include "lib/spotify/playlist.hpp"
#include "lib/spotify/user.hpp"
#include "lib/qt/httpclient.hpp"
#include "lib/crash/crashhandler.hpp"

#include "client/clienthandler.hpp"
#include "dialog/settingsdialog.hpp"
#include "dialog/splashdialog.hpp"
#include "dialog/whatsnewdialog.hpp"
#include "list/librarylist.hpp"
#include "list/playlistlist.hpp"
#include "list/trackslist.hpp"
#include "listitem/track.hpp"
#include "mediaplayer/service.hpp"
#include "menu/mainmenu.hpp"
#include "menu/playlist.hpp"
#include "menu/songmenu.hpp"
#include "spotify/current.hpp"
#include "spotify/spotify.hpp"
#include "util/dateutils.hpp"
#include "util/httputils.hpp"
#include "util/icon.hpp"
#include "util/imageutils.hpp"
#include "util/parent.hpp"
#include "util/styleutils.hpp"
#include "view/context/context.hpp"
#include "view/maintoolbar.hpp"
#include "view/sidepanel/sidepanel.hpp"
#include "view/trayicon.hpp"
#include "widget/hiddensizegrip.hpp"

#include <QMainWindow>
#include <QSplitter>
#include <QStatusBar>
#include <QSizeGrip>
