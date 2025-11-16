// 函数: sub_625218
// 地址: 0x625218
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

char* temp0 = *arg1
*arg1 = arg3
int32_t eax
eax.b = *temp0
char temp2 = eax.b
eax.b = sbb.b(temp2, 0x20, false)
bool c = unimplemented  {sbb al, 0x20}
bool p = unimplemented  {sbb al, 0x20}
bool a = unimplemented  {sbb al, 0x20}
eax:1.b = (sbb.b(temp2, 0x20, false) s< 0 ? 1 : 0) << 7
    | (sbb.b(temp2, 0x20, false) == 0 ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
    | (c ? 1 : 0)
int32_t eflags
int16_t* entry_ebx
int16_t temp0_1
temp0_1, eflags = __arpl_memw_gpr16(*entry_ebx, eax.w)
*entry_ebx = temp0_1
int32_t temp3 = *((eax << 1) + 0x455b0f98)
*((eax << 1) + 0x455b0f98) = adc.d(temp3, 0x55d97d9a, c)
bool c_1 = adc.d(temp3, 0x55d97d9a, c) u< temp3 || (c && adc.d(temp3, 0x55d97d9a, c) == temp3)
bool p_1 = unimplemented  {adc dword [eax*2+0x455b0f98], 0x55d97d9a}
bool a_1 = unimplemented  {adc dword [eax*2+0x455b0f98], 0x55d97d9a}
__out_dx_oeax(__return_addr:2.w, eax, eflags)
eax:1.b = (adc.d(temp3, 0x55d97d9a, c) s< 0 ? 1 : 0) << 7
    | (adc.d(temp3, 0x55d97d9a, c) == 0 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2
    | (c_1 ? 1 : 0)
*arg4 = arg2
*(arg2 + 0x355a4949) = arg4

if (not(c_1))
    breakpoint

eax.b = sbb.b(eax.b, 0xba, test_bit(arg6, 0))
int32_t eax_1
char edx_2
edx_2:eax_1 = muls.dp.d(eax, *entry_ebx)
int32_t edx_1 = eax_1
int32_t eflags_1
char temp0_4
temp0_4, eflags_1 = __daa(edx_2, eflags)
char temp4_1
char temp5_1

while (true)
    temp4_1 = entry_ebx.b
    temp5_1 = *arg5
    entry_ebx.b += *arg5
    
    if (temp4_1 != neg.b(temp5_1))
        break
    
    edx_1 = 0x27922bf7

int32_t gsbase
void* ecx_1 = adc.d(arg5, *(gsbase + edx_1 + 0x41), temp4_1 + temp5_1 u< temp4_1)
*(ecx_1 + 6) s>>= ecx_1.b
int16_t ds
arg6 = zx.d(ds)
undefined
