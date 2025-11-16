// 函数: sub_705f10
// 地址: 0x705f10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t** eax = *(arg1 + 0x1c)
sub_70c7b0(arg1 + 0x1c, &var_8, *eax, eax)
int32_t result = j__free(*(arg1 + 0x1c))

if (*(arg1 + 0x18) u>= 0x10)
    result = j__free(*(arg1 + 4))

*(arg1 + 0x18) = 0xf
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
return result
