// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Windows\\SysWOW64\\ieframe.dll" no_namespace
// CWebBrowser wrapper class

class CWebBrowser : public COleDispatchDriver
{
public:
  CWebBrowser() {} // Calls COleDispatchDriver default constructor
  CWebBrowser(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
  CWebBrowser(const CWebBrowser& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

  // Attributes
public:

  // Operations
public:


  // IWebBrowser methods
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

  // IWebBrowser properties
public:

};
