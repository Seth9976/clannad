// 函数: sub_5d4ee0
// 地址: 0x5d4ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t** ebx = arg1
int32_t esi_2 = (arg2[1] - *arg2) s>> 2
sub_5979b0(arg1, &ebx[3][1])
int32_t* ecx = *ebx

if (ecx == ebx[1])
    ecx = nullptr

*(ecx + ebx[3]) = esi_2
ebx[3] = &ebx[3][1]
int32_t* result = *arg2
int32_t esi_3 = arg2[1]
int32_t* result_1 = result

if (result == esi_3)
    result_1 = nullptr

void* esi_5 = (esi_3 - result) & 0xfffffffc

if (esi_5 s> 0)
    sub_5979b0(ebx, ebx[3] + esi_5)
    int32_t* ecx_3 = *ebx
    
    if (ecx_3 == ebx[1])
        ecx_3 = nullptr
    
    result = sub_748840(ebx[3] + ecx_3, result_1, esi_5)
    ebx[3] += esi_5

return result
