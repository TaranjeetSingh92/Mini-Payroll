#pragma once
#include "afxdialogex.h"


// View dialog

class View : public CDialogEx
{
	DECLARE_DYNAMIC(View)
	HICON m_hIcon;
public:
	View(CWnd* pParent = nullptr);   // standard constructor
	virtual ~View();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedCancel2();
};
