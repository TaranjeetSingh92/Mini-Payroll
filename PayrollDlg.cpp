
// PayrollDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Payroll.h"
#include "PayrollDlg.h"
#include "afxdialogex.h"
#include "View.h"

//TARAN
#include<string>
#include<ctime>
using namespace std;
//TARAN

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
/*

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()
*/

// CPayrollDlg dialog



CPayrollDlg::CPayrollDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PAYROLL_DIALOG, pParent)
{
	//m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPayrollDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CPayrollDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CPayrollDlg::OnBnClickedOk)
	ON_BN_CLICKED(ID_Process1, &CPayrollDlg::OnBnClickedProcess1)
	ON_BN_CLICKED(IDCLEAR, &CPayrollDlg::OnBnClickedClear)
	ON_BN_CLICKED(IDCLOSE, &CPayrollDlg::OnBnClickedClose)
	ON_BN_CLICKED(IDCLEAR2, &CPayrollDlg::OnBnClickedClear2)
END_MESSAGE_MAP()


// CPayrollDlg message handlers

BOOL CPayrollDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CPayrollDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		//CAboutDlg dlgAbout;
		//dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CPayrollDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CPayrollDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CPayrollDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
}

void CPayrollDlg::OnBnClickedProcess1()
{
	CString textInput;
	//Employee ID
	GetDlgItemText(IDC_EDIT_Employee_ID,textInput);
	double dEmployeeId = _ttof(textInput);
	//Hourly Wages
	GetDlgItemText(IDC_EDIT_Hourly_Wage, textInput);
	double dEmployeeWage = _ttof(textInput);
	//Week1
	GetDlgItemText(IDC_EDIT_Mon1, textInput);
	double dMon1 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Tue1, textInput);
	double dTue1 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Wed1, textInput);
	double dWed1 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Thu1, textInput);
	double dThu1 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Fri1, textInput);
	double dFri1 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Sat1, textInput);
	double dSat1 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Sun1, textInput);
	double dSun1 = _ttof(textInput);
	//Week2
	GetDlgItemText(IDC_EDIT_Mon2, textInput);
	double dMon2 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Tue2, textInput);
	double dTue2 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Wed2, textInput);
	double dWed2 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Thu2, textInput);
	double dThu2 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Fri2, textInput);
	double dFri2 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Sat2, textInput);
	double dSat2 = _ttof(textInput);
	GetDlgItemText(IDC_EDIT_Sun2, textInput);
	double dSun2 = _ttof(textInput);
	
	//Hourly calculations
	double week1 = 0;
	double week2 = 0;

	week1 = dMon1 + dTue1 + dWed1 + dThu1 + dFri1 + dSat1 + dSun1;
	week2 = dMon2 + dTue2 + dWed2 + dThu2 + dFri2 + dSat2 + dSun2;

	double regularhours1 = 0;
	double regularhours2 = 0;
	double totalhours = 0;
	double overtime1 = 0;
	double overtime2 = 0;
	double overtimehours = 0;
	double regularamount = 0;
	double overtimeamount = 0;
	double totalearnings = 0;

	//gethours week1
	if (week1 > 40)
	{
		regularhours1 = 40;
		overtime1 = week1 - 40;
	}
	else
	{
		regularhours1 = week1;
	}

	//get hours week2
	if (week2 > 40)
	{
		regularhours2 = 40;
		overtime2 = week2 - 40;
	}
	else
	{
		regularhours2 = week2;
	}

	totalhours = regularhours1 + regularhours2;
	overtimehours = overtime1 + overtime2;

	//get amount
	regularamount = dEmployeeWage * totalhours;
	overtimeamount = (dEmployeeWage * 1.5) * overtimehours;
	totalearnings = regularamount + overtimeamount;

	//set hours
	string setTotalhours = to_string(totalhours);
	CString totalRegularHours(setTotalhours.c_str());
	SetDlgItemText(IDC_EDIT_Hours1, totalRegularHours);

	string setOvertimehours = to_string(overtimehours);
	CString totalOvertimeHours(setOvertimehours.c_str());
	SetDlgItemText(IDC_EDIT_Hours2, totalOvertimeHours);
	
	//set amount
	string setRegularamount = to_string(regularamount);
	CString totalRegularamount(setRegularamount.c_str());
	SetDlgItemText(IDC_EDIT_Amount1, totalRegularamount);

	string setoveramount = to_string(overtimeamount);
	CString totaloveramount(setoveramount.c_str());
	SetDlgItemText(IDC_EDIT_Amount2, totaloveramount);

	//set total earnings
	string settotalearnings = to_string(totalearnings);
	CString totalamount(settotalearnings.c_str());
	SetDlgItemText(IDC_EDIT_Earnings, totalamount);
}

void CPayrollDlg::OnDtnDatetimechangeDatetimepicker2(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMDATETIMECHANGE pDTChange = reinterpret_cast<LPNMDATETIMECHANGE>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
}


void CPayrollDlg::OnBnClickedClear()
{

}

void CPayrollDlg::OnBnClickedClose()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
}





void CPayrollDlg::OnBnClickedClear2()
{
	// TODO: Add your control notification handler code here
	CString clearall(" ");
	SetDlgItemText(IDC_EDIT_Employee_ID, clearall);
	SetDlgItemText(IDC_EDIT_Hourly_Wage, clearall);
	SetDlgItemText(IDC_EDIT_Mon1, clearall);
	SetDlgItemText(IDC_EDIT_Tue1, clearall);
	SetDlgItemText(IDC_EDIT_Wed1, clearall);
	SetDlgItemText(IDC_EDIT_Thu1, clearall);
	SetDlgItemText(IDC_EDIT_Fri1, clearall);
	SetDlgItemText(IDC_EDIT_Sat1, clearall);
	SetDlgItemText(IDC_EDIT_Sun1, clearall);
	SetDlgItemText(IDC_EDIT_Mon2, clearall);
	SetDlgItemText(IDC_EDIT_Tue2, clearall);
	SetDlgItemText(IDC_EDIT_Wed2, clearall);
	SetDlgItemText(IDC_EDIT_Thu2, clearall);
	SetDlgItemText(IDC_EDIT_Fri2, clearall);
	SetDlgItemText(IDC_EDIT_Sat2, clearall);
	SetDlgItemText(IDC_EDIT_Sun2, clearall);
	SetDlgItemText(IDC_EDIT_Hours1, clearall);
	SetDlgItemText(IDC_EDIT_Hours2, clearall);
	SetDlgItemText(IDC_EDIT_Amount1, clearall);
	SetDlgItemText(IDC_EDIT_Amount2, clearall);
	SetDlgItemText(IDC_EDIT_Earnings, clearall);
}
