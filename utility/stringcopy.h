/*
 * stringcopy.h
 *
 *  Created on: 12 Jan 2009
 *      Author: shaun
 */

#ifndef STRINGCOPY_H_
#define STRINGCOPY_H_

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

bool CopyString(LPSTR p_dest, LPCSTR p_src, UINT p_max);
bool CopyString(LPSTR p_dest, LPCWSTR p_src, UINT p_max);
bool CopyString(LPWSTR p_dest, LPCSTR p_src, UINT p_max);
bool CopyString(LPWSTR p_dest, LPCWSTR p_src, UINT p_max);

#endif /* STRINGCOPY_H_ */
