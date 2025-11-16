// 函数: sub_735aa0
// 地址: 0x735aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
int32_t ecx_1 = arg7 - *arg6
void* esi = *(edi + 0x1a4)
void* eax = *(edi + 0x1b8)

if (ecx_1 u> *(esi + 0x10))
    ecx_1 = *(esi + 0x10)

arg1 = nullptr
(*(eax + 4))(edi, arg2, arg3, arg4, *(esi + 0xc), &arg1, ecx_1)
(*(*(edi + 0x1c0) + 4))(edi, *(esi + 0xc), arg5 + (*arg6 << 2), arg1)
void* result = arg1
*arg6 += result
return result
