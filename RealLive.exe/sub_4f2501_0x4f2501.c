// 函数: sub_4f2501
// 地址: 0x4f2501
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*arg5 = *arg4
void* esi = &arg4[1]
int32_t eflags
int16_t* edi_1
int16_t temp0
temp0, edi_1 = __insd(&arg5[1], arg2, eflags)
*edi_1 = temp0
int32_t eax = 0x9daf53a2 * *(arg3 - 0x258e6285)
int32_t entry_ebx
entry_ebx:1.b = adc.b(entry_ebx:1.b, (eax - 0x600000bf):1.b, eax u< 0x600000bf)
int32_t var_4 = entry_ebx
int32_t var_8 = 0x132425ca
void* var_c = arg3
void** esp_1 = &var_c
*esi
arg1:1.b = 0xca
int16_t eax_2 = (eax - 0x600000bf).w - 0xbf
bool c_1 = eax - 0x600000bf u< 0x600000bf

do
    char temp3_1 = entry_ebx:1.b
    entry_ebx:1.b = adc.b(temp3_1, eax_2:1.b, c_1)
    bool c_2 = adc.b(temp3_1, eax_2:1.b, c_1) u< temp3_1
        || (c_1 && adc.b(temp3_1, eax_2:1.b, c_1) == temp3_1)
    bool z_1 = adc.b(temp3_1, eax_2:1.b, c_1) == 0
    *(esp_1 - 4) = entry_ebx
    bool d
    
    if (d)
        *edi_1 = eax_2.b
        edi_1 -= 1
    else
        *edi_1 = eax_2.b
        edi_1 += 1
    
    int32_t eflags_1
    char temp0_1
    temp0_1, eflags_1 = __daa(eax_2.b, eflags)
    eax_2.b = temp0_1
    d = true
    char temp0_2
    temp0_2, eflags = __daa(eax_2.b, eflags_1)
    eax_2.b = temp0_2
    
    if (z_1 || c_2)
        *(arg1 + 0x721e9496)
        undefined
    
    *esi
    *esi &= entry_ebx.b
    bool p_1 = unimplemented  {and byte [esi], bl}
    arg1:1.b = 0xca
    0x604fe672()
    void* eax_3
    int32_t edx
    eax_3, edx, arg1 = 0xfe6c6c65()
    
    if (not(p_1))
        void* ecx_1 = 0xed1f8884()
        int32_t eflags_3
        int32_t eip_1
        eip_1, eflags_3 = __into(eflags)
        *(ecx_1 + 0x721e9496)
        undefined
    
    entry_ebx.b = 0xf1
    eax_3.b += arg1:1.b
    eax_3.b ^= 0x2d
    void* temp6_1 = arg3
    int32_t temp7_1 = *(edi_1 + edx - 0x7627b232)
    arg3 = adc.d(temp6_1, temp7_1, false)
    c_1 = adc.d(temp6_1, temp7_1, false) u< temp6_1
    int16_t temp0_3 = esi
    esi = eax_3
    int32_t eax_4 = temp0_3
    eax_2 = esp_1 - 4
    int16_t ds
    *(eax_4 - 4) = zx.d(ds)
    esp_1 = eax_4 - 4
while (c_1)

void* ecx = 0xed1f8660()
int32_t eflags_2
int32_t eip
eip, eflags_2 = __into(eflags)
*(ecx + 0x721e9496)
undefined
