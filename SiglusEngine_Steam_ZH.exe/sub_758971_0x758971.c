// 函数: sub_758971
// 地址: 0x758971
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

enum WIN32_ERROR esi_2

if (sub_75ea0d(arg1) == 0xffffffff)
    esi_2 = NO_ERROR
else
    void* eax_1 = data_b95720
    
    if ((arg1 != 1 || (*(eax_1 + 0x84) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x44) & 1) == 0))
    label_7589c1:
        
        if (CloseHandle(sub_75ea0d(arg1)) != 0)
            esi_2 = NO_ERROR
        else
            esi_2 = GetLastError()
    else
        int32_t eax_2 = sub_75ea0d(2)
        
        if (sub_75ea0d(1) != eax_2)
            goto label_7589c1
        
        esi_2 = NO_ERROR

sub_75e987(arg1)
*((&data_b95720)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4) = 0

if (esi_2 == NO_ERROR)
    return 0

__dosmaperr(esi_2)
return 0xffffffff
