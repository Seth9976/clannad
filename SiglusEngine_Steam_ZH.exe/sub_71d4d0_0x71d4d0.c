// 函数: sub_71d4d0
// 地址: 0x71d4d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *arg1
int32_t* edi = edx + arg2 * 0xc
void* eax_3 = edx + *edi * 0xc

if (*(eax_3 + 4) != arg2)
    *(eax_3 + 8) = arg3
else
    *(eax_3 + 4) = arg3

int32_t eax_4 = *arg1
int32_t ecx = arg3 * 3
*(eax_4 + (ecx << 2)) = *edi
*(eax_4 + (ecx << 2) + 8) = edi[2]
*(*arg1 + edi[1] * 0xc) = arg3
*(*arg1 + edi[2] * 0xc) = arg3
int32_t result = arg1[5]
*edi = result
return result
