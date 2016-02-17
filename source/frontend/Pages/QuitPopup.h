// ******************************************************************************
//
// Filename:	QuitPopup.h
// Project:		Game
// Author:		Steven Ball
//
// Purpose:
//
// Revision History:
//   Initial Revision - 12/10/14
//
// Copyright (c) 2005-2011, Steven Ball
//
// ******************************************************************************

#pragma once

#include "engine.h"

#include "..\FrontEndPage.h"


class QuitPopup : public FrontEndPage
{
public:
	/* Public methods */
	QuitPopup(OpenGLRenderer* pRenderer, OpenGLGUI* pGUI, FrontEndManager* pFrontPageManager, int windowWidth, int windowHeight);
	~QuitPopup();

	void Reset();

	void SetWindowDimensions(int width, int height);

	void Load();
	void Unload();

	void Update(float dt);

	void Render();
	void Render2D();

protected:
	/* Protected methods */
	static void _ConfirmPressed(void *apData);
	void ConfirmPressed();

	static void _CancelPressed(void *apData);
	void CancelPressed();

private:
	/* Private methods */

public:
	/* Public members */

protected:
	/* Protected members */

private:
	/* Private members */
	int m_backgroundWidth;
	int m_backgroundHeight;

	Label* m_pQuitText;

	Icon* m_pBackgroundIcon;

	Button* m_pCancelButton;
	Button* m_pConfirmButton;
};