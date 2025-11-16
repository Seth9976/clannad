// 函数: sub_53d110
// 地址: 0x53d110
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*arg5
int32_t eflags
uint8_t* edi_1
uint8_t temp0
temp0, edi_1 = __insb(arg5 + 1, arg2.w, eflags)
*edi_1 = temp0
*arg1 += arg1.b
char* var_4 = arg1
int32_t var_8 = arg3 + 1
int32_t var_c = arg2
int32_t entry_ebx
int32_t var_10 = entry_ebx - 1
int32_t* var_14 = &var_10
*edi_1 = *arg4
void* esi = &arg4[1]
char eax
int16_t edx
eax, edx = esi(edi_1, arg4)
__outsd(edx, *esi, esi, eflags)
undefined
