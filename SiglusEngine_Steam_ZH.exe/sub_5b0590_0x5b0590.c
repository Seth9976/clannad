// 函数: sub_5b0590
// 地址: 0x5b0590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** ebx = arg2
int32_t esi = ebx[4]
sub_5979b0(arg1, arg1[3] + 4)
int32_t* ecx = *arg1

if (ecx == arg1[1])
    ecx = nullptr

*(ecx + arg1[3]) = esi
arg1[3] += 4
int32_t* result = arg1[3]
void* esi_2 = ebx[4] * 2

if (ebx[5] u>= 8)
    ebx = *ebx

if (esi_2 s> 0)
    sub_5979b0(arg1, result + esi_2)
    int32_t ecx_2 = *arg1
    
    if (ecx_2 == arg1[1])
        ecx_2 = 0
    
    result = sub_748840(arg1[3] + ecx_2, ebx, esi_2)
    arg1[3] += esi_2

return result
