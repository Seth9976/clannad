// 函数: sub_4a41db
// 地址: 0x4a41db
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
uint16_t temp0
temp0, eflags = __arpl_gpr16_gpr16(arg1.w, arg2)
arg1.w = temp0
int32_t* esi = __outsd(arg2, *arg4, arg4, eflags)
bool c = *esi u< *arg1
void* esi_1 = &esi[1]
void* edi_1 = &arg1[1]
int32_t temp4 = *(arg3 + 0x2240d7d2)

if (adc.d(arg5, temp4, c) != 0 && adc.d(arg5, temp4, c) u>= arg5
        && (not(c) || adc.d(arg5, temp4, c) != arg5))
    return adc.d(arg5, temp4, c)

int32_t* eax_1
eax_1.b = *0x4d74dcf
*(edi_1 - 0x3d634ae2)
void* var_4 = esi_1
int32_t eax_4 = edi_1
bool c_5 = *esi_1 u< *eax_1
void* esi_4 = esi_1 + 4
int32_t temp8 = *(arg3 + 0x2240d7d2)
int32_t* result = adc.d(eax_4, temp8, c_5)

if (adc.d(eax_4, temp8, c_5) != 0 && adc.d(eax_4, temp8, c_5) u>= eax_4
        && (not(c_5) || adc.d(eax_4, temp8, c_5) != eax_4))
    return result

char temp9 = result.b
result.b -= 0xb
bool c_2 = temp9 u< 0xb

if (add_overflow(temp9, 0xf5))
    result:1.b = 0x38
    int32_t temp12 = *esi_4
    *esi_4 = sbb.d(temp12, 0xffffffb5, c_2)
    bool c_3 = unimplemented  {sbb dword [esi], 0xffffffb5}
    bool p = unimplemented  {sbb dword [esi], 0xffffffb5}
    bool a = unimplemented  {sbb dword [esi], 0xffffffb5}
    bool o_1 = unimplemented  {sbb dword [esi], 0xffffffb5}
    bool d
    int32_t var_8 = (o_1 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (sbb.d(temp12, 0xffffffb5, c_2) s< 0 ? 1 : 0) << 7
        | (sbb.d(temp12, 0xffffffb5, c_2) == 0 ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
        | (c_3 ? 1 : 0)
    return result

int32_t eflags_1
uint16_t temp0_2
temp0_2, eflags_1 = __arpl_gpr16_gpr16(result.w, 0x6441)
result.w = temp0_2
int32_t eax_2 = &eax_1[1]
bool c_4 = *__outsd(0x6441, *esi_4, esi_4, eflags_1) u< *result
int32_t temp13_1
int32_t temp14_1
bool cond:3_1

do
    temp13_1 = eax_2
    temp14_1 = *(arg3 + 0x2240d7d2)
    cond:3_1 = c_4
    eax_2 = adc.d(temp13_1, temp14_1, cond:3_1)
    c_4 = adc.d(temp13_1, temp14_1, cond:3_1) u< temp13_1
        || (cond:3_1 && adc.d(temp13_1, temp14_1, cond:3_1) == temp13_1)
while (adc.d(temp13_1, temp14_1, cond:3_1) == 0 || c_4)
return eax_2 - 0x1d0000b5
