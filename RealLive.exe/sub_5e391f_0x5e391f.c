// 函数: sub_5e391f
// 地址: 0x5e391f
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

bool z
bool o
int32_t* var_7
int32_t* entry_ebx

if (not(z))
    __int1()
    void* var_2_1 = arg2
    *entry_ebx
    *entry_ebx = arg6
    *0x97ccadb0 |= arg3:1.b
    var_7 = entry_ebx
    void* edx
    edx.b = 0xc9
    *(arg2 - 4) = arg5
    *(arg2 - 8) = &var_7:1
    *(arg2 - 0xc) = arg3
    *(arg2 - 0x10) = edx
    *(arg2 - 0x14) = entry_ebx
    *(arg2 - 0x18) = arg2 - 0x14
    *(arg2 - 0x1c) = &entry_ebx[0xefc20a]
    *(arg2 - 0x20) = arg5
    *(arg2 - 0x24) = arg1 - 1
    *(edx + 0x4d301756) = rlc.b(*(edx + 0x4d301756), 1, arg1 - 1 u< 0)
    arg3[0x1b8b60f7]
else if (o)
    arg1.b &= 0xcc
    bool cond:0 = arg1.b s< 0
    int32_t eflags
    __out_dx_al(arg2.w, arg1.b, eflags)
    int16_t var_2_2 = -0x3698
    char temp0_2 = *arg3
    *arg3 = arg2.b
    arg2.b = temp0_2
    arg1.b = *0x4d8280a1
    __in_oeax_dx(arg2.w, eflags)
    int16_t cs
    
    if (not(cond:0))
        var_7 = zx.d(cs)
        *arg6
        *(arg2 + 0x28ff3449)
        undefined
    
    void arg_59
    *(&arg_59 + arg3) = arg2
    int32_t eax_4
    eax_4:1.b = 0xf9
    eax_4.b ^= 0x5e
    eax_4.b += arg3.b
    var_7 = eax_4
    uint32_t var_8 = zx.d(cs)
    int32_t eflags_1
    int32_t eip_2
    eip_2, eflags_1 = __into(eflags)
    bool c_2 = eax_4.b u< *arg6
    void* edi_3 = &arg6[1]
    eax_4.b = __in_al_immb(0x95, eflags_1)
    *(arg2 + 0x56) = sbb.d(*(arg2 + 0x56), arg4, c_2)
    *entry_ebx = eax_4
    void* ebp_2 = arg4 + entry_ebx
    *(ebp_2 - 0x1d)
    *(ebp_2 - 0x1d) |= arg3.b
    void* var_c = arg2
    int32_t* var_11 = arg3
    void* eax_5
    eax_5.b = sbb.b(ebp_2.b, 0xb6, false)
    eax_5.b = *(entry_ebx + eax_5)
    int32_t* var_d
    bool d = test_bit(*var_d, 0xa)
    int32_t temp3 = *(entry_ebx - 0x2d)
    *(entry_ebx - 0x2d) += &var_d[1]
    bool p = unimplemented  {dec edi}
    bool a = unimplemented  {dec edi}
    *(entry_ebx - 0x21) = int.d(arg9)
    eax_5:1.b = (edi_3 - 2 s< 0 ? 1 : 0) << 7 | (edi_3 == 2 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
        | (p ? 1 : 0) << 2 | (temp3 + &var_d[1] u< temp3 ? 1 : 0)
    int32_t ebp_3 = var_d[1]
    int32_t eflags_2
    char temp0_8
    temp0_8, eflags_2 = __das((eax_5 + 0x432dbf8b + entry_ebx).b, eflags_1)
    void* eax_7
    eax_7.b = temp0_8
    eax_7.b = __in_al_dx(arg2.w, eflags_2)
    var_d[1] = entry_ebx
    bool cond:1 = eax_7 u<= *(edi_3 - 2)
    void* edi_6
    
    if (d)
        edi_6 = edi_3 - 6
    else
        edi_6 = edi_3 + 2
    
    arg3.b = 0x48
    *var_d = eax_7
    *(var_d - 4) = arg3
    *(var_d - 8) = arg2
    *(var_d - 0xc) = entry_ebx
    *(var_d - 0x10) = var_d - 0xc
    *(var_d - 0x14) = ebp_3
    *(var_d - 0x18) = arg5 - 1
    *(var_d - 0x1c) = edi_6
    
    if (not(cond:1))
        *(arg5 - 1)
        undefined
    
    __out_dx_al(arg2.w, eax_7.b, eflags_2)
    *(var_d - 0x20) = zx.d(var_2_2)
    *(eax_7 - 0x4c4b7c9c) = int.d(arg9)
    *(var_d - 0x24) = edi_6
    __bound_gprv_mema32(eax_7, *arg3)
    *(var_d - 0x28) = eax_7
    *(var_d - 0x2c) = arg3
    *(var_d - 0x30) = arg2
    *(var_d - 0x34) = entry_ebx
    *(var_d - 0x38) = var_d - 0x34
    *(var_d - 0x3c) = ebp_3
    *(var_d - 0x40) = arg5 - 1
    *(var_d - 0x44) = edi_6
    __outsb(arg2.w, *(arg5 - 1), arg5 - 1, eflags_2)
    int80_t st2
    st2.q = _mm_cvtps_pi32(arg7)
    long double st0
    long double st1
    st0, st1 = __fxtract(arg10 + arg8)
    *(var_d - 0x48) = arg3
    int32_t* edi_7
    int32_t temp0_11
    temp0_11, edi_7 = __insd(edi_6, arg2.w, eflags_2)
    *edi_7 = temp0_11
    *(var_d - 0x48)
    eax_7:1.b = 0xca
    *0xed4d82bc
    
    if (arg3 == 0)
        jump(0x5e3b01)
    
    jump(0x5e3aac)
undefined
