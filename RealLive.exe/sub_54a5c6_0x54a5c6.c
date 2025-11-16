// 函数: sub_54a5c6
// 地址: 0x54a5c6
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*arg4 += arg2.b
int16_t eax = 0x2f53
long double x87_r0 = arg5 * fconvert.t(*0x5873004a)
int32_t var_8 = arg1
int32_t* esp = &var_8
*(arg4 - 0x2fcb6445) s>>= 0x29
unimplemented  {enter 0xcffb, 0x82}
*(arg3 + 0x6550bd09) = fconvert.d(x87_r0)
int32_t ecx = arg1 - 1
int32_t entry_ebx

if (entry_ebx != 0 && ecx == 0)
    *(arg4 - 0x4be12f38)
    bool c = unimplemented  {imul eax, ecx, 0x349c11be}
    arg2.b = rrc.b(arg2.b, 1, c)
    undefined

int32_t eflags

while (true)
    int32_t temp1_1 = *(arg4 - 0x2fcb64c2)
    *(arg4 - 0x2fcb64c2) s>>= 0xa4
    bool p_1 = unimplemented  {sar dword [esi-0x2fcb64c2], 0xa4}
    bool z_1 = temp1_1 s>> 0xa4 == 0
    unimplemented  {enter 0xcffb, 0x4c}
    
    if (p_1)
        *(esp - 4) = esp
        eax.b = __salc(eflags)
        undefined
    
    if (not(z_1))
        *(arg4 - 0x2fcb66d0) s>>= 0xd6
        undefined
    
    ecx -= 1
    
    if (z_1 || ecx != 0)
        break
    
    arg4 = __outsb(arg2, *arg4, arg4, eflags)
    eax.b &= 0x54
    *(arg3 + 0x4b) += eax:1.b
    eax = -0x51ad
    x87_r0 = x87_r0 + fconvert.t(*(arg4 - 0x7ee12f31))
    *(esp - 4) = ecx
    esp -= 4

*(arg4 - 0x2fcb5cff) s>>= 0xf4
*arg3
__sti(eflags)
undefined
