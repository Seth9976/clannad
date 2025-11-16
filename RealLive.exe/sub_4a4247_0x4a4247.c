// 函数: sub_4a4247
// 地址: 0x4a4247
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
char temp0_5
char temp1_1
temp0_5, temp1_1, eflags = __aad_immb(0x60, arg1.b, arg1:1.b)
arg1.b = temp0_5
arg1:1.b = temp1_1
*(arg6 - 0x69) u>>= 1
bool c = *arg5 u< *arg6
void* esi = &arg5[4]
void* edi = &arg6[1]
void* entry_ebx
int32_t* esp
bool s_1
bool o_1

while (true)
    void* temp3_1 = arg1
    int32_t temp4_1 = *(arg4 + 0x2240d7d2)
    bool cond:0_1 = c
    arg1 = adc.d(temp3_1, temp4_1, cond:0_1)
    c = adc.d(temp3_1, temp4_1, cond:0_1) u< temp3_1
        || (cond:0_1 && adc.d(temp3_1, temp4_1, cond:0_1) == temp3_1)
    s_1 = adc.d(temp3_1, temp4_1, cond:0_1) s< 0
    o_1 = unimplemented  {adc eax, dword [ebp+0x2240d7d2]}
    
    if (adc.d(temp3_1, temp4_1, cond:0_1) != 0 && not(c))
        char temp0
        temp0, edi = __insd(edi, arg2.w, eflags)
        *edi = temp0
        break
    
    esi &= *(arg1 + 3)
    *(esp - 4) = arg1
    *(esp - 8) = arg3
    *(esp - 0xc) = arg2
    *(esp - 0x10) = entry_ebx
    *(esp - 0x14) = esp - 0x10
    *(esp - 0x18) = arg4
    *(esp - 0x1c) = esi
    *(esp - 0x20) = edi
    *(esp - 0x24) = entry_ebx
    esp -= 0x24
    char temp5_1 = *(entry_ebx - 0x10)
    *(entry_ebx - 0x10) -= entry_ebx.b
    bool c_2 = temp5_1 u< entry_ebx.b
    char temp0_2 = arg3
    arg3 = arg1
    arg1 = temp0_2
    char temp6_1 = *(entry_ebx - 0x22476ff6)
    *(entry_ebx - 0x22476ff6) = adc.b(temp6_1, arg1.b, c_2)
    c = adc.b(temp6_1, arg1.b, c_2) u< temp6_1 || (c_2 && adc.b(temp6_1, arg1.b, c_2) == temp6_1)
    s_1 = adc.b(temp6_1, arg1.b, c_2) s< 0
    o_1 = unimplemented  {adc byte [ebx-0x22476ff6], al}
    
    if (arg3 != 0)
        if (s_1 == o_1)
            break
        
        if (not(c))
            jump(0x4a42b4)
        
        *esp
        undefined

*edi = arg1.b
int32_t ss

if (s_1 != o_1)
    char temp7 = arg3.b
    char temp8 = *(ss + entry_ebx - 0x677c993e)
    arg3.b ^= *(ss + entry_ebx - 0x677c993e)
    bool p = unimplemented  {xor cl, byte [ss:ebx-0x677c993e]}
    bool a = undefined
    *(entry_ebx - 0x50f0d3ce) = not.d(*(entry_ebx - 0x50f0d3ce))
    *(esp - 4) = arg3
    bool d
    *(esp - 8) = (d ? 1 : 0) << 0xa | ((temp7 ^ temp8) s< 0 ? 1 : 0) << 7
        | (temp7 == temp8 ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
    void* ebx_2
    int16_t es_1
    ebx_2, es_1 = __les_gprz_memp(*(arg1 + 0x6d49b57b))
    arg1.b = __in_al_dx(0x870f, eflags)
    *(esp - 0xc) = ebx_2
    *(esp - 0x10) = arg1
    *(ebx_2 - 0x22476ff6) = adc.b(*(ebx_2 - 0x22476ff6), arg3, false)
    
    if (arg1 == 0)
        jump(0x4a425f)
    
    jump(0x4a42c2)

if (arg3 == 0)
    *(entry_ebx - 0x22476ff6) = adc.b(*(entry_ebx - 0x22476ff6), arg1.b, c)
    
    if (arg3 == 0)
        jump(0x4a4229)
    
    jump(0x4a428c)

__int1()
char temp9 = arg1.b
arg1.b -= 0xdc
arg1.b = adc.b(arg1.b, 2, temp9 u< 0xdc)
arg2.b = ror.b(arg2.b, 1)
*(esp - 5) = zx.d(ss)
int16_t es
*(esp - 9) = zx.d(es)
*(arg3 + 0x30af53ef) = arg7
*(arg4 + 0x19)
char temp0_1 = *(esp - 9)

if (test_bit(temp0_1, 7) == test_bit(temp0_1, 0xb))
    jump(0x4a42eb)

jump(0x4a427c)
