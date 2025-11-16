// 函数: sub_6c29e0
// 地址: 0x6c29e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_4c = arg5
HMONITOR hMonitor = MonitorFromPoint(arg4, MONITOR_DEFAULTTONEAREST)

if (hMonitor != 0)
    int128_t lpmi
    __builtin_memset(&lpmi, 0, 0x20)
    lpmi.d = 0x28
    int32_t var_10_1 = 0
    
    if (GetMonitorInfoW(hMonitor, &lpmi) != 0)
        int128_t var_20
        int32_t var_3c = var_20:8.d
        int32_t var_38 = var_20:0xc.d
        int32_t var_34 = var_10_1
        int32_t eax_6
        eax_6.b = 1
        *arg3 = var_20:4.d.o
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_6

SystemParametersInfoW(SPI_GETWORKAREA, 0, arg3, 0)
BOOL eax_7
eax_7.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_7
