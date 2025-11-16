// 函数: sub_4c5e96
// 地址: 0x4c5e96
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg6 + 0xbf9555)
*(arg1 - 0x7e6c7d41) += (arg1 - 0x7e6c7d54):1.b
int32_t* entry_ebx
bool o = add_overflow(arg5, *entry_ebx)

if (o)
    if (not(o))
        jump(sub_4c5eac+4)
    
    return sub_4c5eac(arg1 - 0x7e6c7d54, arg2, arg5 + *entry_ebx) __tailcall

if (add_overflow(arg6, neg.d(entry_ebx)))
    undefined

*arg2
void* eax
eax.b = *0x83be95c8
int16_t x87control
int16_t x87status
x87control, x87status = __fldcw_memmem16(arg2[-0x11].w)
int32_t eflags
int16_t* edi
int16_t temp0
temp0, edi = __insd(arg6, arg2.w, eflags)
*edi = temp0

if (arg3 != 1 && arg3 != 2)
    jump(0x4c5f2e)

jump(0x4c5f1f)
