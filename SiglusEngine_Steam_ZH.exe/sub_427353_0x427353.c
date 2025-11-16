// 函数: sub_427353
// 地址: 0x427353
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = *(arg1 + 0x68) << 4
int32_t edi
int32_t var_10 = edi
int32_t esi_4
int32_t edi_2
edi_2, esi_4 = __builtin_memcpy(arg4, 
    *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20), ecx_1 u>> 2 << 2)
__builtin_memcpy(edi_2, esi_4, ecx_1 & 3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, arg4)

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, arg4)
