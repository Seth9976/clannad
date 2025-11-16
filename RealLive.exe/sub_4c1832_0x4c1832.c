// 函数: sub_4c1832
// 地址: 0x4c1832
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*arg3
void* edi = arg3 + 4
*arg2 - *edi
void** edi_1 = edi + 4
int32_t ebp = arg1 + 1
void** edx
edx:1.b = 0xea
*(ebp + (edx << 2) - 0x66)
void* entry_ebx
*(ebp + (edx << 2) - 0x66) |= entry_ebx
int16_t ds
uint32_t var_8 = zx.d(ds)
char* esi_1 = 0xdf1ce850
void* eax
eax.b = *0x43b56145
eax.b = *0x607fc15e
*(edi_1 + 0x534db06e) = fconvert.s(arg4)
*(eax + 0x41b56145)
*0xdf1ce811 = sbb.b(*0xdf1ce811, 0x7f, false)
bool o = unimplemented  {sbb byte [esi-0x3f], 0x7f}
uint32_t var_c = var_8
void* var_14 = entry_ebx

if (o)
    uint32_t ecx_1
    ecx_1:1.b = 0x98
    uint32_t var_8_2 = zx.d(ds)
    *edi_1 = eax
    void* edi_3 = &edi_1[1]
    *edi_3 = *0xdf1ce850
    void* edi_4 = edi_3 + 1
    *edi_4 = rrc.d(*edi_4, 0xd0, false)
    bool c = unimplemented  {rcr dword [edi], 0xd0}
    *edx = eax
    *0x65ebebd8
    void* eax_1
    eax_1.b = adc.b(eax.b, 0xdf, c)
    undefined

int32_t* eax_2
int32_t* ecx_3
char* edx_2
eax_2, edx_2, ecx_3 = 0xac61b350(edi_1, 0xdf1ce850, ebp, &var_14)
char temp4 = eax_2.b
eax_2.b -= 0xb
int32_t* var_28 = ecx_3
char temp0 = *edx_2
*edx_2 = ecx_3.b
ecx_3.b = temp0
ecx_3:1.b = entry_ebx.b
eax_2.b = adc.b(eax_2.b, 0x9a, temp4 u< 0xb)
*eax_2 |= eax_2
*(entry_ebx - 0x281c7f68) += eax_2.b
edx_2.b ^= entry_ebx:1.b
int32_t eflags_1
bool c_3

while (true)
    long double x87_r1 = arg5 * fconvert.t(*edx_2)
    eax_2.b = *esi_1
    void* esi_3 = &esi_1[1]
    char temp0_1
    char temp1_1
    temp0_1, temp1_1, eflags_1 = __aad_immb(0x11, eax_2.b, eax_2:1.b)
    eax_2.b = temp0_1
    eax_2:1.b = temp1_1
    *(ebp - 1 + (edx_2 << 2) - 0x42) ^= edx_2
    *(entry_ebx - 0x281c7d68) += eax_2.b
    bool c_2 = ecx_3.b u< entry_ebx:1.b
    ebp -= 2
    arg5 = x87_r1 * fconvert.t(*edx_2)
    eax_2.b = *esi_3
    esi_1 = esi_3 + 1
    eax_2.b = *(entry_ebx + eax_2)
    int32_t temp7_1 = *ecx_3
    *ecx_3 = adc.d(temp7_1, esi_1, c_2)
    c_3 = adc.d(temp7_1, esi_1, c_2) u< temp7_1 || (c_2 && adc.d(temp7_1, esi_1, c_2) == temp7_1)
    
    if (ecx_3 != 0)
        break
    
    *(eax_2 + 0x32d7e37f) = sbb.d(*(eax_2 + 0x32d7e37f), 0xffffffd7, c_3)

eax_2.b = __salc(eflags_1)
eax_2.b = *(entry_ebx + eax_2)

while (true)
    ebp -= 1
    arg5 = arg5 * fconvert.t(*edx_2)
    eax_2.b = *esi_1
    *ecx_3 = rlc.d(*ecx_3, 1, c_3)
    *(edx_2 - 0x7cff4173) ^= &esi_1[0x84988300]
    char temp0_3 = entry_ebx.b
    entry_ebx.b = sx.d(eax_2.w):1.b
    eax_2:1.b = temp0_3
    eax_2.b = *(entry_ebx + eax_2)
    unimplemented  {enter 0x4dd7, 0xd8}
    *(entry_ebx + (edx_2 << 3) - 0x726bceef)
    ecx_3:1.b |= *(entry_ebx + (edx_2 << 3) - 0x726bceef)
    esi_1 = 0x88988300
    
    if (ecx_3 != 0)
        break
    
    eax_2[-0xa4a071f] = sbb.d(eax_2[-0xa4a071f], 0xffffffd7, false)
    c_3 = unimplemented  {sbb dword [eax-0x29281c7c], 0xffffffd7}

__cli(eflags_1)
eax_2.b = *(entry_ebx + eax_2)
eax_2.b = *0x88988300
void* const esi_5 = 0x88988301
*ecx_3 = fconvert.d(arg5 * fconvert.t(*edx_2))
*(esi_5 - 0x7cff4173) ^= eax_2
int32_t eax_3 = sx.d(eax_2.w)
entry_ebx.b = *(eax_3 + 0x16372c5a)
eax_3.b = *(entry_ebx + eax_3)
char temp11 = eax_3.b
eax_3.b |= 0x6a
bool p = unimplemented  {or al, 0x6a}
bool a = undefined
bool d
int32_t var_2c = (d ? 1 : 0) << 0xa | ((temp11 | 0x6a) s< 0 ? 1 : 0) << 7
    | ((temp11 | 0x6a) == 0 ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
uint32_t var_30 = zx.d(ds)
ecx_3:1.b = 0x41
*(edx_2 + 0x11f06818) = rrc.d(*(edx_2 + 0x11f06818), 0x93, false)
void* var_34 = entry_ebx
undefined
