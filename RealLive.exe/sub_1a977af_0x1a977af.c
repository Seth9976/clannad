// 函数: sub_1a977af
// 地址: 0x1a977af
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

sub_1a97647()
uint32_t eax = TlsAlloc()
data_1bfc198 = eax

if (eax != 0xffffffff)
    void* lpTlsValue = sub_1a9a2c7(1, 0x74)
    
    if (lpTlsValue != 0 && TlsSetValue(data_1bfc198, lpTlsValue) != 0)
        sub_1a97821(lpTlsValue)
        uint32_t eax_2 = GetCurrentThreadId()
        *(lpTlsValue + 4) = 0xffffffff
        *lpTlsValue = eax_2
        return 1

return 0
