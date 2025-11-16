// 函数: sub_4dfeb0
// 地址: 0x4dfeb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t edi
int32_t var_10 = edi
void* edi_1 = *(esi + 0x1b4)
int32_t eax_1 = arg7 - *arg6
int32_t ecx_1 = *(edi_1 + 0x10)

if (eax_1 u> ecx_1)
    eax_1 = ecx_1

int32_t ecx_2 = *(esi + 0x1c8)
arg1 = nullptr
(*(ecx_2 + 4))(esi, arg2, arg3, arg4, *(edi_1 + 0xc), &arg1, eax_1)
(*(*(esi + 0x1d0) + 4))(esi, *(edi_1 + 0xc), arg5 + (*arg6 << 2), arg1)
void* result = *arg6 + arg1
*arg6 = result
return result
