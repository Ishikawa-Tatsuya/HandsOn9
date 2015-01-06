
// MFCApplicationDlg.h : �w�b�_�[ �t�@�C��
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// CMFCApplicationDlg �_�C�A���O
class CMFCApplicationDlg : public CDialogEx
{
// �R���X�g���N�V����
public:
	CMFCApplicationDlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^�[

// �_�C�A���O �f�[�^
	enum { IDD = IDD_MFCAPPLICATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g


// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
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
