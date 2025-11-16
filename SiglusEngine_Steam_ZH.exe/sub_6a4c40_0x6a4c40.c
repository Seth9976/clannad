// 函数: sub_6a4c40
// 地址: 0x6a4c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg1[1] - *arg1
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

*(ecx_1 + arg2[3]) = esi_1
arg2[3] += 4
int32_t* result = *arg1
int32_t esi_2 = arg1[1]
int32_t* result_1 = result

if (result == esi_2)
    result_1 = nullptr

void* esi_3 = esi_2 - result

if (esi_3 s> 0)
    sub_5979b0(arg2, arg2[3] + esi_3)
    int32_t ecx_4 = *arg2
    
    if (ecx_4 == arg2[1])
        ecx_4 = 0
    
    result = sub_748840(arg2[3] + ecx_4, result_1, esi_3)
    arg2[3] += esi_3

return result
