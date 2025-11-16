// 函数: sub_484ec0
// 地址: 0x484ec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (arg1 == 0 || data_1b8a6e8 == 0)
    int32_t ecx = data_1392710
    int32_t edx_2 = data_107f0fc + ecx - data_107f0f4
    data_107f0f4 = ecx
    result = data_107f0f8
    data_107f0fc = edx_2
    
    if (result != 0 && edx_2 u>= result)
        bool cond:1_1 = data_1af1768 == 0
        data_715e98 = 0
        data_13701d8 = 0
        data_137010c = 1
        data_703670 = 0
        data_1372c14 = 1
        data_1af178c = 0
        data_1af1784 = 0
        
        if (not(cond:1_1))
            data_1af177c = 1
            data_1af1768 = 0
        
        result = sub_48d140()
        
        if (data_71929c == 0x11)
            data_1af1788 = 1
    else if (data_13702a9 != 0)
        data_715e98 = 1
    label_485038:
        bool cond:4_1 = data_1af1768 == 0
        data_13701d8 = 0
        data_137010c = 1
        data_703670 = 0
        data_1372c14 = 1
        data_1af178c = 0
        data_1af1784 = 0
        
        if (not(cond:4_1))
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
    else if (data_1370285 != 0)
        data_715e98 = 0xffffffff
        goto label_485038
else
    bool cond:0_1 = data_1af1768 == 0
    data_715e98 = 0
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

return result
