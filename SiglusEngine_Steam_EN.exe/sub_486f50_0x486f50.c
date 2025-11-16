// 函数: sub_486f50
// 地址: 0x486f50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1b8a64c
int32_t ecx = data_1b8a648
int32_t edx = ecx + eax

if (data_1b8a6d4 == 0)
    edx = data_131310c

int32_t edx_1 = edx - eax
uint32_t result

if (edx_1 u>= ecx)
label_486f99:
    void* eax_9 = data_1b8a644
    
    if (eax_9 s>= 0)
        int32_t ecx_1 = data_1b8a628
        int32_t edx_5 = data_1b8a624
        int32_t eax_8 = data_1b8a62c - edx_5
        sub_4128b0(eax_8, 0, nullptr, eax_8, data_1b8a630 - ecx_1, eax_9, edx_5, ecx_1, 
            data_1b8a640, 0xffffffff, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff)
        eax_9 = data_1b8a644
    
    sub_411350(eax_9)
    
    if (data_1af1768 != 0)
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    data_1af1788 = result
else
    int32_t eax_2 = ecx * edx_1
    int32_t edx_2 = 0
    
    if (ecx s< 0)
        result = neg.d(divu.dp.d(edx_2:(neg.d(eax_2)), ecx))
        
        if (result s< ecx || result == ecx)
            goto label_486f99
    else
        result = divu.dp.d(edx_2:eax_2, ecx)
        
        if (result s> ecx || result == ecx)
            goto label_486f99

return result
