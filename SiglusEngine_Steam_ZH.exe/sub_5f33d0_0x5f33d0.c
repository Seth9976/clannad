// 函数: sub_5f33d0
// 地址: 0x5f33d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (arg1 + 0xe64 != arg2)
    sub_52e3c0(arg1 + 0xe64, arg2, 0, 0xffffffff)

bool cond:0 = *(arg1 + 0xe90) u< 8
*(arg1 + 0xe8c) = 0
int32_t* eax_1

if (cond:0)
    eax_1 = arg1 + 0xe7c
else
    eax_1 = *(arg1 + 0xe7c)

*eax_1 = 0
void* ecx_1 = data_bac45c
*(arg1 + 0x350) = arg3
int32_t eax_3 = sub_6980b0(ecx_1, arg1 + 0xe64)
*(arg1 + 0x348) = eax_3
*(arg1 + 0x34c) = sub_697f50(eax_3, arg1 + 0xe7c)
int32_t result
result.b = 1
return result
