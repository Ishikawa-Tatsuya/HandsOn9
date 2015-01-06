
// MFCApplication.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMFCApplicationApp:
// このクラスの実装については、MFCApplication.cpp を参照してください。
//

class CMFCApplicationApp : public CWinApp
{
public:
	CMFCApplicationApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplicationApp theApp;