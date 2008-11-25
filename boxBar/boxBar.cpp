/*
 ============================================================================
  SDK example plugin for Blackbox for Windows.
  Copyright © 2004 grischka

  This program is free software, released under the GNU General Public
  License (GPL version 2 or later). See:

  http://www.fsf.org/licenses/gpl.html

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

 ============================================================================

  Description:

  This is an example Slit-Plugin for Blackbox for Windows. It displays
  a little stylized window with an inscription.

  The plugin window can be moved with:
	- left mouse and the control key held down,

  and resized with
	- left mouse and the alt key held down

  Some standard plugin window properties can be configured with the
  right-click menu, also the inscription text can be set.

 ============================================================================
*/

#include "version.h"
#include "BBApi.h"
#include <tchar.h>

#include "clsBoxBar.h"

clsBoxBar boxBar;

// ----------------------------------
// plugin info

LPCSTR szVersion        = PLUGININFO_NAME " " PLUGININFO_VERSION;
LPCSTR szAppName        = PLUGININFO_NAME;
LPCSTR szInfoVersion    = PLUGININFO_VERSION;
LPCSTR szInfoAuthor     = PLUGININFO_AUTHOR;
LPCSTR szInfoRelDate    =  __DATE__ ;
LPCSTR szInfoLink       = PLUGININFO_URL;
LPCSTR szInfoEmail      = PLUGININFO_EMAIL;

// ----------------------------------
// The About MessageBox


//*****************************************************************************
// utilities
//===========================================================================

//===========================================================================
// The startup interface

int beginSlitPlugin(HINSTANCE hPluginInstance, HWND hSlit)
{
	return boxBar.beginPluginEx(hPluginInstance, hSlit);
}

//===========================================================================
// xoblite type slit interface

int beginPluginEx(HINSTANCE hPluginInstance, HWND hSlit)
{
	return boxBar.beginPluginEx(hPluginInstance, hSlit);
}

// no-slit interface
int beginPlugin(HINSTANCE hPluginInstance)
{
	return boxBar.beginPluginEx(hPluginInstance, NULL);
}

//===========================================================================
// on unload...

void endPlugin(HINSTANCE hPluginInstance)
{
	boxBar.endPlugin(hPluginInstance);
	dbg_printf("Real end of endplugin");
}

//===========================================================================
// pluginInfo is used by Blackbox for Windows to fetch information about
// a particular plugin.

LPCSTR pluginInfo(int field)
{
	switch (field)
	{
	case PLUGIN_NAME:
		return szAppName;       // Plugin name
	case PLUGIN_VERSION:
		return szInfoVersion;   // Plugin version
	case PLUGIN_AUTHOR:
		return szInfoAuthor;    // Author
	case PLUGIN_RELEASE:
		return szInfoRelDate;   // Release date, preferably in yyyy-mm-dd format
	case PLUGIN_LINK:
		return szInfoLink;      // Link to author's website
	case PLUGIN_EMAIL:
		return szInfoEmail;     // Author's email
	default:
		return szVersion;       // Fallback: Plugin name + version, e.g. "MyPlugin 1.0"
	}
}
