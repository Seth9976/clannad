// 函数: sub_466620
// 地址: 0x466620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* (__stdcall** result)(void* arg1) = (**(arg1 + 4))(arg1, 0, 0xac)
*(arg1 + 0x1bc) = result
*result = sub_4665e0
result[1] = sub_466140
result[2] = sub_466450
result[7] = sub_465ee0
result[0x18] = 0
void* ecx = &result[0x19]
int32_t i_1 = 0x10
int32_t i

do
    *(ecx - 0x44) = sub_465ee0
    *ecx = 0
    ecx += 4
    i = i_1
    i_1 -= 1
while (i != 1)
result[8] = sub_465d70
result[0x16] = sub_465d70
*(arg1 + 0xdc) = 0
*(arg1 + 0x94) = 0
*(arg1 + 0x1a4) = 0
result[3] = 0
result[4] = 0
result[6] = 0
result[0x29] = 0
return result
