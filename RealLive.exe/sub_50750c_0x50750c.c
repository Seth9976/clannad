// 函数: sub_50750c
// 地址: 0x50750c
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

void* const* var_4 = &__return_addr
int32_t eflags
int32_t eax = __in_oeax_immb(0xca, eflags)
int32_t esp = &var_4 | (arg4 - 1)
*(esp - 4) = eax
eax:1.b += arg3.b
int32_t entry_ebx
void* edi = *(entry_ebx + (arg2 << 1) - 0x27e26beb)
__paddq_mmxq_memq(arg6, *arg5)
int32_t eflags_1
int16_t temp0_1
temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg3 + 0x5c8ebec6), arg2.w)
*(arg3 + 0x5c8ebec6) = temp0_1
eax.b ^= arg2.b
eax.b = __in_al_dx(arg2.w, eflags_1)
*(esp - 8) = arg2
*arg5
void* esi = arg5 + 4
*(arg3 + 1 + (arg2 << 3) - 0x80) = 0x5d
*(arg3 - 0x26) |= arg4 - 1
__in_oeax_immb(0x5a, eflags_1)
*esi - *edi
void* esi_1 = esi + 1
void* edi_1 = edi + 1
*(arg3 + 1 + (edi << 3) - 0x80) = 0x5d
*(arg3 - 0x26) |= arg4 - 1
__in_oeax_immb(0x5a, eflags_1)
*esi_1 - *edi_1
void* esi_2 = esi_1 + 1
void* edi_2 = edi_1 + 1
*(arg3 + 1 + (edi_1 << 3) - 0x80) = 0x5d
*(arg3 - 0x26) |= arg4 - 1
__in_oeax_immb(0x5a, eflags_1)
*esi_2 - *edi_2
void* esi_3 = esi_2 + 1
void* edi_3 = edi_2 + 1
*(arg3 + 1 + (edi_2 << 3) - 0x80) = 0x5d
*(arg3 - 0x26) |= arg4 - 1
__in_oeax_immb(0x5a, eflags_1)
*esi_3 - *edi_3
void* esi_4 = esi_3 + 1
char* edi_4 = edi_3 + 1
*(arg3 + 1 + (edi_3 << 3) - 0x80) = 0x5d
*(arg3 - 0x26) |= arg4 - 1
__in_oeax_immb(0x5a, eflags_1)
char temp1 = *esi_4
char temp2 = *edi_4
bool p = unimplemented  {cmpsb byte [esi], [edi]}
bool a = unimplemented  {cmpsb byte [esi], [edi]}
void* esi_5 = esi_4 + 1
void* edi_5 = &edi_4[1]
*(arg3 + 1 + (edi_4 << 3) - 0x80) = 0x5d
void* edx_5
edx_5:1.b = 0xce
bool d
*0x9b79cbf = (add_overflow(temp1, neg.b(temp2)) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (temp1 - temp2 s< 0 ? 1 : 0) << 7 | (temp1 == temp2 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (temp1 u< temp2 ? 1 : 0)
entry_ebx:1.b = 9
*(arg3 - 0x26) |= arg4 - 1
__in_oeax_immb(0x5a, eflags_1)
*esi_5 - *edi_5
void* edi_6 = edi_5 + 1
*(arg3 + 1 + (edx_5 << 3) - 0x80) = 0x5d
*(arg3 - 0x26) |= arg4 - 1
int32_t eax_8 = __in_oeax_immb(0x5a, eflags_1)
*(esi_5 + 1) - *edi_6
char* edi_7 = edi_6 + 1
*(arg3 + 1 + (edi_6 << 3) - 0x80) = 0x5d
entry_ebx.b |= (arg3 + 1):1.b
int32_t eflags_2
char temp0_3
temp0_3, eflags_2 = __das(eax_8.b, eflags_1)
eax_8.b = temp0_3
*edi_7 = ror.b(*edi_7, (arg3 + 1).b)
*(arg3 + 1 + (entry_ebx << 3) - 0x1abd21ac) += eax_8
undefined
