// 函数: sub_43486b
// 地址: 0x43486b
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
void* eax
int80_t* entry_ebx

if (arg1 s< 0xffffffff)
    eax.b = __in_al_dx(arg2.w, eflags)
    int80_t* var_4 = entry_ebx
    
    if (arg4 != 1)
        undefined
    
    *(arg4 - 1 + arg3 - 0x7c) = arg2
    int32_t eax_1
    eax_1.b = __in_al_dx(arg2.w, eflags)
    int80_t* var_8 = entry_ebx
    trap(0xd)

int32_t eflags_1
char temp0
char temp1
temp0, temp1, eflags_1 = __aas((arg1 + 1).b, (arg1 + 1):1.b, eflags)
eax.b = temp0
eax:1.b = temp1
eax.b = __in_al_dx(arg2.w, eflags_1)
eax.b ^= 0x89
*(arg4 + (entry_ebx << 2) - 0x72393da7)
*entry_ebx = arg7
*0xb2dae4a4 = eax
*(arg5 - 0x77) <<= arg3.b
*entry_ebx = *entry_ebx
eax.b = *0x3a5c27eb
__pmaxsw_mmxq_memq(arg6, *(eax + 0x17))
undefined
