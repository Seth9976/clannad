// 函数: sub_65b250
// 地址: 0x65b250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t eax = arg2 * 0x158
int32_t edi = *(arg1 + 4)
void* ebx_1 = edi - eax
void* esi = ebx_1

if (ebx_1 == edi)
    *(arg1 + 4) = ebx_1
    return eax

do
    sub_54ae40(esi + 0x8c)
    esi += 0x158
while (esi != edi)

*(arg1 + 4) = ebx_1
return arg1
