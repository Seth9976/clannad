// 函数: sub_497b60
// 地址: 0x497b60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* eax = arg1[1]
int32_t ebx_1 = arg3 << 7
int32_t edi
int32_t var_14 = edi
uint32_t i_2 = divu.dp.d(0:0x3b9ac9f0, ebx_1)

if (i_2 s<= 0)
    void* eax_3 = *arg1
    *(eax_3 + 0x14) = 0x46
    (*eax_3)(arg1)

if (i_2 s>= arg4)
    i_2 = arg4

*(eax + 0x50) = i_2
void* result = sub_4978c0(arg1, arg2, arg4 << 2)
int32_t esi_1 = 0

if (arg4 u<= 0)
    return result

do
    uint32_t i_3 = arg4 - esi_1
    
    if (i_2 u>= i_3)
        i_2 = i_3
    
    void* eax_8 = sub_497a00(arg1, arg2, (i_2 * arg3) << 7)
    
    if (i_2 u> 0)
        uint32_t i_1 = i_2
        uint32_t i
        
        do
            *(result + (esi_1 << 2)) = eax_8
            esi_1 += 1
            eax_8 += ebx_1
            i = i_1
            i_1 -= 1
        while (i != 1)
while (esi_1 u< arg4)

return result
