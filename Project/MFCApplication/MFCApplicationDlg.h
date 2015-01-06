
// MFCApplicationDlg.h : ヘッダー ファイル
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// CMFCApplicationDlg ダイアログ
class CMFCApplicationDlg : public CDialogEx
{
// コンストラクション
public:
	CMFCApplicationDlg(CWnd* pParent = NULL);	// 標準コンストラクター

// ダイアログ データ
	enum { IDD = IDD_MFCAPPLICATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnTvnEndlabeledit(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTreeCtrl m_tree;
	CListBox m_list;
	afx_msg void OnBnClickedOk();
};
