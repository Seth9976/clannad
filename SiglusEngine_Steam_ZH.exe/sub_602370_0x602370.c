// 函数: sub_602370
// 地址: 0x602370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
sub_6de670(arg1 + 0xf4, 1)
sub_676f90(0)
int32_t result = sub_605110(arg1 + 0xf4, arg2, arg11)

if (result.b != 0)
    bool cond:0_1 = *(arg1 + 0xb4) u< 8
    void* eax = arg1 + 0xa0
    *(eax + 0x10) = 0
    
    if (not(cond:0_1))
        eax = *eax
    
    *eax = 0
    void* eax_1 = arg1 + 0xb8
    bool cond:1_1 = *(eax_1 + 0x14) u< 8
    *(eax_1 + 0x10) = 0
    
    if (not(cond:1_1))
        eax_1 = *eax_1
    
    *eax_1 = 0
    *(arg1 + 0xd4) = arg2
    *(arg1 + 0xd8) = arg6
    *(arg1 + 0xdc) = arg7
    *(arg1 + 0xe8) = arg5
    result.b = arg3
    *(arg1 + 0xec) = result.b
    result.b = arg8
    *(arg1 + 0xed) = result.b
    result.b = arg9
    *(arg1 + 0xee) = result.b
    result.b = arg10
    *(arg1 + 0xd0) = 0xffffffff
    *(arg1 + 0xe4) = 0
    *(arg1 + 0xef) = result.b
    *(arg1 + 0xf0) = arg11.b
    
    if (arg4 != 0)
        return sub_602510(arg1, 0, 0)

return result
