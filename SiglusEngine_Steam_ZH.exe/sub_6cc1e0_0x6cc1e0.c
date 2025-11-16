// 函数: sub_6cc1e0
// 地址: 0x6cc1e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_48
int32_t eax = sub_6cbcf0(&var_48, arg4)

if (eax == 0)
    void var_24
    eax = sub_6cbac0(&var_24, &var_48)
    
    if (eax == 0)
        int32_t eax_1 = sub_6cc020(eax, &var_24, arg4, 5)
        int32_t eax_2 = neg.d(eax_1)
        eax = sbb.d(eax_2, eax_2, eax_1 != 0) + 1

if (eax == 0)
    return sub_6cc0f0(&var_48, arg2, arg3, arg4, &var_48, arg5)

if (eax != 1)
    *(arg2 + 0x4a) |= 0x8000
    sub_6d42e0(arg3, "internal error checking chromaticities")
    noreturn

*(arg2 + 0x4a) |= 0x8000

if ((*(arg3 + 0x78) & 0x100000) == 0)
    if ((*(arg3 + 0x74) & 0x8000) != 0 && *(arg3 + 0x11c) != 0)
        sub_6d47a0(arg3, "invalid chromaticities")
        noreturn
    
    sub_6d42e0(arg3, "invalid chromaticities")
    noreturn

if ((*(arg3 + 0x74) & 0x8000) != 0 && *(arg3 + 0x11c) != 0)
    sub_6d47e0(arg3, "invalid chromaticities")
    return 0

sub_6d4470(arg3, "invalid chromaticities")
return 0
