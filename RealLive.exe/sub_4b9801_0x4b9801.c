// 函数: sub_4b9801
// 地址: 0x4b9801
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg5 - 0x50)
void* eax
char* edx
edx:eax = muls.dp.d(arg1, *(arg5 - 0x50))
bool c = unimplemented  {imul dword [esi-0x50]}
*edx = eax.b
*(eax - 0x67be1bfa) = adc.b(*(eax - 0x67be1bfa), eax:1.b, c)
int32_t cs
*(cs + arg6 + 0x60) s>>= 0x82
*(arg5 - 0x29) &= arg5
int16_t es
*0xeeea46fe = zx.d(es)
int32_t eflags
void* eax_1
eax_1.b = __in_al_dx(edx.w, eflags)
int32_t temp3 = *(arg5 + ((arg4 - 1) << 3))
*(arg5 + ((arg4 - 1) << 3)) |= arg5
bool p = unimplemented  {or dword [esi+ebp*8], esi}
bool a = undefined
bool d
*0xeeea46fa = (d ? 1 : 0) << 0xa | ((temp3 | arg5) s< 0 ? 1 : 0) << 7
    | ((temp3 | arg5) == 0 ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
eax_1.b = *0x89f8e74b
*0xeeea46f6 = 0xeeea46fa
__out_immb_al(0xe4, eax_1.b, eflags)
int32_t edx_1
int16_t ds
edx_1, ds = __lds_gprz_memp(*arg3)
int32_t* edi
int32_t temp0_1
temp0_1, edi = __insd(arg6, edx_1.w, eflags)
*edi = temp0_1
char temp4 = eax_1.b
char temp5 = *eax_1
eax_1.b += *eax_1
*0xeeea46f4 = eax_1
*0xeeea46f0 = arg3
*0xeeea46ec = edx_1
*0xeeea46e8 = __return_addr
*0xeeea46e4 = 0xeeea46e8
*0xeeea46e0 = arg4 - 1
*0xeeea46dc = 0x3145360
*0xeeea46d8 = edi
*0xeeea46d4 = __return_addr
eax_1.b = adc.b(eax_1.b, 1, temp4 + temp5 u< temp4)
eax_1.b = *0x89da874b
*0xeeea46d0 = 0xeeea46d4
__out_immb_al(0xe6, eax_1.b, eflags)
int32_t edx_2
int16_t ds_1
edx_2, ds_1 = __lds_gprz_memp(*arg3)
*eax_1 ^= 0xeeea46d2
char temp6 = *(eax_1 + 0x53)
*(eax_1 + 0x53) += eax_1:1.b
bool c_2 = temp6 + eax_1:1.b u< temp6
char temp7 = eax_1.b
eax_1.b = adc.b(temp7, 7, c_2)
bool c_3 = adc.b(temp7, 7, c_2) u< temp7 || (c_2 && adc.b(temp7, 7, c_2) == temp7)
bool p_1 = unimplemented  {adc al, 0x7}
eax_1.b = *0x89d9834b
*0xeeea46ce = 0xeeea46d2
*0xeeea46ce
int32_t esp = 0xeeea46d0
__out_immb_al(0xe0, eax_1.b, eflags)
int32_t edx_3
int16_t ds_2
edx_3, ds_2 = __lds_gprz_memp(*arg3)

if (not(p_1))
    *0xeeea46cc = eax_1
    *0xeeea46c8 = arg3
    *0xeeea46c4 = edx_3
    *0xeeea46c0 = __return_addr
    *0xeeea46bc = 0xeeea46c0
    *0xeeea46b8 = arg4 - 1
    *0xeeea46b4 = 0x3145360
    *0xeeea46b0 = edi
    *0xeeea46ac = __return_addr
    esp = 0xeeea46ac
else
    char temp8_1 = *(eax_1 + 0x53)
    *(eax_1 + 0x53) += eax_1:1.b
    c_3 = temp8_1 + eax_1:1.b u< temp8_1

eax_1.b = adc.b(eax_1.b, 5, c_3)
eax_1.b = *0x89f8394b
*(esp - 4) = esp
__out_immb_al(0xe2, eax_1.b, eflags)
int32_t edx_4
int16_t ds_3
edx_4, ds_3 = __lds_gprz_memp(*arg3)
int32_t eflags_1
char temp0_2
char temp1_1
temp0_2, temp1_1, eflags_1 = __aad_immb(0x20, eax_1.b, eax_1:1.b)
eax_1.b = temp0_2
eax_1:1.b = temp1_1
char temp9 = *(eax_1 + 0x53)
*(eax_1 + 0x53) += eax_1:1.b
eax_1.b = adc.b(eax_1.b, 0xb, temp9 + eax_1:1.b u< temp9)
eax_1.b = *0x89f82f4b
*(esp - 6) = esp - 2
*(esp - 6)
__out_immb_al(0xec, eax_1.b, eflags_1)
int32_t edx_5
int16_t ds_4
edx_5, ds_4 = __lds_gprz_memp(*arg3)
__out_immb_oeax(0x20, eax_1, eflags_1)
char temp10 = *(eax_1 + 0x53)
*(eax_1 + 0x53) += eax_1:1.b
eax_1.b = adc.b(eax_1.b, 9, temp10 + eax_1:1.b u< temp10)
int32_t eflags_2
int32_t eip
eip, eflags_2 = __into(eflags_1)
edx_5.b = edx_5.b
*(esp - 4)
*(arg4 - 0x6c) += edx_5
undefined
