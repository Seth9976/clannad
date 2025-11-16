// 函数: sub_1a97834
// 地址: 0x1a97834
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

enum WIN32_ERROR dwErrCode = GetLastError()
void* lpTlsValue = TlsGetValue(data_1bfc198)

if (lpTlsValue == 0)
    lpTlsValue = sub_1a9a2c7(1, 0x74)
    BOOL eax_2
    
    if (lpTlsValue != 0)
        eax_2 = TlsSetValue(data_1bfc198, lpTlsValue)
    
    if (lpTlsValue == 0 || eax_2 == 0)
        sub_1a931cd(0x10)
    else
        sub_1a97821(lpTlsValue)
        uint32_t eax_3 = GetCurrentThreadId()
        *(lpTlsValue + 4) = 0xffffffff
        *lpTlsValue = eax_3

SetLastError(dwErrCode)
return lpTlsValue
