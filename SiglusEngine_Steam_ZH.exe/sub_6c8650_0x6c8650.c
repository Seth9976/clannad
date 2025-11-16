// 函数: sub_6c8650
// 地址: 0x6c8650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = *(arg1 + 0x34)
bool cond:1

if (ebx.b == 0)
    cond:1 = *(arg1 + 0x38) != *(arg1 + 0x3c)
else
    cond:1 = *(arg1 + 0x48) != 0

if (cond:1 == 0)
    return 

int32_t edx_1

if (*(arg2 + 0x34) == 0)
    edx_1 = *(arg2 + 0x38)
    
    if (edx_1 == *(arg2 + 0x3c))
        edx_1 = 0
else
    edx_1 = *(arg2 + 0x44)

int32_t eax_2

if (ebx.b == 0)
    eax_2 = *(arg1 + 0x38)
    
    if (eax_2 == *(arg1 + 0x3c))
        eax_2 = 0
else
    eax_2 = *(arg1 + 0x44)

sub_6c97b0(eax_2, *(arg1 + 0x58), eax_2, *(arg1 + 0x5c), edx_1, *(arg2 + 0x58), *(arg2 + 0x5c), 
    arg3, arg4)
