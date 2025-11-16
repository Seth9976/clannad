// 函数: sub_42f54b
// 地址: 0x42f54b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result = 0
int32_t edi
int32_t var_10 = edi
int32_t* eax = sub_745f3f(0x1c)
int32_t* esi

if (eax == 0)
    esi = nullptr
else
    esi = sub_42f3c6(eax)

if (esi == 0)
    return 0x8007000e

*esi = 1
int32_t* eax_2 = sub_745f3f(4)
esi[1] = eax_2

if (eax_2 != 0)
    *eax_2 = 0xffffffff
    esi[5] = arg2
    esi[3] = *(arg1 + 0x10)
    *(*(arg1 + 0x10) + 8) = esi
    *(arg1 + 0x10) = esi
    
    if (arg3 != 0)
        *arg3 = esi
    
    esi = nullptr
else
    result = 0x8007000e

if (esi != 0)
    sub_42f421(esi, 1)

return result
