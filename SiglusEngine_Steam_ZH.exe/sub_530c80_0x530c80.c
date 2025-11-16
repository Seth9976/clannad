// 函数: sub_530c80
// 地址: 0x530c80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = nullptr

if (arg2 != 0)
    if (arg2 u<= 0x3fffffff)
        esi = sub_745f3f(arg2 << 2)
    
    if (arg2 u> 0x3fffffff || esi == 0)
        sub_743132()
        noreturn

int32_t* ecx = *arg1
_memcpy(esi, ecx, (arg1[1] - ecx) & 0xfffffffc)
int32_t ecx_1 = *arg1
int32_t eax_8 = (arg1[1] - ecx_1) s>> 2

if (ecx_1 != 0)
    j__free(ecx_1)

*arg1 = esi
arg1[2] = &esi[arg2]
void* result = &esi[eax_8]
arg1[1] = result
return result
