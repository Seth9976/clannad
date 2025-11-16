// 函数: sub_58a090
// 地址: 0x58a090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax

if (arg2 == GetWindowLongW(*(arg1 + 0xe4), 0xfffffff4).w)
    eax = *(arg3 + 8)
    
    if (eax == 0xfffffffd)
        sub_58a530(arg1)
        LRESULT eax_1
        eax_1.b = 1
        return eax_1
    
    if (eax == 0xffffff41)
        sub_58a6b0(*(arg3 + 0xc), *(arg3 + 0x10), arg3 + 0x2c)

eax.b = 1
return eax
