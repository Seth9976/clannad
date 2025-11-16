// 函数: sub_602280
// 地址: 0x602280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
sub_6de670(arg1 + 0xf4, 1)
sub_676f90(0)
char result = sub_6040f0(arg1 + 0xf4, arg2, arg3, 0x64, nullptr, arg11, 0)

if (result != 0)
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
    *(arg1 + 0xd0) = arg2
    *(arg1 + 0xd8) = arg6
    *(arg1 + 0xdc) = arg7
    *(arg1 + 0xe8) = arg5
    *(arg1 + 0xec) = arg3.b
    *(arg1 + 0xed) = arg8
    *(arg1 + 0xee) = arg9
    result = arg10
    *(arg1 + 0xd4) = 0xffffffff
    *(arg1 + 0xe4) = 0
    *(arg1 + 0xef) = result
    *(arg1 + 0xf0) = arg11
    
    if (arg4 != 0)
        return sub_602510(arg1, 0, 0)

return result
