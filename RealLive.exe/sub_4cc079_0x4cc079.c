// 函数: sub_4cc079
// 地址: 0x4cc079
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

unimplemented  {enter 0x1e3a, 0x36}
arg1.b = 0x84
__bound_gprv_mema32(&__return_addr, *(arg3 - 0x30))
int32_t eflags
__in_al_dx(arg2.w, eflags)
*(arg5 - 0x62) = rlc.b(*(arg5 - 0x62), 1, false)
void* const __return_addr_1 = __return_addr
uint16_t eax_1
int32_t ecx
void* edx_1
eax_1, edx_1, ecx = (*(arg5 - 0x7c))()
int16_t ds
*(__return_addr_1 - 4) = zx.d(ds)
int16_t entry_ebx
eax_1.b ^= entry_ebx:1.b
ecx.b = 0x84
int32_t* edi
int32_t temp0_1
temp0_1, edi = __insd(arg5, edx_1.w, eflags)
*edi = temp0_1
int32_t eflags_1
uint16_t temp0_2
temp0_2, eflags_1 = __arpl_gpr16_gpr16(eax_1, edx_1.w)
eax_1.b = __in_al_dx(edx_1.w, eflags_1)
edi[-0x19].b = rlc.b(edi[-0x19].b, 1, false)
int32_t esp_2 = *(__return_addr_1 - 4)
int32_t eflags_2
int32_t eip
eip, eflags_2 = __into(eflags_1)
*(esp_2 - 4) = ecx
*arg4
eax_1.b ^= 0x84
ecx.b = 0x84
char temp4 = eax_1:1.b
char temp5 = *(edx_1 - 0x2f)
eax_1:1.b = adc.b(temp4, temp5, false)
eax_1.b = __in_al_dx((edx_1 + 1).w, eflags_2)
*(edi - 0x66) = rlc.b(*(edi - 0x66), 1, adc.b(temp4, temp5, false) u< temp4)
bool c_1 = unimplemented  {rcl byte [edi-0x66], 0x1}
int32_t* esp_4 = *(esp_2 - 4)
*(arg4 - 0x7c) = adc.b(*(arg4 - 0x7c), 0x1e, c_1)
eax_1.b ^= entry_ebx.b
ecx.b = 0x84
eax_1.b -= 0x65
char temp7 = eax_1:1.b
eax_1:1.b u>>= 1
edi[-0x1a].b = rlc.b(edi[-0x1a].b, 1, (temp7 & 1) != 0)
int32_t esp_5 = *esp_4
*edi = eax_1.b
void* edi_1 = edi + 1
*(esp_5 - 4) = ecx
*arg4
ecx.b = 0x84 ^ ecx:1.b
ecx.b = 0x84
eax_1:1.b = sbb.b(eax_1:1.b, *(arg3 - 0x30), false)
bool c_3 = unimplemented  {sbb ah, byte [ebp-0x30]}
eax_1.b = __in_al_dx((edx_1 + 3).w, eflags_2)
*(edi_1 - 0x6a) = rlc.b(*(edi_1 - 0x6a), 1, c_3)
*(*(esp_5 - 4) - 4) = ecx
*arg4
ecx.b = 0x84 ^ entry_ebx:1.b
undefined
