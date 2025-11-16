// 函数: sub_57af60
// 地址: 0x57af60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_13130c0.d == 0)
    return 

int32_t* eax = data_71929c

if (eax != 0x13 && eax != 0x14)
    return 

eax = data_13130dc

if (eax == 0xffffffff)
    return 

eax = eax * 0x2c + data_13130c0:4

if (eax[5] != 0)
    return 

if (data_13130d8 == 0)
    int32_t var_8_1
    
    if (data_131d2c8 == 2)
        var_8_1 = 1
    
    if (data_131d2c8 != 2 || data_131923c != 0)
        var_8_1 = 0
    
    int32_t var_18 = 0
    int32_t var_1c = 0xff
    int32_t var_20 = 0
    int32_t var_24 = 0
    int32_t var_28 = 0
    int32_t ecx = *(arg1 + 0x1c)
    int32_t edx = *(arg1 + 0x2c5c)
    int32_t edi = *(arg1 + 0x2c58)
    int32_t esi_1 = *(arg1 + 0x18)
    int32_t eax_18 = *eax + esi_1 + edi
    sub_58bcc0(eax_18, data_702fec, data_702fe8, data_702ff0, eax_18, eax[1] + ecx + edx + var_8_1, 
        eax[2] + esi_1 + edi, eax[3] + ecx + edx + var_8_1, data_702ff4, (data_702ff8).b, 
        data_702ffc, data_703000, ecx, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff, 0, 0, 0, 0, 0)
    return 

eax = data_107efa0

if (eax u<= 0x1f)
    void* eax_20 = eax * 5
    sub_424660(eax_20, &data_107efa8, (eax_20 << 3) + &data_1319240, 1, 0xffffffff, 0, 0)
