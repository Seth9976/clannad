// 函数: sub_600fe0
// 地址: 0x600fe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t var_8_1 = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2f149903, *(arg1 + 0xa4) - *(arg1 + 0xa0))
int32_t edx_3 = edx_2 s>> 6

if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
    *(arg1 + 0xb4) = arg2
    return arg2

int32_t ebx = 0
int32_t eax_8

do
    int32_t* ecx_1 = *(arg1 + 0xa0) + ebx
    void* eax_4
    
    if (arg2 s>= 0)
        eax_4 = arg2
        
        if (arg2 s> 0xff)
            eax_4 = 0xff
    else
        eax_4 = nullptr
    
    int32_t* var_18_1 = ecx_1
    sub_6df430(ecx_1, 1, eax_4, arg3)
    ebx += 0x15c
    var_8_1 += 1
    int32_t eax_5
    int32_t edx_4
    edx_4:eax_5 = muls.dp.d(0x2f149903, *(arg1 + 0xa4) - *(arg1 + 0xa0))
    int32_t edx_5 = edx_4 s>> 6
    eax_8 = (edx_5 u>> 0x1f) + edx_5
while (var_8_1 s< eax_8)

*(arg1 + 0xb4) = arg2
return eax_8
