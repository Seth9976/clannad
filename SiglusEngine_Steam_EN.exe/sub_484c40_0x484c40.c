// 函数: sub_484c40
// 地址: 0x484c40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (arg1 == 0 || data_1b8a6e8 == 0)
    int32_t edx_1 = data_1392710
    result = edx_1 - data_107f0f4
    int32_t ecx_1 = data_107f0fc + result
    data_107f0f4 = edx_1
    data_107f0fc = ecx_1
    
    if (ecx_1 u>= data_107f0f8)
        bool cond:0_1 = data_1af1768 == 0
        data_13701d8 = 0
        data_137010c = 1
        data_703670 = 0
        data_1372c14 = 1
        data_1af178c = 0
        data_1af1784 = 0
        
        if (not(cond:0_1))
            data_1af177c = 1
            data_1af1768 = 0
        
        sub_48d140()
        result = data_1af1788
        
        if (data_71929c == 0x11)
            result = 1
        
        data_1af1788 = result
else
    bool cond:1_1 = data_1af1768 == 0
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

return result
