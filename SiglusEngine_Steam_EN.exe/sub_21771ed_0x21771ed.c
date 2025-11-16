// 函数: sub_21771ed
// 地址: 0x21771ed
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (add_overflow(*arg5, neg.b(arg3:1.b)))
    int32_t eflags_2
    char temp0_1
    char temp1_2
    temp0_1, temp1_2, eflags_2 = __aad_immb(0xab, arg1.b, arg1:1.b)
    arg1.b = temp0_1
    arg1:1.b = temp1_2
    breakpoint

int32_t* var_9 = arg1
int16_t ds
uint32_t var_d = zx.d(ds)
*(arg5 + 0x79)
uint32_t entry_ebx
*arg4 = adc.b(*arg4, arg2.b, *(&var_d + arg1) u< entry_ebx)
char temp3 = arg1.b
arg1.b += 0xa

if (temp3 s> 0xf6)
    void* gsbase
    void* edx = *(gsbase + 0x701d1646) * 0x5383636
    
    if (arg1.b == 0x36 || arg1.b u< 0x36)
        trap(0x3a)
    
    var_d = entry_ebx
    int16_t es
    uint32_t var_11 = zx.d(es)
    *arg1
    __bound_gprv_mema32(arg4, *(entry_ebx * 2))
    *(edx + 0x34)
    *(edx + 0x34) |= arg1:1.b
    *arg1
    __bound_gprv_mema32(entry_ebx, *(arg4 + 0x410c3515))
    int32_t eflags_1
    char temp0
    char temp1_1
    temp0, temp1_1, eflags_1 = __aad_immb(0xeb, arg1.b, arg1:1.b)
    arg1.b = temp0
    arg1:1.b = temp1_1
    breakpoint

long double result = arg6 + fconvert.t(*0x5d8965b)
bool cond:0 = (arg1 & 0x2596965b) != 0
char* edi_2 = arg2
void* const __return_addr_1 = __return_addr
int32_t ebx = arg8
int32_t ecx_2 = arg10
int32_t eax_5 = arg11
void arg_1f
void* esp_2 = &arg_1f
int32_t* eax_6

while (true)
    int32_t eflags
    int32_t eflags_3
    char temp0_6
    temp0_6, eflags_3 = __daa(ebx.b, eflags)
    eax_6.b = temp0_6
    ecx_2 -= 1
    
    if (cond:0 && ecx_2 != 0)
        break
    
    void* __return_addr_2 = esp_2 + 1
    eflags = __sti(eflags_3)
    
    if ((*(__return_addr_2 + 0x3116c071) & __return_addr_2.b) u<= 0)
        char temp5 = ecx_2.b
        ecx_2.b <<= 0xa1
        bool c_2 = unimplemented  {shl cl, 0xa1}
        bool p = unimplemented  {shl cl, 0xa1}
        bool a = unimplemented  {shl cl, 0xa1}
        bool o_1 = unimplemented  {shl cl, 0xa1}
        bool d
        *(eax_6 - 4) = (o_1 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (temp5 << 0xa1 s< 0 ? 1 : 0) << 7
            | (temp5 << 0xa1 == 0 ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
            | (c_2 ? 1 : 0)
        undefined
    
    result = result + fconvert.t(*0x2596965b)
    ebx = eax_6[1]
    esp_2 = &eax_6[2]
    char __return_addr_3 = __return_addr_1
    __return_addr_1 = __return_addr_2
    eax_5 = __return_addr_3 & 0x6100b45b
    cond:0 = eax_5 != 0

*(eax_6 + (ecx_2 << 1) + 0x37) u>>= ecx_2.b
*edi_2 = eax_6.b
void* edi_3 = &edi_2[1]
*(esp_2 - 4) = esp_2
char* eax_7 = eax_6 ^ 0x609809fd
int32_t ebx_1
ebx_1.w = eax_5.w ^ *(eax_7 - 0x67cc99a0)
*(esp_2 - 8) = eax_7
*(esp_2 - 0xc) = ecx_2 + 1
*(esp_2 - 0x10) = arg9
*(esp_2 - 0x14) = ebx_1
*(esp_2 - 0x18) = esp_2 - 0x14
*(esp_2 - 0x1c) = arg7
*(esp_2 - 0x20) = __return_addr_1
*(esp_2 - 0x24) = edi_3
ebx_1.w ^= *(eax_7 - 0x67cc99a0)
*(esp_2 - 0x28) = eax_7
*(esp_2 - 0x2c) = ecx_2 + 1
*(esp_2 - 0x30) = arg9
*(esp_2 - 0x34) = ebx_1
*(esp_2 - 0x38) = esp_2 - 0x34
*(esp_2 - 0x3c) = arg7
*(esp_2 - 0x40) = __return_addr_1
*(esp_2 - 0x44) = edi_3
ebx_1.w ^= *(eax_7 - 0x67cc99a0)
*(esp_2 - 0x48) = eax_7
*(esp_2 - 0x4c) = ecx_2 + 1
*(esp_2 - 0x50) = arg9
*(esp_2 - 0x54) = ebx_1
*(esp_2 - 0x58) = esp_2 - 0x54
*(esp_2 - 0x5c) = arg7
*(esp_2 - 0x60) = __return_addr_1
*(esp_2 - 0x64) = edi_3
ebx_1.w ^= *(eax_7 - 0x67cc99a0)
*(esp_2 - 0x68) = eax_7
*(esp_2 - 0x6c) = ecx_2 + 1
*(esp_2 - 0x70) = arg9
*(esp_2 - 0x74) = ebx_1
*(esp_2 - 0x78) = esp_2 - 0x74
*(esp_2 - 0x7c) = arg7
*(esp_2 - 0x80) = __return_addr_1
*(esp_2 - 0x84) = edi_3
int32_t ecx_3
ecx_3.w = (ecx_2 + 1).w ^ *(eax_7 + 1)
int32_t ecx_4 = ecx_3 ^ *(eax_7 + 1)
int32_t edi_8
edi_8.w = (edi_3 ^ *(ebx_1 + 0x66) ^ *(ebx_1 + 0x66) ^ *(ebx_1 + eax_7 + 0x3bc3346)
    ^ *(ebx_1 + eax_7 + 0x3bc3346) ^ *(eax_7 + 0x63)).w ^ *(eax_7 + 0x63)
int32_t ebp
ebp.w = arg7.w ^ eax_7.w
*eax_7 += eax_7.b
*eax_7 += eax_7.b
*(esp_2 - 0x88) = eax_7
*(esp_2 - 0x8c) = ebx_1
*(esp_2 - 0x90) = ecx_4
*(esp_2 - 0x94) = arg9
*(esp_2 - 0x98) = __return_addr_1 + 4
*(esp_2 - 0x9c) = edi_8
*(esp_2 - 0xa0) = ebp
int32_t eax_8 = *(esp_2 - 0x84)
void* esp_18 = (esp_2 - 0xa0) & 0xfffffff0
*(esp_18 - 4) = esp_2 - 0xa0
*(esp_18 - 8) = esp_2 - 0xa0
*(esp_18 - 0xc) = esp_2 - 0xa0
*(esp_18 - 0x10) = eax_8 - 5
int32_t eax_10 = sub_2177390()
int32_t* ecx_6 = *(esp_18 - 4)
ecx_6[7] = eax_10
*ecx_6
ecx_6[1]
ecx_6[2]
ecx_6[3]
ecx_6[4]
ecx_6[5]
ecx_6[6]
return result
