// 函数: sub_5f3450
// 地址: 0x5f3450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
bool cond:0 = *(arg1 + 0xe78) u< 8
*(arg1 + 0xe74) = 0
int32_t* ecx

if (cond:0)
    ecx = arg1 + 0xe64
else
    ecx = *(arg1 + 0xe64)

*ecx = 0
bool cond:1 = *(arg1 + 0xe90) u< 8
*(arg1 + 0xe8c) = 0
int32_t* ecx_1

if (cond:1)
    ecx_1 = arg1 + 0xe7c
else
    ecx_1 = *(arg1 + 0xe7c)

*ecx_1 = 0
void* ecx_2 = data_bac45c
*(arg1 + 0x350) = 0xffffffff
int32_t eax_1 = sub_6980b0(ecx_2, arg1 + 0xe64)
*(arg1 + 0x348) = eax_1
*(arg1 + 0x34c) = sub_697f50(eax_1, arg1 + 0xe7c)
int32_t result
result.b = 1
return result
