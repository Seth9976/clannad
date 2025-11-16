// 函数: sub_6e1c10
// 地址: 0x6e1c10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x14)

if (eax == 0 || *(eax + 0xc) s<= 0)
    return 0

int32_t edx = *(arg1 + 0x1c)
void* result_1 = *(eax + 0xc) - edx
void* result = arg3

if (result s< 0)
    result = nullptr
else if (result s> result_1)
    result = result_1

void* ecx_1 = *(eax + 0x10)

if (ecx_1 == *(eax + 0x14))
    ecx_1 = nullptr

sub_748840(arg2, ecx_1 + edx, result)
*(arg1 + 0x1c) += result
return result
