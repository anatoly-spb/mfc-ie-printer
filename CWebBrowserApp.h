// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Windows\\SysWOW64\\ieframe.dll" no_namespace
// CWebBrowserApp wrapper class

class CWebBrowserApp : public COleDispatchDriver
{
public:
  CWebBrowserApp() {} // Calls COleDispatchDriver default constructor
  CWebBrowserApp(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
  CWebBrowserApp(const CWebBrowserApp& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

  // Attributes
public:

  // Operations
public:


  // IWebBrowserApp methods
public:
  void GoBack()
  {
    InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
  }
  void GoForward()
  {
    InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
  }
  void GoHome()
  {
    InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
  }
  void GoSearch()
  {
    InvokeHelper(0x67, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
  }
  void Navigate(LPCTSTR URL, VARIANT * Flags, VARIANT * TargetFrameName, VARIANT * PostData, VARIANT * Headers)
  {
    static BYTE parms[] = VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
    InvokeHelper(0x68, DISPATCH_METHOD, VT_EMPTY, NULL, parms, URL, Flags, TargetFrameName, PostData, Headers);
  }
  void Refresh()
  {
    InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
  }
  void Refresh2(VARIANT * Level)
  {
    static BYTE parms[] = VTS_PVARIANT;
    InvokeHelper(0x69, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Level);
  }
  void Stop()
  {
    InvokeHelper(0x6a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
  }
  LPDISPATCH get_Application()
  {
    LPDISPATCH result;
    InvokeHelper(0xc8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
    return result;
  }
  LPDISPATCH get_Parent()
  {
    LPDISPATCH result;
    InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
    return result;
  }
  LPDISPATCH get_Container()
  {
    LPDISPATCH result;
    InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
    return result;
  }
  LPDISPATCH get_Document()
  {
    LPDISPATCH result;
    InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
    return result;
  }
  BOOL get_TopLevelContainer()
  {
    BOOL result;
    InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
    return result;
  }
  CString get_Type()
  {
    CString result;
    InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
  }
  long get_Left()
  {
    long result;
    InvokeHelper(0xce, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
    return result;
  }
  void put_Left(long newValue)
  {
    static BYTE parms[] = VTS_I4;
    InvokeHelper(0xce, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }
  long get_Top()
  {
    long result;
    InvokeHelper(0xcf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
    return result;
  }
  void put_Top(long newValue)
  {
    static BYTE parms[] = VTS_I4;
    InvokeHelper(0xcf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }
  long get_Width()
  {
    long result;
    InvokeHelper(0xd0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
    return result;
  }
  void put_Width(long newValue)
  {
    static BYTE parms[] = VTS_I4;
    InvokeHelper(0xd0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }
  long get_Height()
  {
    long result;
    InvokeHelper(0xd1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
    return result;
  }
  void put_Height(long newValue)
  {
    static BYTE parms[] = VTS_I4;
    InvokeHelper(0xd1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }
  CString get_LocationName()
  {
    CString result;
    InvokeHelper(0xd2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
  }
  CString get_LocationURL()
  {
    CString result;
    InvokeHelper(0xd3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
  }
  BOOL get_Busy()
  {
    BOOL result;
    InvokeHelper(0xd4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
    return result;
  }
  void Quit()
  {
    InvokeHelper(0x12c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
  }
  void ClientToWindow(long * pcx, long * pcy)
  {
    static BYTE parms[] = VTS_PI4 VTS_PI4;
    InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pcx, pcy);
  }
  void PutProperty(LPCTSTR Property, VARIANT& vtValue)
  {
    static BYTE parms[] = VTS_BSTR VTS_VARIANT;
    InvokeHelper(0x12e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Property, &vtValue);
  }
  VARIANT GetProperty(LPCTSTR Property)
  {
    VARIANT result;
    static BYTE parms[] = VTS_BSTR;
    InvokeHelper(0x12f, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Property);
    return result;
  }
  CString get_Name()
  {
    CString result;
    InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
  }
  long get_HWND()
  {
    long result;
    InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
    return result;
  }
  CString get_FullName()
  {
    CString result;
    InvokeHelper(0x190, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
  }
  CString get_Path()
  {
    CString result;
    InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
  }
  BOOL get_Visible()
  {
    BOOL result;
    InvokeHelper(0x192, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
    return result;
  }
  void put_Visible(BOOL newValue)
  {
    static BYTE parms[] = VTS_BOOL;
    InvokeHelper(0x192, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }
  BOOL get_StatusBar()
  {
    BOOL result;
    InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
    return result;
  }
  void put_StatusBar(BOOL newValue)
  {
    static BYTE parms[] = VTS_BOOL;
    InvokeHelper(0x193, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }
  CString get_StatusText()
  {
    CString result;
    InvokeHelper(0x194, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
  }
  void put_StatusText(LPCTSTR newValue)
  {
    static BYTE parms[] = VTS_BSTR;
    InvokeHelper(0x194, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }
  long get_ToolBar()
  {
    long result;
    InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
    return result;
  }
  void put_ToolBar(long newValue)
  {
    static BYTE parms[] = VTS_I4;
    InvokeHelper(0x195, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }
  BOOL get_MenuBar()
  {
    BOOL result;
    InvokeHelper(0x196, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
    return result;
  }
  void put_MenuBar(BOOL newValue)
  {
    static BYTE parms[] = VTS_BOOL;
    InvokeHelper(0x196, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }
  BOOL get_FullScreen()
  {
    BOOL result;
    InvokeHelper(0x197, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
    return result;
  }
  void put_FullScreen(BOOL newValue)
  {
    static BYTE parms[] = VTS_BOOL;
    InvokeHelper(0x197, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
  }

  // IWebBrowserApp properties
public:

};