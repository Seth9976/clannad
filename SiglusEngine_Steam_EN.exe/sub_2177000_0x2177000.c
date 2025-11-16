// 函数: sub_2177000
// 地址: 0x2177000
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
char* ecx = arg5
int32_t ebx
ebx:1.b = arg3:1.b | *ecx
int16_t es
arg6 = zx.d(es)
int32_t* result
result.b = arg6.b + 0x6f
int16_t ds = arg6.w
*ecx = sbb.d(*ecx, ebx - 1, *(result + 0x77) u< arg2)
int32_t* ebp = *0x5f0e4d19 * 0x74
result.b &= 0x60
ecx[0x30] += result.b
void* esp_1 = &arg6:1
int32_t eflags
uint16_t* esi_1 = __outsd(arg4.w, *arg2, arg2, eflags)
*(ebp + 0x3f)
void* edx
edx.b = arg4.b & *(ebp + 0x3f)
result.b = sbb.b(result.b, 0x22, false)
bool c_1 = unimplemented  {sbb al, 0x22}
char temp5 = (ebx - 1).b
char temp6 = *(edx + 0x68)
void** ebx_1
ebx_1.b = adc.b(temp5, temp6, c_1)
bool c_2 = adc.b(temp5, temp6, c_1) u< temp5 || (c_1 && adc.b(temp5, temp6, c_1) == temp5)
int32_t* esi_2 = __outsb(edx.w, *esi_1, esi_1, eflags)
void* esp_2
void* esp_6
bool c_8
bool c_10
bool c_11
bool c_14
bool c_16
bool z_6
bool z_7
bool s_5
bool o_5
bool o_7

if (not(c_2))
    result ^= 0x590d6871
label_217705b:
    result.b = adc.b(result.b, 0x68, false)
    edx = *esp_1
    bool c_5 = ebp[7].b u< ebx_1:1.b
    char temp9_1 = result.b
    result.b = sbb.b(temp9_1, 0x57, c_5)
    bool c_6 = unimplemented  {sbb al, 0x57}
    bool o_2 = unimplemented  {sbb al, 0x57}
    
    if (sbb.b(temp9_1, 0x57, c_5) != 0 && sbb.b(temp9_1, 0x57, c_5) s< 0 == o_2)
        esi_2 = *(ebp + 0x39)
    
    *esp_1 = 0xa761023
    esp_2 = esp_1
    char* temp13_1 = ecx
    ecx -= 1
    void* esp_5
    int32_t ss
    bool s_3
    bool o_3
    
    if (temp13_1 == 1)
        if (temp13_1 s<= 1)
            result.b = sbb.b(result.b, *edx, c_6)
            c_10 = result.b u< 0x7b
            z_6 = result.b == 0x7b
        label_21770be:
            esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags)
            
            if (not(z_6) && not(c_10))
                goto label_217711f
            
            ss = *esp_2
            *0x53287238 -= result.b
            *(esp_2 - 2) = ecx
            esi_2[0xc].b += ebx_1.b
            uint8_t* edi_1
            uint8_t temp0_5
            temp0_5, edi_1 = __insb(__return_addr_1, edx.w, eflags)
            *edi_1 = temp0_5
            result.b |= 0x54
            __return_addr_1 = *(esp_2 - 2)
            ecx[0x37] = sbb.b(ecx[0x37], ecx:1.b, false)
            ebx_1 -= *result
            ecx[(ebp << 1) + 0x79] &= result.b
            *(esp_2 - 1) = zx.d(ss)
            result.b |= 0x18
            esi_2[0x1e].b &= result.b
            *(esp_2 - 5) = 0x20
            *0x797c501e |= ecx
            *(esp_2 - 5)
            esp_5 = esp_2 - 1
            result ^= 0x663d0c1e
        label_21770ef:
            *(esp_5 - 4) = 0x7e
            *(esp_5 - 8) = esp_5 - 4
            esp_6 = esp_5 - 8
        label_21770f2:
            *0x7f4e543f |= ecx.b
            edx = *esp_6
            *edx ^= result
            *esp_6 = zx.d(ss)
            *(ebx_1 + 0x63)
            ecx = &ecx[1]
            goto label_2177101
        
        edx += 1
        ebx_1.b += *(esi_2 + 0x5e)
        int32_t eflags_1
        char temp0_2
        temp0_2, eflags_1 = __daa(result.b, eflags)
        result.b = temp0_2
        uint8_t* edi
        uint8_t temp0_3
        temp0_3, edi = __insb(__return_addr_1, edx.w, eflags_1)
        *edi = temp0_3
        ebx_1.b -= *edi
        char temp0_4
        temp0_4, eflags = __daa(result.b, eflags_1)
        result.b = temp0_4
        ecx -= 1
        ebx_1.b = adc.b(ebx_1.b, *ebx_1, *(edx + (esi_2 << 1) + 0x46) u< result)
        __return_addr_1 = edi & *esi_2
        s_3 = (edi & *esi_2) s< 0
        o_3 = false
        ebp = *esp_2
        esp_5 = esp_2 + 4
        goto label_2177088
    
    void* temp16_1 = *ebx_1
    void** esp_4 = sbb.d(esp_2, temp16_1, c_6)
    s_3 = sbb.d(esp_2, temp16_1, c_6) s< 0
    o_3 = unimplemented  {sbb esp, dword [ebx]}
    ebp = *esp_4
    esp_5 = &esp_4[1]
label_2177088:
    
    if (s_3 == o_3)
        goto label_21770ef
    
    *(esp_5 - 4) = __return_addr_1
    esp_6 = esp_5 - 4
    *result
    *result ^= ebx_1
    char temp23_1 = result.b
    result.b = adc.b(temp23_1, 0x5d, false)
    c_8 = adc.b(temp23_1, 0x5d, false) u< temp23_1
    bool s_4 = adc.b(temp23_1, 0x5d, false) s< 0
    bool o_4 = unimplemented  {adc al, 0x5d}
    
    if (adc.b(temp23_1, 0x5d, false) != 0 && not(c_8))
        result += 1
        goto label_21770a9
    
    if (not(o_4))
        goto label_21770a9
    
    *(esp_6 - 4) = zx.d(ss)
    esp_6 -= 4
    
    if (s_4)
        result.b &= 0x5f
        goto label_21770ae
    
    if (s_4)
        if (s_4)
            goto label_21770f2
        
        goto label_217709b
    
    char temp40_1 = result.b
    result.b -= 0x25
    c_11 = temp40_1 u< 0x25
    z_7 = temp40_1 == 0x25
    s_5 = temp40_1 - 0x25 s< 0
    o_5 = add_overflow(temp40_1, 0xdb)
    ds = *esp_6
    
    if (not(c_11))
        *(esp_6 - 2) = __return_addr_1
        esp_2 = esp_6 - 2
        goto label_2177112
    
    es = *(esp_6 + 2)
    esp_2 = esp_6 + 4
label_217715b:
    
    if (not(s_5))
        result.b &= *__return_addr_1
        result.b = (result ^ 0x5474516b).b | 0x34
        int32_t temp50_1 = *(ebp + (esi_2 << 1) + 0x36)
        c_11 = esi_2 u< temp50_1
        z_7 = esi_2 == temp50_1
        s_5 = esi_2 - temp50_1 s< 0
    
    if (z_7 || c_11)
        *(esp_2 - 4) = zx.d(ss)
        *(esp_2 - 8) = __return_addr_1
        result = sbb.d(result, *(__return_addr_1 + 0x45), c_11)
        void* edi_2 = __return_addr_1 & *(esi_2 + 0x26)
        *(result + 0xa) -= edx:1.b
        __return_addr_1 = edi_2 + 1
        edx = *(esp_2 - 8)
        esp_2 -= 4
        char temp52_1 = result.b
        result.b += 0x55
        c_14 = temp52_1 u>= 0xab
    label_217717c:
        char temp39_1 = result.b
        result.b = adc.b(temp39_1, 0x32, c_14)
        c_16 = adc.b(temp39_1, 0x32, c_14) u< temp39_1
            || (c_14 && adc.b(temp39_1, 0x32, c_14) == temp39_1)
        o_7 = unimplemented  {adc al, 0x32}
        char temp0_8
        temp0_8, eflags = __daa(result.b, eflags)
        result.b = temp0_8
    label_2177180:
        
        if (not(o_7))
            goto label_21771d8
        
        char temp45_1 = *(edx + 0x1c)
        *(edx + 0x1c) -= result.b
        bool c_17 = temp45_1 u< result.b
        char temp46_1 = ecx[0x2e]
        ecx[0x2e] = adc.b(temp46_1, result.b, c_17)
        s_5 = adc.b(temp46_1, result.b, c_17) s< 0
    
    if (s_5)
        goto label_2177194
    
    char temp0_9
    temp0_9, eflags = __das(result.b, eflags)
    result.b = temp0_9
    goto label_217719b

result.b = sbb.b(result.b, 0x2b, c_2)
*(ebx_1 + 0x73) += ebx_1
ecx = arg6
*(ebx_1 + result) += edx
bool c_3 = result.b u< 0x6f
arg6 = ecx
esp_2 = &arg6:1

if (result.b != 0x6f)
    int32_t* result_1 = result
    result = adc.d(result_1, 0x79157816, c_3)
    c_8 = adc.d(result_1, 0x79157816, c_3) u< result_1
        || (c_3 && adc.d(result_1, 0x79157816, c_3) == result_1)
    s_5 = adc.d(result_1, 0x79157816, c_3) s< 0
    o_5 = unimplemented  {adc eax, 0x79157816}
    
    if (c_8)
        arg5 = edx
        esp_6 = &arg5:1
    label_217709b:
        result.b = sbb.b(result.b, 7, c_8)
        goto label_217709d
else
    *0x554e5934 += &arg6:1
    arg5 = ecx
    esp_1 = &arg5:1
    char temp0_1
    char temp1_1
    temp0_1, temp1_1, eflags = __aaa(result.b, result:1.b, eflags)
    result.b = temp0_1
    result:1.b = temp1_1
    *(__return_addr_1 + 0x4d5d4552) |= ebx_1:1.b
    ecx:1.b &= *(ebx_1 + esi_2)
    char temp11_1 = result:1.b
    char temp12_1 = ebx_1[0xb].b
    result:1.b -= ebx_1[0xb].b
    
    if (temp11_1 != temp12_1 && temp11_1 - temp12_1 s< 0 == add_overflow(temp11_1, neg.b(temp12_1)))
        __return_addr_1 = adc.d(__return_addr_1, *(edx + 0x17), temp11_1 u< temp12_1)
        result ^= 0x590d6871
        goto label_217705b
    
    es = arg5:1.w
    esp_6 = &arg5:3
label_217709d:
    int32_t temp17_1 = *__return_addr_1
    esi_2 = __outsb(edx.w, *esi_2, esi_2, eflags)
    
    if (esp_6 == temp17_1)
        ecx -= 1
        result:1.b = sbb.b(result:1.b, *0x4079262c, esp_6 u< temp17_1)
    label_21770a9:
        __return_addr_1 = *esp_6
        *esp_6 = ebp
        *(__return_addr_1 + (ebx_1 << 1)) ^= result:1.b
    label_21770ae:
        ebx_1 += *(ecx + 0x56)
        esi_2 -= esi_2[0xe]
        *(edx + 0x1a)
        *(esp_6 - 4) = esp_6
        *(esp_6 - 8) = ebp
        esp_2 = esp_6 - 8
        *edx |= ebx_1
        char temp30_1 = ebx_1:1.b
        char temp31_1 = *(ebx_1 + (__return_addr_1 << 1))
        ebx_1:1.b += *(ebx_1 + (__return_addr_1 << 1))
        c_10 = temp30_1 + temp31_1 u< temp30_1
        z_6 = temp30_1 == neg.b(temp31_1)
        goto label_21770be
    
    ecx = &ecx[1]
label_2177101:
    ebx_1 += 1
    result.b += *edx
    result ^= 0x586b7026
    *(esp_6 - 4) = esi_2
    ds = *(esp_6 - 4)
    esp_2 = esp_6 - 2
    int32_t temp27_1 = *0x5749721f
    *0x5749721f = sbb.d(temp27_1, ebp, false)
    s_5 = sbb.d(temp27_1, ebp, false) s< 0
    o_5 = unimplemented  {sbb dword [0x5749721f], ebp}

label_2177112:

if (o_5)
    result &= 0x41394364
    *__return_addr_1 |= ecx:1.b
    *(ebx_1 + (__return_addr_1 << 1))
label_217711f:
    edx = *(esp_2 + 4)
    esi_2 = *(esp_2 + 8)
    result:1.b ^= *(ebx_1 + 0x77)
    ebx_1 -= 1
    ecx = *esp_2 + 1
    *(esp_2 + 8) = zx.d(es)
    esp_2 += 8
    result.b = adc.b((&result[0x184a1cde]).b, 0x1f, result u>= 0x9ed78c88)
    goto label_2177131

void** esp_25
bool c_15

if (not(s_5))
    ecx[0x14] -= result:1.b
    ds = *esp_2
    esp_2 += 2
label_2177131:
    char temp25_1 = *esi_2
    *esi_2 -= result:1.b
    
    if (not(add_overflow(temp25_1, neg.b(result:1.b))))
        goto label_21771a0
    
    if (temp25_1 - result:1.b s< 0)
        ecx = &ecx[1]
        edx:1.b = sbb.b(edx:1.b, ecx[0x61], temp25_1 u< result:1.b)
        unimplemented  {sbb dh, byte [ecx+0x61]}
    label_2177194:
        *(esp_2 - 4) = esi_2
        esp_2 -= 4
        ecx:1.b &= *__return_addr_1
    label_217719b:
        esi_2 -= 1
        *esp_2
        esp_25 = esp_2 + 4
        *(edx + 0xe)
        goto label_21771a2
    
    *(esp_2 - 4) = zx.d(ds)
    *ecx |= ebx_1:1.b
    *(edx + 0x7a) ^= ebx_1:1.b
    esp_2 = *(esp_2 - 4)
    ebx_1 += 1
    int32_t temp36_1 = *(edx + 0x1b)
    *(edx + 0x1b) |= __return_addr_1
    c_14 = false
    
    if ((temp36_1 | __return_addr_1) s>= 0)
        goto label_217717c
    
    if ((temp36_1 | __return_addr_1) == 0)
        *0x61711a41 = adc.b(*0x61711a41, ecx.b, false)
        goto label_2177194
    
    *(ebx_1 + 0x11) |= ebx_1.b
    char temp42_1 = ecx:1.b
    char temp43_1 = ecx[0x35]
    ecx:1.b |= ecx[0x35]
    c_15 = false
    
    if ((temp42_1 | temp43_1) != 0)
        goto label_21771b5
    
    char temp47_1 = result.b
    result.b |= 0x74
    c_11 = false
    z_7 = (temp47_1 | 0x74) == 0
    s_5 = (temp47_1 | 0x74) s< 0
    
    if (not(z_7))
        *(ebp + 0x27)
        result:1.b ^= *(ebp + 0x27)
        c_16 = false
        o_7 = false
        goto label_2177180
    
    int32_t eflags_2
    int16_t temp0_6
    temp0_6, eflags_2 = __arpl_memw_gpr16(*0x770a6611, edx.w)
    *0x770a6611 = temp0_6
    int16_t temp0_7
    temp0_7, eflags = __arpl_memw_gpr16(*__return_addr_1, result.w)
    *__return_addr_1 = temp0_7
    goto label_217715b

label_21771a0:
*esp_2
int16_t cs
*esp_2 = zx.d(cs)
esp_25 = esp_2
label_21771a2:
*(esi_2 + 0x16)
__return_addr_1 = *esp_25
esi_2 = esp_25[1]
esp_25[2]
edx = esp_25[5]
ecx = esp_25[6]
int32_t* eax_1 = esp_25[7]
ebx_1 = esp_25[8]
esp_2 = &esp_25[9]
c_15 = eax_1 u< 0x482f3216

if (eax_1 != 0x482f3216 && not(c_15))
    result = eax_1 + 0x2e380425
label_2177213:
    *(esp_2 - 4) = ebx_1
    *(esp_2 - 8) = zx.d(es)
    *result
    __bound_gprv_mema32(esi_2, *(ebx_1 * 2))
    *(edx + 0x34)
    *(edx + 0x34) |= result:1.b
    *result
    __bound_gprv_mema32(ebx_1, *(esi_2 + 0x410c3515))
else
label_21771b5:
    uint8_t* edi_3
    uint8_t temp0_10
    temp0_10, edi_3 = __insb(__return_addr_1, edx.w, eflags)
    *edi_3 = temp0_10
    *edi_3 = adc.b(*edi_3, ecx.b, c_15)
    *0x6c1d6e73
    result = *0x6c1d6e73 * 0x3d001c
    bool c_19 = unimplemented  {imul eax, dword [0x6c1d6e73], 0x3d001c}
    
    if (c_19)
        ecx = *esp_2
        esp_2 += 4
        *esi_2
        *esi_2 &= edx.b
        *ebx_1
        __return_addr_1 = edi_3 - 1
        TEB* fsbase
        esi_2 ^= *(fsbase + ebx_1 + 0x75)
        *0x75733364
        c_16 = result.b u< 0x6b
    label_21771d8:
        
        if (c_16)
            *esp_2
            ebx_1.b = adc.b(ebx_1.b, *__return_addr_1, c_16)
            int32_t eflags_3
            char temp0_11
            char temp1_2
            temp0_11, temp1_2, eflags_3 = __aas(result.b, result:1.b, eflags)
            result.b = temp0_11
            result:1.b = temp1_2
            *(ebx_1 + 3)
            *esp_2 = ecx
            return result
        
        char temp44_1 = result.b
        result.b += 0xa
        
        if (temp44_1 s> 0xf6)
            void* gsbase
            edx = *(gsbase + 0x701d1646) * 0x5383636
            
            if (result.b == 0x36 || result.b u< 0x36)
                trap(0x3a)
            
            goto label_2177213
        
        long double x87_r0 = arg1 + fconvert.t(*0x5d8965b)
        bool cond:3 = (result & 0x2596965b) != 0
        char* edi_4 = *(esp_2 + 8)
        void* esi_6 = *(esp_2 + 0xc)
        int32_t ebp_5 = *(esp_2 + 0x10)
        int32_t* ebx_5 = *(esp_2 + 0x18)
        int32_t edx_3 = *(esp_2 + 0x1c)
        int32_t ecx_4 = *(esp_2 + 0x20)
        void* eax_9 = *(esp_2 + 0x24)
        void* esp_34 = esp_2 + 0x28
        int32_t* eax_10
        
        while (true)
            int32_t eflags_5
            char temp0_18
            temp0_18, eflags_5 = __daa(ebx_5.b, eflags)
            eax_10.b = temp0_18
            ecx_4 -= 1
            
            if (cond:3 && ecx_4 != 0)
                break
            
            void* esp_37 = esp_34 + 1
            eflags = __sti(eflags_5)
            
            if ((*(esp_37 + 0x3116c071) & esp_37.b) u<= 0)
                char temp53 = ecx_4.b
                ecx_4.b <<= 0xa1
                bool c_21 = unimplemented  {shl cl, 0xa1}
                bool p = unimplemented  {shl cl, 0xa1}
                bool a = unimplemented  {shl cl, 0xa1}
                bool o_8 = unimplemented  {shl cl, 0xa1}
                bool d
                *(eax_10 - 4) = (o_8 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
                    | (temp53 << 0xa1 s< 0 ? 1 : 0) << 7 | (temp53 << 0xa1 == 0 ? 1 : 0) << 6
                    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c_21 ? 1 : 0)
                undefined
            
            x87_r0 = x87_r0 + fconvert.t(*0x2596965b)
            ebx_5 = eax_10[1]
            esp_34 = &eax_10[2]
            void* temp0_16 = esi_6
            esi_6 = esp_37
            eax_9 = temp0_16 & 0x6100b45b
            cond:3 = eax_9 != 0
        
        *(eax_10 + (ecx_4 << 1) + 0x37) u>>= ecx_4.b
        *edi_4 = eax_10.b
        void* edi_5 = &edi_4[1]
        *(esp_34 - 4) = esp_34
        char* eax_12 = eax_10 ^ 0x609809fd
        void* ebx_6
        ebx_6.w = eax_9.w ^ *(eax_12 - 0x67cc99a0)
        *(esp_34 - 8) = eax_12
        *(esp_34 - 0xc) = ecx_4 + 1
        *(esp_34 - 0x10) = edx_3
        *(esp_34 - 0x14) = ebx_6
        *(esp_34 - 0x18) = esp_34 - 0x14
        *(esp_34 - 0x1c) = ebp_5
        *(esp_34 - 0x20) = esi_6
        *(esp_34 - 0x24) = edi_5
        ebx_6.w ^= *(eax_12 - 0x67cc99a0)
        *(esp_34 - 0x28) = eax_12
        *(esp_34 - 0x2c) = ecx_4 + 1
        *(esp_34 - 0x30) = edx_3
        *(esp_34 - 0x34) = ebx_6
        *(esp_34 - 0x38) = esp_34 - 0x34
        *(esp_34 - 0x3c) = ebp_5
        *(esp_34 - 0x40) = esi_6
        *(esp_34 - 0x44) = edi_5
        ebx_6.w ^= *(eax_12 - 0x67cc99a0)
        *(esp_34 - 0x48) = eax_12
        *(esp_34 - 0x4c) = ecx_4 + 1
        *(esp_34 - 0x50) = edx_3
        *(esp_34 - 0x54) = ebx_6
        *(esp_34 - 0x58) = esp_34 - 0x54
        *(esp_34 - 0x5c) = ebp_5
        *(esp_34 - 0x60) = esi_6
        *(esp_34 - 0x64) = edi_5
        ebx_6.w ^= *(eax_12 - 0x67cc99a0)
        *(esp_34 - 0x68) = eax_12
        *(esp_34 - 0x6c) = ecx_4 + 1
        *(esp_34 - 0x70) = edx_3
        *(esp_34 - 0x74) = ebx_6
        *(esp_34 - 0x78) = esp_34 - 0x74
        *(esp_34 - 0x7c) = ebp_5
        *(esp_34 - 0x80) = esi_6
        *(esp_34 - 0x84) = edi_5
        int32_t ecx_5
        ecx_5.w = (ecx_4 + 1).w ^ *(eax_12 + 1)
        int32_t ecx_6 = ecx_5 ^ *(eax_12 + 1)
        int32_t edi_10
        edi_10.w = (edi_5 ^ *(ebx_6 + 0x66) ^ *(ebx_6 + 0x66) ^ *(ebx_6 + eax_12 + 0x3bc3346)
            ^ *(ebx_6 + eax_12 + 0x3bc3346) ^ *(eax_12 + 0x63)).w ^ *(eax_12 + 0x63)
        ebp_5.w ^= eax_12.w
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *(esp_34 - 0x88) = eax_12
        *(esp_34 - 0x8c) = ebx_6
        *(esp_34 - 0x90) = ecx_6
        *(esp_34 - 0x94) = edx_3
        *(esp_34 - 0x98) = esi_6 + 4
        *(esp_34 - 0x9c) = edi_10
        *(esp_34 - 0xa0) = ebp_5
        int32_t eax_13 = *(esp_34 - 0x84)
        void* esp_52 = (esp_34 - 0xa0) & 0xfffffff0
        *(esp_52 - 4) = esp_34 - 0xa0
        *(esp_52 - 8) = esp_34 - 0xa0
        *(esp_52 - 0xc) = esp_34 - 0xa0
        *(esp_52 - 0x10) = eax_13 - 5
        int32_t eax_15 = sub_2177390()
        int32_t* ecx_8 = *(esp_52 - 4)
        ecx_8[7] = eax_15
        *ecx_8
        ecx_8[1]
        ecx_8[2]
        ecx_8[3]
        ecx_8[4]
        ecx_8[5]
        return ecx_8[6]

int32_t eflags_4
char temp0_12
char temp1_3
temp0_12, temp1_3, eflags_4 = __aad_immb(0xeb, result.b, result:1.b)
result.b = temp0_12
result:1.b = temp1_3
breakpoint
