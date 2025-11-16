// 函数: sub_5c6a10
// 地址: 0x5c6a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ebx = *(arg1 + 0xb4)
int32_t esi = *(arg1 + 0xb8)
int32_t edi_1 = sx.d(arg2.w) + ebx
int32_t eax_1 = sx.d((arg2 u>> 0x10).w) + esi
*(arg1 + 0xbc) = edi_1
*(arg1 + 0xc0) = eax_1
*(arg1 + 0xac) = edi_1 - ebx
*(arg1 + 0xb0) = eax_1 - esi
sub_5c5560(arg1 + 0xac, arg1 + 0xa4)
int32_t* ecx_1 = *(arg1 + 0x64)

if (ecx_1 != 0)
    (*(*ecx_1 + 0x44))(ecx_1, 1, arg1 + 0xa4)

int32_t* ecx_2 = *(arg1 + 0x74)

if (ecx_2 != 0)
    (*(*ecx_2 + 0x1c))(ecx_2, arg1 + 0xb4, arg1 + 0xb4)

if ((*(arg1 + 0x98) & 8) != 0)
    (*(*(arg1 + 0x2c) + 0x64))(arg1 + 0x2c, 0, 1)

*arg3 = 0
return 0
