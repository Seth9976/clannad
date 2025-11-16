// 函数: sub_7352f0
// 地址: 0x7352f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = *(arg1 + 0x19c)
int32_t ebx = *(arg1 + 0x124)
int32_t eax_3 = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) << 3)
*(edi + 0x38) = eax_3
int32_t i_1 = 0
int32_t result = eax_3 + (*(arg1 + 0x24) << 2)
*(edi + 0x3c) = result

if (*(arg1 + 0x24) s> 0)
    int32_t ebx_1 = ebx + 4
    int32_t* ecx_3 = *(arg1 + 0xc4) + 0xc
    int32_t var_14_1 = ebx_1
    int32_t* var_c_1 = ecx_3
    int32_t i
    
    do
        int32_t temp0_1 = divs.dp.d(sx.q(ecx_3[7] * *ecx_3), *(arg1 + 0x124))
        int32_t ebx_2 = ebx_1 * temp0_1
        int32_t ecx_6 = (**(arg1 + 4))(arg1, 1, ebx_2 << 3) + (temp0_1 << 2)
        *(*(edi + 0x38) + (i_1 << 2)) = ecx_6
        result = *(edi + 0x3c)
        ebx_1 = var_14_1
        *(result + (i_1 << 2)) = ecx_6 + (ebx_2 << 2)
        i = i_1 + 1
        ecx_3 = &var_c_1[0x16]
        i_1 = i
        var_c_1 = ecx_3
    while (i s< *(arg1 + 0x24))

return result
