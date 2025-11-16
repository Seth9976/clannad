// 函数: sub_6c2920
// 地址: 0x6c2920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_4c = arg5
HMONITOR hMonitor = MonitorFromPoint(arg4, MONITOR_DEFAULTTONEAREST)

if (hMonitor != 0)
    int128_t lpmi
    __builtin_memset(&lpmi, 0, 0x14)
    lpmi.d = 0x28
    int64_t var_10_1 = 0
    
    if (GetMonitorInfoW(hMonitor, &lpmi) != 0)
        int32_t var_3c = lpmi:8.d
        int32_t var_38 = lpmi:0xc.d
        int32_t var_20
        int32_t var_34 = var_20
        int32_t eax_6
        eax_6.b = 1
        *arg3 = lpmi:4.d.o
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_6

*arg3 = 0
*(arg3 + 4) = 0
*(arg3 + 8) = GetSystemMetrics(SM_CXFULLSCREEN)
*(arg3 + 0xc) = GetSystemMetrics(SM_CYFULLSCREEN)
int32_t eax_8
eax_8.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_8
