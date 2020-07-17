

#include "stdafx.h"
#include "realplayerDlg.h"
#include "realplayerDlgDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

	enum { IDD = IDD_ABOUTBOX };
	
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);   

protected:
	
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	
END_MESSAGE_MAP()


CRealplayerDlgDlg::CRealplayerDlgDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRealplayerDlgDlg::IDD, pParent)
{
	
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CRealplayerDlgDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	
}

BEGIN_MESSAGE_MAP(CRealplayerDlgDlg, CDialog)
	
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTOPEN, OnOpen)
	ON_BN_CLICKED(IDC_BTPAUSE, OnPause)
	ON_BN_CLICKED(IDC_BTSTOP, OnStop)
	ON_BN_CLICKED(IDC_BTSOUNDADD, OnSoundAdd)
	ON_BN_CLICKED(IDC_BTSOUNDSUB, OnSoundSub)
	ON_BN_CLICKED(IDC_BTPROCADD, OnProcAdd)
	ON_BN_CLICKED(IDC_BTPROCSUB, OnProcSub)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


BOOL CRealplayerDlgDlg::OnInitDialog()
{
	CDialog::OnInitDialog();


	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}


	SetIcon(m_hIcon, TRUE);			
	SetIcon(m_hIcon, FALSE);		
	CRect rc;
	GetDlgItem(IDC_REALPLAYER)->GetWindowRect(rc);
	ScreenToClient(&rc);
	m_realplayer.Create("",WS_POPUP,rc,this,10000);
	m_realplayer.ShowWindow(SW_SHOW);
	
	
	return TRUE; 
}

void CRealplayerDlgDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}



void CRealplayerDlgDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); 

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}


HCURSOR CRealplayerDlgDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CRealplayerDlgDlg::OnOpen() 
{
	CString strname;
	CFileDialog dlg(TRUE,NULL,NULL,OFN_HIDEREADONLY,"realplay�ļ�|*.rm||");
	if(dlg.DoModal()==IDOK){
		strname=dlg.GetPathName();
	}	
	if(strname!="")
	{
		m_realplayer.SetSource(strname);
		m_realplayer.DoPlay();
	}	
}

void CRealplayerDlgDlg::OnPause() 
{
	if(m_realplayer.GetPlayState()==0)return;	
	CString text;
	GetDlgItem(IDC_BUTTON2)->GetWindowText(text);
	if(text=="��ͣ")
	{
		m_realplayer.DoPause();
		GetDlgItem(IDC_BUTTON2)->SetWindowText("����");

	}	
	else
	{
		m_realplayer.DoPlay();
		SetTimer(1,20,NULL);
		GetDlgItem(IDC_BUTTON2)->SetWindowText("��ͣ");
	}
}

void CRealplayerDlgDlg::OnStop() 
{
	m_realplayer.DoStop();	
}

void CRealplayerDlgDlg::OnSoundAdd() 
{
	short vl=0;
	if(m_realplayer.GetPlayState()==3)
	{
		vl=m_realplayer.GetVolume();
		if(vl<=90)
		{
			m_realplayer.DoPause();
			m_realplayer.SetVolume(vl+10);
			m_realplayer.DoPlay();
		}
	}
	else
	{
		if(vl<=90)
		m_realplayer.SetVolume(vl+10);
	}
}

void CRealplayerDlgDlg::OnSoundSub() 
{
	short vl=0;
	if(m_realplayer.GetPlayState()==3)
	{
		vl=m_realplayer.GetVolume();
		if(vl>=10)
		{
			m_realplayer.DoPause();
			m_realplayer.SetVolume(vl-10);
			m_realplayer.DoPlay();
		}
	}
	else
	{
		if(vl>=10)
		m_realplayer.SetVolume(vl-10);
	}
}

void CRealplayerDlgDlg::OnProcAdd() 
{
	if(m_realplayer.GetPlayState()==3)
	{
		long pos=m_realplayer.GetPosition();
		m_realplayer.DoPause();
		m_realplayer.SetPosition(pos+2000);
		m_realplayer.DoPlay();
	}
}

void CRealplayerDlgDlg::OnProcSub() 
{
	if(m_realplayer.GetPlayState()==3)
	{
		long pos=m_realplayer.GetPosition();
		if(pos<2000)return;
		m_realplayer.DoPause();
		m_realplayer.SetPosition(pos-2000);
		m_realplayer.DoPlay();
	}
}

BOOL CRealplayerDlgDlg::DestroyWindow() 
{
	KillTimer(0);
	return CDialog::DestroyWindow();
}

void CRealplayerDlgDlg::OnTimer(UINT nIDEvent) 
{
	m_realplayer.DoPlay();
	CDialog::OnTimer(nIDEvent);
}
