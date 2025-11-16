// 函数: sub_1000e6af
// 地址: 0x1000e6af
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

enum WIN32_ERROR esi_2

if (sub_1000ae87(arg1) == 0xffffffff)
    esi_2 = NO_ERROR
else
    void* eax_1 = data_1001b0a0
    
    if ((arg1 != 1 || (*(eax_1 + 0x84) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x44) & 1) == 0))
    label_1000e6ff:
        
        if (CloseHandle(sub_1000ae87(arg1)) != 0)
            esi_2 = NO_ERROR
        else
            esi_2 = GetLastError()
    else
        int32_t eax_2 = sub_1000ae87(2)
        
        if (sub_1000ae87(1) != eax_2)
            goto label_1000e6ff
        
        esi_2 = NO_ERROR

sub_1000ae01(arg1)
*((&data_1001b0a0)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4) = 0

if (esi_2 == NO_ERROR)
    return 0

__dosmaperr(esi_2)
return 0xffffffff
