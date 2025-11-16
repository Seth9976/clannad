// 函数: sub_4d1a95
// 地址: 0x4d1a95
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t edi
int32_t var_18 = edi
var_c = nullptr
var_8 = nullptr

if (arg5 != 0)
    *arg5 = 0

int32_t eax = *(arg2 + 4)
int32_t* eax_1

if (arg1[0x22] == eax)
    eax_1 = *(arg2 + 0xc)
    bool cond:1_1 = eax_1 u< arg1[0xb]
    var_c = nullptr
    var_8 = eax_1
    
    if (not(cond:1_1))
        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x1199, "maximum temp register index exceeded")
        return 0x88760b59
    
    int32_t ecx_1 = arg1[0x14]
    
    if (ecx_1 != 0 && eax_1 u>= ecx_1)
        eax_1 -= ecx_1
        var_8 = eax_1
        var_c = 3
else if (arg1[0x23] == eax)
    eax_1 = *(arg2 + 0xc)
    var_c = 3
    var_8 = eax_1
    
    if (eax_1 u>= 1)
        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x119c, "maximum address register index exceeded")
        return 0x88760b59
else if (arg1[0x21] != eax)
    if (arg1[0x24] != eax)
        sub_4a4100(arg1, nullptr, 0, "internal error: unexpected output register type")
        return 0x80004005
    
    eax_1 = *(arg2 + 0xc)
    bool cond:3_1 = eax_1 u< arg1[0xd]
    var_c = 0x13
    var_8 = eax_1
    
    if (not(cond:3_1))
        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11c5, "maximum predicate register index exceeded")
        return 0x88760b59
else
    if ((*(*arg1 + 0x84))(arg2, &var_8, &var_c, arg5) s< 0)
        return 0x80004005
    
    eax_1 = var_8

if (arg3 != 0)
    int32_t* edx_1 = var_c
    *arg3 = ((edx_1 | 0xfffffff8) << 0x14 | (edx_1 & 0x18)) << 8 | (eax_1 & 0x7ff)

int32_t result = (*(*arg1 + 0x7c))(arg2, arg4)

if (result s< 0)
    return result

return 0
