// 函数: sub_406b29
// 地址: 0x406b29
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg4 + 0x78)
int32_t eflags
char temp0
char temp1
temp0, temp1, eflags = __aam_immb(0x16, arg1.b)
arg1.b = temp0
arg1:1.b = temp1

while (true)
    bool s
    bool o
    
    if (s != o)
        arg5 = __andps_xmmxud_memxud(arg5, *(arg3 + 0xc))
        arg3 -= 1
    else
        void* entry_ebx
        *(entry_ebx + 0x59540f53) = ror.d(*(entry_ebx + 0x59540f53), arg3.b)
        arg1.b |= 0x49
    
    arg1.b = *arg4
    arg4 += 1
    char temp0_2 = arg1
    s = sbb.d(temp0_2, 0x959d2974, false) s< 0
    o = unimplemented  {sbb eax, 0x959d2974}
    int32_t eflags_1
    char temp0_1
    char temp1_1
    temp0_1, temp1_1, eflags_1 = __aam_immb(0x16, sbb.d(temp0_2, 0x959d2974, false).b)
    arg1.b = temp0_1
    arg1:1.b = temp1_1
