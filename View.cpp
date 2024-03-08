// View.cpp : implementation file
//

#include "pch.h"
#include "Payroll.h"
#include "PayrollDlg.h"
#include "afxdialogex.h"
#include "View.h"


// View dialog

IMPLEMENT_DYNAMIC(View, CDialogEx)

View::View(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

View::~View()
{
}

void View::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(View, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &View::OnBnClickedCancel)
	ON_BN_CLICKED(IDCANCEL2, &View::OnBnClickedCancel2)
END_MESSAGE_MAP()


// View message handlers


void View::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
}


void View::OnBnClickedCancel2()
{
	// TODO: Add your control notification handler code here
	
	CPayrollDlg obj;
	obj.DoModal();
}
