// 函数: sub_5ffd00
// 地址: 0x5ffd00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0xd4)

if (eax s>= 0)
    int32_t* ecx_1 = eax * 0x15c + *(arg1 + 0xc8)
    
    if (arg2 s> 0)
        int32_t* var_c_1 = ecx_1
        sub_6defc0(ecx_1, arg2)
    else
        sub_6de670(ecx_1, 1)

bool cond:0 = *(arg1 + 0xb4) u< 8
void* result = arg1 + 0xa0
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
*(arg1 + 0xc4) = 0
return result
