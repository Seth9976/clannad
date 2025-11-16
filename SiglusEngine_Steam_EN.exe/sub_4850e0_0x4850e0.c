// 函数: sub_4850e0
// 地址: 0x4850e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = (&data_91f104)[data_107f954]

if (result u>= data_107f95c)
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
else if (data_13702a9 != 0)
    data_715e98 = 1
label_4851a4:
    bool cond:3_1 = data_1af1768 == 0
    data_13701d8 = 0
    data_137010c = 1
    data_703670 = 0
    data_1372c14 = 1
    data_1af178c = 0
    data_1af1784 = 0
    
    if (not(cond:3_1))
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    bool cond:2_1 = data_1370842 == 0
    data_1af1788 = result
    
    if (not(cond:2_1))
        data_1af4e78 = data_131d2cc
        result = data_1320e58
        data_1af1790 = 1
        data_1af4e74 = result
else if (data_1370285 != 0)
    data_715e98 = 0xffffffff
    goto label_4851a4

return result
