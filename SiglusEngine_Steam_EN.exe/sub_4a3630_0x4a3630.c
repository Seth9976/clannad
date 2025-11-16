// 函数: sub_4a3630
// 地址: 0x4a3630
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_49e5a0(0x976380, data_63e16c)

if (result == 0)
    int32_t edx = data_63e16c
    data_715e98 = result
    data_1af1714 = result
    data_187c51f = result.b
    data_1af1710 = result
    data_187c51e = result.b
    data_187c51d = result.b
    sub_49e720(result, edx, 0x976380, 0x64)
    data_1393190 = 0
    bool cond:0_1 = data_1af1768 == 0
    data_1af0f3c = 0xffffffff
    data_1370100 = 0xffffffff
    data_703660 = 0xffffffff
    data_1af17ac = 0
    data_13701d8 = 0
    data_137010c = 1
    data_703670 = 0
    data_1372c14 = 1
    data_1af178c = 0
    data_1af1784 = 0
    
    if (not(cond:0_1))
        data_1af177c = 1
        data_1af1768 = 0
    
    result = sub_48d140()
    
    if (data_71929c == 0x11)
        data_1af1788 = 1
else if (arg1 != 0)
    if (data_1b1bcd8 != 0)
        if (data_13702a2 != 0)
        label_4a3750:
            data_715e98 = 1
        
        int32_t edx_1 = data_63e16c
        data_1af1714 = 0
        data_187c51f = 0
        data_1af1710 = 0
        data_187c51e = 0
        data_187c51d = 0
        sub_49e720(result, edx_1, 0x976380, 0x64)
        data_1393190 = 0
        bool cond:1_1 = data_1af1768 == 0
        data_1af0f3c = 0xffffffff
        data_1370100 = 0xffffffff
        data_703660 = 0xffffffff
        data_1af17ac = 0
        data_13701d8 = 0
        data_137010c = 1
        data_703670 = 0
        data_1372c14 = 1
        data_1af178c = 0
        data_1af1784 = 0
        
        if (not(cond:1_1))
            data_1af177c = 1
            data_1af1768 = 0
        
        sub_48d140()
        result = data_1af1788
        
        if (data_71929c == 0x11)
            result = 1
        
        bool cond:3_1 = data_1370842 == 0
        data_1af1788 = result
        
        if (not(cond:3_1))
            data_1af4e78 = data_131d2cc
            result = data_1320e58
            data_1af1790 = 1
            data_1af4e74 = result
    else if (data_13702a2 != 0)
        goto label_4a3750

return result
