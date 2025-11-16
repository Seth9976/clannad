// 函数: sub_53d16f
// 地址: 0x53d16f
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*0xfbd83e54 = arg1
*arg4
int32_t eflags
uint8_t* edi_1
uint8_t temp0
temp0, edi_1 = __insb(arg4 + 1, arg2.w, eflags)
*edi_1 = temp0
void* ecx = __return_addr + 1
*arg1 += arg1.b
__return_addr = arg1
void* var_4 = ecx
int32_t var_8 = arg2
int32_t entry_ebx
int32_t var_c = entry_ebx - 1
int32_t* var_10 = &var_c
*edi_1 = *arg3
void* esi = &arg3[1]
int32_t eax
int16_t edx
eax, edx = esi(edi_1, arg3)
__outsd(edx, *esi, esi, eflags)
eax.b = ror.b(eax.b, 0x74)
int16_t var_26[0x5]
ss
var_26[eax * 2] = ss
edi_1[1] = eax.b
undefined
