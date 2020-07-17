

#include "stdafx.h"
#include "realaudio.h"

IMPLEMENT_DYNCREATE(CRealAudio, CWnd)



CString CRealAudio::GetSource()
{
	CString result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetSource(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CRealAudio::GetConsole()
{
	CString result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetConsole(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CRealAudio::GetControls()
{
	CString result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetControls(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL CRealAudio::GetNoLabels()
{
	BOOL result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetNoLabels(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CRealAudio::GetAutoStart()
{
	BOOL result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetAutoStart(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CRealAudio::GetAutoGotoURL()
{
	BOOL result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetAutoGotoURL(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString CRealAudio::GetWindowName()
{
	CString result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetWindowName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

short CRealAudio::GetVolume()
{
	short result;
	InvokeHelper(0xe2, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetVolume(short nVol)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xe3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 nVol);
}

BOOL CRealAudio::GetMute()
{
	BOOL result;
	InvokeHelper(0xe4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetMute(BOOL bMute)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xe5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bMute);
}

BOOL CRealAudio::GetLoop()
{
	BOOL result;
	InvokeHelper(0xe6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetLoop(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xe7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetImageStatus()
{
	BOOL result;
	InvokeHelper(0xea, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetImageStatus(BOOL bEnable)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bEnable);
}

long CRealAudio::GetPacketsTotal()
{
	long result;
	InvokeHelper(0xec, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetPacketsReceived()
{
	long result;
	InvokeHelper(0xed, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetPacketsOutOfOrder()
{
	long result;
	InvokeHelper(0xee, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetPacketsMissing()
{
	long result;
	InvokeHelper(0xef, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetPacketsEarly()
{
	long result;
	InvokeHelper(0xf0, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetPacketsLate()
{
	long result;
	InvokeHelper(0xf1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetBandwidthAverage()
{
	long result;
	InvokeHelper(0xf2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetBandwidthCurrent()
{
	long result;
	InvokeHelper(0xf3, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

void CRealAudio::DoPlayPause()
{
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CRealAudio::DoStop()
{
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CRealAudio::DoNextItem()
{
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CRealAudio::DoPrevItem()
{
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CRealAudio::CanPlayPause()
{
	BOOL result;
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::CanStop()
{
	BOOL result;
	InvokeHelper(0xce, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::HasNextItem()
{
	BOOL result;
	InvokeHelper(0xcf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::HasPrevItem()
{
	BOOL result;
	InvokeHelper(0xd0, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::HasNextEntry()
{
	BOOL result;
	InvokeHelper(0x153, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::HasPrevEntry()
{
	BOOL result;
	InvokeHelper(0x154, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::DoNextEntry()
{
	InvokeHelper(0x155, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CRealAudio::DoPrevEntry()
{
	InvokeHelper(0x156, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CRealAudio::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CRealAudio::EditPreferences()
{
	InvokeHelper(0xd2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CRealAudio::HideShowStatistics()
{
	InvokeHelper(0xd3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CRealAudio::IsStatisticsVisible()
{
	BOOL result;
	InvokeHelper(0xd4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::DoGotoURL(LPCTSTR url, LPCTSTR target)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0xd5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 url, target);
}

void CRealAudio::DoPlay()
{
	InvokeHelper(0x101, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CRealAudio::DoPause()
{
	InvokeHelper(0x102, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CRealAudio::GetPosition()
{
	long result;
	InvokeHelper(0x103, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetPlayState()
{
	long result;
	InvokeHelper(0x104, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetLength()
{
	long result;
	InvokeHelper(0x105, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CRealAudio::GetTitle()
{
	CString result;
	InvokeHelper(0x106, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString CRealAudio::GetAuthor()
{
	CString result;
	InvokeHelper(0x107, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString CRealAudio::GetCopyright()
{
	CString result;
	InvokeHelper(0x108, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetClipWidth()
{
	long result;
	InvokeHelper(0x109, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetClipHeight()
{
	long result;
	InvokeHelper(0x10a, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::CanPlay()
{
	BOOL result;
	InvokeHelper(0x10b, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::CanPause()
{
	BOOL result;
	InvokeHelper(0x10c, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetPosition(long lPosition)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x10d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 lPosition);
}

long CRealAudio::GetNumLoop()
{
	long result;
	InvokeHelper(0x10e, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetNumLoop(long lVal)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x10f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 lVal);
}

BOOL CRealAudio::GetCenter()
{
	BOOL result;
	InvokeHelper(0x110, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetCenter(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x111, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetNoLogo()
{
	BOOL result;
	InvokeHelper(0x112, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetNoLogo(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x113, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetMaintainAspect()
{
	BOOL result;
	InvokeHelper(0x114, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetMaintainAspect(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x115, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

CString CRealAudio::GetBackgroundColor()
{
	CString result;
	InvokeHelper(0x116, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetBackgroundColor(LPCTSTR pVal)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x117, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pVal);
}

BOOL CRealAudio::GetStereoState()
{
	BOOL result;
	InvokeHelper(0x118, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::GetLiveState()
{
	BOOL result;
	InvokeHelper(0x119, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::GetShowStatistics()
{
	BOOL result;
	InvokeHelper(0x11a, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetShowStatistics(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetShowPreferences()
{
	BOOL result;
	InvokeHelper(0x11c, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetShowPreferences(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetShowAbout()
{
	BOOL result;
	InvokeHelper(0x11e, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetShowAbout(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetOriginalSize()
{
	BOOL result;
	InvokeHelper(0x120, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetOriginalSize()
{
	InvokeHelper(0x121, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CRealAudio::GetDoubleSize()
{
	BOOL result;
	InvokeHelper(0x122, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetDoubleSize()
{
	InvokeHelper(0x123, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CRealAudio::GetFullScreen()
{
	BOOL result;
	InvokeHelper(0x124, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetFullScreen()
{
	InvokeHelper(0x125, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CRealAudio::GetEnableContextMenu()
{
	BOOL result;
	InvokeHelper(0x126, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetEnableContextMenu(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x127, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetEnableOriginalSize()
{
	BOOL result;
	InvokeHelper(0x128, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetEnableOriginalSize(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x129, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetEnableDoubleSize()
{
	BOOL result;
	InvokeHelper(0x12a, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetEnableDoubleSize(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetEnableFullScreen()
{
	BOOL result;
	InvokeHelper(0xf4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetEnableFullScreen(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xf5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetEnableMessageBox()
{
	BOOL result;
	InvokeHelper(0x151, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetEnableMessageBox(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x152, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

void CRealAudio::SetTitle(LPCTSTR pVal)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xf6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pVal);
}

void CRealAudio::SetAuthor(LPCTSTR pVal)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xf7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pVal);
}

void CRealAudio::SetCopyright(LPCTSTR pVal)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xf8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pVal);
}

BOOL CRealAudio::GetWantKeyboardEvents()
{
	BOOL result;
	InvokeHelper(0x132, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetWantKeyboardEvents(BOOL bWantsEvents)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x131, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bWantsEvents);
}

BOOL CRealAudio::GetWantMouseEvents()
{
	BOOL result;
	InvokeHelper(0x134, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetWantMouseEvents(BOOL bWantsEvents)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x133, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bWantsEvents);
}

short CRealAudio::GetNumEntries()
{
	short result;
	InvokeHelper(0x135, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CRealAudio::GetCurrentEntry()
{
	short result;
	InvokeHelper(0x136, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

CString CRealAudio::GetEntryTitle(short uEntryIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x137, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		uEntryIndex);
	return result;
}

CString CRealAudio::GetEntryAuthor(short uEntryIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x138, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		uEntryIndex);
	return result;
}

CString CRealAudio::GetEntryCopyright(short uEntryIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x139, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		uEntryIndex);
	return result;
}

CString CRealAudio::GetEntryAbstract(short uEntryIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x13a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		uEntryIndex);
	return result;
}

void CRealAudio::SetCanSeek(BOOL bCanSeek)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bCanSeek);
}

BOOL CRealAudio::GetCanSeek()
{
	BOOL result;
	InvokeHelper(0x13c, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetBufferingTimeElapsed()
{
	long result;
	InvokeHelper(0x13d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetBufferingTimeRemaining()
{
	long result;
	InvokeHelper(0x13e, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetConnectionBandwidth()
{
	long result;
	InvokeHelper(0x13f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CRealAudio::GetPreferedLanguageString()
{
	CString result;
	InvokeHelper(0x140, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetPreferedLanguageID()
{
	long result;
	InvokeHelper(0x141, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetUserCountryID()
{
	long result;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

short CRealAudio::GetNumSources()
{
	short result;
	InvokeHelper(0x143, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

CString CRealAudio::GetSourceTransport(short nSourceNum)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x144, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		nSourceNum);
	return result;
}

BOOL CRealAudio::GetWantErrors()
{
	BOOL result;
	InvokeHelper(0x145, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetWantErrors(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x146, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetShuffle()
{
	BOOL result;
	InvokeHelper(0x147, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetShuffle(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x148, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

CString CRealAudio::GetVersionInfo()
{
	CString result;
	InvokeHelper(0x149, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString CRealAudio::GetLastMessage()
{
	CString result;
	InvokeHelper(0x14b, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetLastErrorSeverity()
{
	long result;
	InvokeHelper(0x14e, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetLastErrorRMACode()
{
	long result;
	InvokeHelper(0x14d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CRealAudio::GetLastErrorUserCode()
{
	long result;
	InvokeHelper(0x14f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CRealAudio::GetLastErrorUserString()
{
	CString result;
	InvokeHelper(0x150, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString CRealAudio::GetLastErrorMoreInfoURL()
{
	CString result;
	InvokeHelper(0x14c, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetPreFetch(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x157, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

BOOL CRealAudio::GetPreFetch()
{
	BOOL result;
	InvokeHelper(0x158, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetRegion(LPCTSTR pVal)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x159, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pVal);
}

CString CRealAudio::GetRegion()
{
	CString result;
	InvokeHelper(0x15a, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::GetIsPlus()
{
	BOOL result;
	InvokeHelper(0x15b, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CRealAudio::GetConsoleEvents()
{
	BOOL result;
	InvokeHelper(0x15c, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CRealAudio::SetConsoleEvents(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

CString CRealAudio::GetDRMInfo(LPCTSTR pVal)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x15e, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		pVal);
	return result;
}

void CRealAudio::SetShowVideo(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

void CRealAudio::AddLicense(LPCTSTR pVal)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x160, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pVal);
}

void CRealAudio::SetVideoOverlay(BOOL bVal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x161, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bVal);
}

void CRealAudio::EnsureTranscryptionLicense(LPCTSTR pVal)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x162, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pVal);
}
