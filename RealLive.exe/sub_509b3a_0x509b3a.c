// 函数: sub_509b3a
// 地址: 0x509b3a
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int16_t ds
uint32_t var_4 = zx.d(ds)
bool d = false
*(arg2 + 0xf023) ^= 0x36
*(arg1 + 0x56)
void* entry_ebx
*arg5 ^= entry_ebx.b
arg1.b &= 0xf8
*(arg2 + 0xf022) ^= 0x36
arg5[0x56]
int32_t edi = *arg3
*arg5 ^= entry_ebx.b
int32_t* esp_1 = arg3
int32_t eflags
uint8_t* edi_1
uint8_t temp0
temp0, edi_1 = __insb(edi, arg2.w, eflags)
*edi_1 = temp0
*(arg2 + 0xf02d) ^= 0x36
arg5[(arg2 << 1) + 0x5f]
label_509b6f:
arg2:1.b ^= arg3.b
char temp2_1 = arg1.b
arg1.b = sbb.b(temp2_1, 0xc1, false)
bool c_1 = unimplemented  {sbb al, 0xc1}
*esp_1
esp_1 += 2
arg1.b = *(entry_ebx + arg1)

if (sbb.b(temp2_1, 0xc1, false) == 0 || c_1)
    *(esp_1 - 4) = 0xed4d1bc8
else
    arg1.b = 8
    edi_1 = 0xd02f9b68
    arg1.b = __in_al_dx(arg2.w, eflags)
    void* eax = arg1 + 0x2848a447
    bool c_2 = arg1 u>= 0xd7b75bb9
    bool p_1 = unimplemented  {add eax, 0x2848a447}
    bool a_1 = unimplemented  {add eax, 0x2848a447}
    bool z_2 = arg1 == 0xd7b75bb9
    
    if (z_2 || c_2)
        *(esp_1 - 4) = (add_overflow(arg1, 0x2848a447) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
            | (arg1 + 0x2848a447 s< 0 ? 1 : 0) << 7 | (z_2 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4
            | (p_1 ? 1 : 0) << 2 | (c_2 ? 1 : 0)
        esp_1 -= 4
    label_509b8e:
        char temp0_2
        temp0_2, eflags = __das(eax.b, eflags)
        eax.b = temp0_2
        eax:1.b u>>= 1
    else
        eax.b = *(entry_ebx + eax)
        
        if (z_2 || c_2)
            goto label_509b8e
        
        eax.b = 8
        edi_1 = 0xd02f9c68
        eax.b = __in_al_dx(arg2.w, eflags)
    
    arg1 = eax + 0x28489647
    bool c_3 = eax u>= 0xd7b769b9
    bool z_3 = eax == 0xd7b769b9
    
    if (z_3 || c_3)
        int16_t temp0_5 = *esp_1
        esp_1 = &esp_1[1]
        d = test_bit(temp0_5, 0xa)
        char temp0_6
        temp0_6, eflags = __das(arg1.b, eflags)
        arg1.b = temp0_6
        arg1:1.b u>>= 1
        goto label_509ba3
    
    while (true)
        arg1.b = *(entry_ebx + arg1)
        
        if (z_3 || c_3)
            *arg1 += arg1.b
            int32_t ss
            arg5[(arg2 << 1) + 0x5f + ss]
            goto label_509b6f
        
        arg1.b = 8
        edi_1 = 0xd02f9d68
        bool c_4
        bool z_4
        
        do
            arg1.b = __in_al_dx(arg2.w, eflags)
        label_509ba3:
            c_4 = arg1 u>= 0xd7b777b9
            z_4 = arg1 == 0xd7b777b9
            
            if (z_4 || c_4)
                arg2 -= 1
                char temp0_8
                temp0_8, eflags = __das((arg1 + 0x28488847).b, eflags)
                arg1.b = temp0_8
                arg1:1.b u>>= 1
                goto label_509bba
            
            arg1.b = *(entry_ebx + arg1 + 0x28488847)
        while (z_4 || c_4)
        arg1.b = 8
        edi_1 = 0xd02f4a68
        arg1.b = __in_al_dx(arg2.w, eflags)
    label_509bba:
        
        if (arg1 != 0xd7b705b9 && arg1 u< 0xd7b705b9)
            uint8_t temp0_10 = *edi_1
            *edi_1 = (arg1 + 0x2848fa48):1.b
            arg1:1.b = temp0_10
            arg3:1.b u>>= 0x68
            *((arg3 << 1) + 0x81163bed) += entry_ebx.b
            arg4 -= 1
            arg6 f- arg7
            arg3:1.b u>>= 0x68
            unimplemented  {enter 0x4d1b, 0xed}
            break
        
        int16_t temp0_4 = arg5
        arg5 = arg1 + 0x2848fa47
        arg1 = temp0_4 - 1
        char temp14_1 = arg5[7]
        arg5[7] -= arg2:1.b
        c_3 = temp14_1 u< arg2:1.b
        z_3 = temp14_1 == arg2:1.b

*0xdfd84d81
arg3:1.b u>>= 0x68
bool c_6 = unimplemented  {shr ch, 0x68}
int32_t ecx = sbb.d(arg3, *(arg4 - 0x13), c_6)
*(ecx + (arg1 << 2))
unimplemented  {fcomp st0, st7} f- unimplemented  {fcomp st0, st7}
unimplemented  {fcomp st0, st7}
ecx:1.b u>>= 0x68
bool c_7 = unimplemented  {shr ch, 0x68}
int32_t eax_3 = *0x35451a7e
void* esp_4 = 0x35451a82
void* ecx_1 = sbb.d(ecx, *(arg4 - 0x14), c_7)
*entry_ebx
*(arg4 - 0x29) |= 0x1a6cbcdf
int32_t eax_4 = eax_3 ^ 0x55507a16
int32_t ebp_2

while (true)
    edi_1 ^= *(eax_4 - 0x31cdd734)
    *(ecx_1 + 0x3355ff4e) = sbb.d(*(ecx_1 + 0x3355ff4e), arg2, false)
    ebp_2 = *(esp_4 + 4)
    *(ecx_1 - 0x6f5e00b2)
    arg2 |= *(ecx_1 - 0x6f5e00b2)
    arg2.b = adc.b(arg2.b, *(arg2 + 0x53), false)
    eax_4.b = 0xf4
    
    if (ecx_1 == 0)
        undefined
    
    *(ecx_1 + 0x1df4a48)
    *(ecx_1 + 0x1df4a48) &= ebp_2
    bool p_2 = unimplemented  {and dword [ecx+0x1df4a48], ebp}
    unimplemented  {fsub st0, qword [edx]}
    
    if (p_2)
        break
    
    *(esp_4 + 4) = ebp_2
    esp_4 += 4

unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
unimplemented  {fcomp st0, st1}
*(esp_4 + 4) = 0xffffffab
*(arg2 + 2) <<= 1
*(ecx_1 + 0x6a7fc00) s>>= 1
*(arg2 * 9 - 0xa) = arg2
_bswap(ebp_2)
int32_t eax_6 = *0xec6ea2f0
char temp11 = *(entry_ebx - 0x25)
*(entry_ebx - 0x25) u>>= 1
bool z_6 = (temp11 & 0xfe) == 0

if (not(z_6) && (temp11 & 1) == 0)
    if (temp11 u>> 1 s< 0)
        jump(0x33da79c2)
    
    *(esp_4 + 4)
    eax_6:1.b = 0xca
    *(esp_4 + 4) = arg2
    *esp_4 = entry_ebx
    *esp_4
    undefined

*(entry_ebx - 0xa3b30ef) = (ecx_1 + 1):1.b

if (z_6 || ecx_1 != 0)
    *(arg2 + 0x20) += ecx_1:1.b
    edi_1[0x46] &= 0x57
    int32_t eax_5
    eax_5.b = __salc(eflags)
    
    if ((eax_6 | 0x5d9d8f3) == 0)
        jump(0x509cac)
    
    jump(0x509c61)

*0x205b7aca
*0xe4edeb00
*0xe9019c64
unimplemented  {fmul st0, qword [ecx+0x7da5ce33]}

if ((adc.d(edi_1, ecx_1, true)).b s> 0xe7)
    jump(0x509c75)

jump(0x509cca)
