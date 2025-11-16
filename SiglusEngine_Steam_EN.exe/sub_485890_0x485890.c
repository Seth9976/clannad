// 函数: sub_485890
// 地址: 0x485890
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1

if (data_139270c == 0xffffffff || data_1392708 == 0)
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
    
    if (data_71929c == 0x11)
        data_1af1788 = 1
    
    return 

if (data_1bfe240 == 1)
    data_1bfe240 = 0
    data_976b2c = 0

if (arg1 == 0)
    return 

if (data_13702a2 != 0)
    data_715e98 = 1
label_4858fc:
    sub_4a3f10()
    WaitForSingleObject(data_641b28, 0xffffffff)
    sub_4be310()
    sub_4d1ba0(ReleaseSemaphore(data_641b28, 1, nullptr), 0x24, &data_976b08, 0)
    data_976b2c = 0
    bool cond:1 = data_1af1768 == 0
    data_13701d8 = 0
    data_137010c = 1
    data_703670 = 0
    data_1372c14 = 1
    data_1af178c = 0
    data_1af1784 = 0
    
    if (not(cond:1))
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    int32_t eax_2 = data_1af1788
    
    if (data_71929c == 0x11)
        eax_2 = 1
    
    data_1af1788 = eax_2
    return 

if (data_137027e != 0)
    data_715e98 = 0xffffffff
    goto label_4858fc
