// 函数: sub_5f509c
// 地址: 0x5f509c
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

enum WIN32_ERROR esi_2

if (sub_5f9880(arg1) == 0xffffffff)
    esi_2 = NO_ERROR
else
    void* eax_1 = data_640ff8
    
    if ((arg1 != 1 || (*(eax_1 + 0x84) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x44) & 1) == 0))
    label_5f50ec:
        
        if (CloseHandle(sub_5f9880(arg1)) != 0)
            esi_2 = NO_ERROR
        else
            esi_2 = GetLastError()
    else
        int32_t eax_2 = sub_5f9880(2)
        
        if (sub_5f9880(1) != eax_2)
            goto label_5f50ec
        
        esi_2 = NO_ERROR

sub_5f97fa(arg1)
*((&data_640ff8)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4) = 0

if (esi_2 == NO_ERROR)
    return 0

__dosmaperr(esi_2)
return 0xffffffff
