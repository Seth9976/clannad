// 函数: sub_4854b0
// 地址: 0x4854b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_1392710
int32_t result = edx - data_107f118
int32_t ecx_1 = data_107f120 + result
data_107f118 = edx
data_107f120 = ecx_1

if (ecx_1 u>= data_107f11c)
    sub_4e8000(sub_4e8000(result, data_7192a4, data_7192a0, data_131d2cc, &data_704898), 
        data_7192ac, data_7192a8, data_1320e58, &data_704898)
    data_715e98 = 0
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
    
    result = sub_48d140()
    
    if (data_71929c == 0x11)
        data_1af1788 = 1
else if (data_13702a2 != 0 || data_137027e != 0)
    sub_4e8000(sub_4e8000(result, data_7192a4, data_7192a0, data_131d2cc, &data_704898), 
        data_7192ac, data_7192a8, data_1320e58, &data_704898)
    data_13701d8 = 0
    data_137010c = 1
    bool cond:1_1 = data_13702a2 != 0
    data_703670 = 0
    int32_t eax_3
    eax_3.b = cond:1_1
    data_1372c14 = 1
    bool cond:2_1 = data_1af1768 == 0
    data_1af178c = 0
    data_1af1784 = 0
    data_715e98 = (eax_3 << 1) + 0xffffffff
    
    if (not(cond:2_1))
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    bool cond:4_1 = data_1370842 == 0
    data_1af1788 = result
    
    if (not(cond:4_1))
        data_1af4e78 = data_131d2cc
        result = data_1320e58
        data_1af1790 = 1
        data_1af4e74 = result

return result
