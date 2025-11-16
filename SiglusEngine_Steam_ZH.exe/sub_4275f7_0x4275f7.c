// 函数: sub_4275f7
// 地址: 0x4275f7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void* esi

if (*(arg1 + 0x54) == 0)
    esi = arg4
else
    void* eax_1
    int80_t st0_1
    st0_1, eax_1 = sub_41da34(arg1, arg4)
    esi = eax_1

int16_t x87control

if (*(arg1 + 0x10) != 0)
    esi = sub_41ef58(arg1, x87control, esi)
uint32_t edx
edx.b = *(arg1 + 0x9c) != *(arg1 + 0x68)
int32_t eax_5
int80_t result
result, eax_5 = sub_41e24f(arg1, arg2 + *(arg1 + 0x40), arg3 + *(arg1 + 0x4c), edx)

if (eax_5 s>= 0)
    int32_t ecx_4 = *(arg1 + 0x68) << 4
    int32_t esi_1
    int32_t edi_7
    edi_7, esi_1 = __builtin_memcpy(((*(arg1 + 0x3c) - *(arg1 + 0x84)) << 4) + *(arg1 + 0x80), esi, 
        ecx_4 u>> 2 << 2)
    __builtin_memcpy(edi_7, esi_1, ecx_4 & 3)
    *(arg1 + 0xa0) = 1

return result
