// 函数: sub_4aa460
// 地址: 0x4aa460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1

if (arg3 != 0xb)
    if (arg3 != 0 && arg3 != 5 && arg3 != 6)
        *arg2 = data_7030bc
        int32_t eax_3 = data_7030c0
        *arg4 = eax_3
        return eax_3
    
    int32_t eax_5
    int32_t edx
    edx:eax_5 = sx.q(data_7030bc)
    *arg2 = (eax_5 - edx) s>> 1
    int32_t eax_9
    int32_t edx_1
    edx_1:eax_9 = sx.q(data_7030c0)
    eax_1 = (eax_9 - edx_1) s>> 1
    *arg4 = eax_1
else
    int32_t ecx = data_70305c
    int32_t eax = data_7030ac
    
    if (ecx s>= eax)
        if (ecx s> data_7030b4)
            ecx = data_7030b4
        
        data_70305c = ecx
    else
        data_70305c = eax
    
    int32_t ecx_1 = data_703060
    eax_1 = data_7030b0
    
    if (ecx_1 s< eax_1)
        data_703060 = eax_1
        return eax_1
    
    eax_1 = data_7030b8
    
    if (ecx_1 s> eax_1)
        data_703060 = eax_1

return eax_1
