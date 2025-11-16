// 函数: sub_485d20
// 地址: 0x485d20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
var_8:3.b = arg1.b

if (data_131256c != 0 || data_13125b4 != 0 || data_1311174 != 0)
label_485d60:
    
    if (data_131d2d0 == 0xffffffff && data_1372da4 == 0 && sub_4752a0() == 0)
        return 0
else
    int32_t ecx = 0
    void* eax_1 = &data_f89ba4
    
    while (*eax_1 == 0)
        ecx += 1
        eax_1 += 0x3920
        
        if (ecx s>= 0x40)
            goto label_485d60

if (var_8:3.b != 0)
    int32_t eax_3 = data_71929c
    
    if (eax_3 != 0x11 && eax_3 != 0x13 && eax_3 != 0x15)
        return 0

return 1
