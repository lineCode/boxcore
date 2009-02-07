/** @internal
  * @brief Defines the interface that VWM modules must implement
  *
  * This file is part of the boxCore source code @n
  * <!-- Copyright (C) 2009 Carsomyr -->
  * Copyright &copy; 2009 Carsomyr
  * @par Links:
  * http://developer.berlios.de/projects/boxcore @n
  * @par License:
  * boxCore, bbLean and bb4win are free software, released under the GNU General
  * Public License (GPL version 2 or later), with an extension that allows
  * linking of proprietary modules under a controlled interface. This means
  * that plugins etc. are allowed to be released under any license the author
  * wishes. For details see:
  * @par
  * http://www.fsf.org/licenses/gpl.html @n
  * http://www.fsf.org/licenses/gpl-faq.html#LinkingOverControlledInterface
  * @par
  * This program is distributed in the hope that it will be useful, but
  * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
  * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
  * for more details.
  */

#ifndef CLSVWMINTERFACE_H_
#define CLSVWMINTERFACE_H_

#include <windows.h>

namespace WindowManagement
{

class VWMInterface
{
public:
	virtual ~VWMInterface() {}

	virtual void Reload() PURE;
	virtual void Update() PURE;

	virtual void SwitchToWorkspace(HMONITOR p_monitor, UINT p_workspace) PURE;
	virtual void GatherWindows() PURE;
	virtual UINT GetWindowDesk(HWND p_window) PURE;
	virtual UINT GetWindowStatus(HWND p_window) PURE;
};

}

#endif /* CLSVWMINTERFACE_H_ */
