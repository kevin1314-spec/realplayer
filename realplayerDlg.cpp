

#include "stdafx.h"
#include "realplayerDlg.h"
#include "realplayerDlgDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

BEGIN_MESSAGE_MAP(CRealplayerDlgApp, CWinApp)
	
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()



CRealplayerDlgApp::CRealplayerDlgApp()
{
	
}


CRealplayerDlgApp theApp;


BOOL CRealplayerDlgApp::InitInstance()
{
	AfxEnableControlContainer();

	

#ifdef _AFXDLL
	Enable3dControls();			
#else
	Enable3dControlsStatic();	
#endif

	CRealplayerDlgDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	
	}
	else if (nResponse == IDCANCEL)
	{
		
	}

	
	return FALSE;
}
