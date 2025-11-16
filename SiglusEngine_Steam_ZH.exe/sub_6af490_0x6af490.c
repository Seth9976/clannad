// 函数: sub_6af490
// 地址: 0x6af490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0
int16_t* eax_1 = *arg3
int32_t edi = 1
int16_t* var_8 = eax_1

if (eax_1 != arg4)
    uint32_t ecx = zx.d(*eax_1)
    
    if (ecx == 0x2b)
        eax_1 = &eax_1[1]
        var_8 = eax_1
    else if (ecx == 0x2d)
        eax_1 = &eax_1[1]
        edi = 0xffffffff
        var_8 = eax_1

char eax_2 = sub_6af380(eax_1, &var_c, &var_8, arg4)

if (eax_2 == 0)
    return eax_2

if (arg2 != 0)
    *arg2 = var_c * edi

*arg3 = var_8
int16_t* eax_5
eax_5.b = 1
return eax_5
