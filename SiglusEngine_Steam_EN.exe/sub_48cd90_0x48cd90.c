// 函数: sub_48cd90
// 地址: 0x48cd90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (data_131d2d0 != 0xffffffff && data_131d2f4 != 0xffffffff)
    int32_t ecx_1
    ecx_1.b = data_1b8a6d0 != 0
    result = sub_417440(ecx_1)

if (data_131d2d0 == 0xffffffff || data_131d2f4 == 0xffffffff || result == 0)
    sub_48b7f0()
    sub_4d1c30(sub_499600(&data_1b8ad80), &data_13130c0, &data_1b8ad80, 0x4c)
    bool cond:0_1 = data_1af1768 == 0
    data_13130c0 = data_624a40
    data_13130d4 = 0
    data_13130dc = 0xffffffff
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

return result
