
// PayrollDlg.h : header file
//

#pragma once


// CPayrollDlg dialog
class CPayrollDlg : public CDialogEx
{
// Construction
public:
	CPayrollDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAYROLL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedProcess1();
	afx_msg void OnBnClickedClear();
	afx_msg void OnEnChangeEditAmount2();
	afx_msg void OnStnClickedHourlyWage();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedClose();
	afx_msg void OnDtnDatetimechangeDatetimepicker2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedClear2();
};
