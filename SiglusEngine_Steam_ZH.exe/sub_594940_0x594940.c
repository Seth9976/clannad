// 函数: sub_594940
// 地址: 0x594940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = GetWindowLongW(*(arg1 + 0xe4), 0xfffffff4)
int16_t arg_4

if (arg_4 == eax.w)
    eax = *(arg2 + 8)
    
    if (eax == 0xfffffffd)
        sub_594a10(arg1)
        LRESULT eax_1
        eax_1.b = 1
        return eax_1
    
    if (eax == 0xffffff41)
        arg_4.d = 0
        sub_594ae0(arg1, &arg_4)
        eax = arg_4.d
        
        if (eax != 0)
            int32_t var_10_2 = eax
            sub_587df0(arg2 + 0x2c, *(arg2 + 0xc), arg1 + 0xe0, *(arg2 + 0x10), arg2 + 0x2c)

eax.b = 1
return eax
