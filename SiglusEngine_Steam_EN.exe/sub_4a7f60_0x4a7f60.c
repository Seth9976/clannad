// 函数: sub_4a7f60
// 地址: 0x4a7f60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg2 = 0

if (arg1 == 0xffffffff)
    return sub_4cfd70(arg2, "TC:Err")

char ecx = (arg1 s>> 0x10).b
uint32_t ebx = zx.d(arg1.w)
int32_t eax
eax.b = ecx
eax.b &= 1
int32_t esi = sx.d(eax.b)
int32_t esi_1 = neg.d(esi)
int32_t eax_1 = sx.d(ecx & 2)
int32_t eax_2 = neg.d(eax_1)
uint32_t eax_4 = zx.d((sbb.d(eax_2, eax_2, eax_1 != 0)).b)
void var_18
void var_14
void var_10
int32_t var_8
sub_4a7dc0(&var_18, &var_8, ebx, &var_18, &var_14, &var_10)

if (zx.d((sbb.d(esi_1, esi_1, esi != 0)).b) == 0)
    if (eax_4 == 0)
        if (var_8 == 0)
            return sub_4cfd70(arg2, "TC:Err")
        
        uint32_t var_28_4 = ebx
        return sub_4c84d0(arg2, "TC:%03d")
    
    if (var_8 == 0)
        return sub_4cfd70(arg2, "TC:R")
    
    uint32_t var_28_3 = ebx
    return sub_4c84d0(arg2, "TC:R%03d")

if (eax_4 == 0)
    if (var_8 == 0)
        return sub_4cfd70(arg2, "TC:M")
    
    uint32_t var_28_2 = ebx
    return sub_4c84d0(arg2, "TC:M%03d")

if (var_8 == 0)
    return sub_4cfd70(arg2, "TC:MR")

uint32_t var_28_1 = ebx
return sub_4c84d0(arg2, "TC:MR%03d")
