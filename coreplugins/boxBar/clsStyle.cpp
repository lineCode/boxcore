#include "clsStyle.h"

clsStyle::clsStyle()
{
	toolbar = (StyleItem *)GetSettingPtr(SN_TOOLBAR);
	toolbarClock = (StyleItem *)GetSettingPtr(SN_TOOLBARCLOCK);
	toolbarLabel = (StyleItem *)GetSettingPtr(SN_TOOLBARLABEL);
	toolbarButton = (StyleItem *)GetSettingPtr(SN_TOOLBARBUTTON);
	toolbarButtonPressed = (StyleItem *)GetSettingPtr(SN_TOOLBARBUTTONP);
	toolbarFont = CreateStyleFont(toolbar);
}

clsStyle::~clsStyle()
{
	//dtor
}

/** @brief getStyleFont
  *
  * @todo: document this function
  */
HFONT clsStyle::getStyleFont(int pStyle)
{
	switch (pStyle)
	{
	case SN_TOOLBAR:
	case SN_TOOLBARBUTTON:
	case SN_TOOLBARBUTTONP:
	case SN_TOOLBARCLOCK:
	case SN_TOOLBARLABEL:
	case SN_TOOLBARWINDOWLABEL:
		return toolbarFont;
	}
	return toolbarFont;
}

/** @brief getStyleBorder
  *
  * @todo: document this function
  */
bool clsStyle::getStyleBorder(int pStyle)
{
	switch (pStyle)
	{
	case SN_TOOLBAR:
		return toolbar->bordered;
	case SN_TOOLBARCLOCK:
		return toolbarClock->bordered;
	case SN_TOOLBARLABEL:
		return toolbarLabel->bordered;
	case SN_TOOLBARBUTTON:
		return toolbarButton->bordered;
	case SN_TOOLBARBUTTONP:
		return toolbarButtonPressed->bordered;
	}
	return toolbar->bordered;
}

/** @brief getStyleBorder
  *
  * @todo: document this function
  */
COLORREF clsStyle::getStyleTextColor(int pStyle)
{
	switch (pStyle)
	{
	case SN_TOOLBAR:
		return toolbar->TextColor;
	case SN_TOOLBARCLOCK:
		return toolbarClock->TextColor;
	case SN_TOOLBARLABEL:
		return toolbarLabel->TextColor;
	case SN_TOOLBARBUTTON:
		return toolbarButton->TextColor;
	case SN_TOOLBARBUTTONP:
		return toolbarButtonPressed->TextColor;
	}
	return toolbar->TextColor;
}

/** @brief getStyleBorder
  *
  * @todo: document this function
  */
int clsStyle::getStyleTextJustify(int pStyle)
{
	switch (pStyle)
	{
	case SN_TOOLBAR:
	case SN_TOOLBARBUTTON:
	case SN_TOOLBARBUTTONP:
	case SN_TOOLBARCLOCK:
	case SN_TOOLBARLABEL:
	case SN_TOOLBARWINDOWLABEL:
		return toolbar->Justify;
	}
	return toolbar->Justify;
}

/** @brief getStyle
  *
  * @todo: document this function
  */
StyleItem * clsStyle::getStyle(int pStyle)
{
	switch (pStyle)
	{
	case SN_TOOLBAR:
		return toolbar;
	case SN_TOOLBARCLOCK:
		return toolbarClock;
	case SN_TOOLBARLABEL:
		return toolbarLabel;
	case SN_TOOLBARBUTTON:
		return toolbarButton;
	case SN_TOOLBARBUTTONP:
		return toolbarButtonPressed;
	}
	return toolbar;
}
