// 函数: sub_49c3e0
// 地址: 0x49c3e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = &data_8d02b4
int32_t result = 0
int32_t* ecx = &data_f466f8
int32_t* var_10 = &data_8d02b4
int32_t* var_c = &data_f466f8
int32_t result_1 = 0
int32_t i = 0
int32_t* var_14 = &data_8d02b4

do
    for (int32_t j = 0; j s< 2; )
        void* esi_2 = j * 0x2c80 + edx
        
        if (*esi_2 != 0 && *(esi_2 + 8) == 0)
            if (j != 0)
                if (i u<= 0x38)
                    sub_49a750(result, 0)
                    sub_4d1c30(var_14, &var_14[0xb20], var_14, 0x2c80)
                    sub_4d1c30(result_1, &(&data_f466fc)[result_1 * 2], 
                        &(&data_f466f8)[result_1 * 2], 4)
                    sub_49a6d0(result_1, 1)
                    result = result_1
                    (&data_20f0094)[result * 2] += 1
                    (&data_20f0098)[result * 2] += 1
            else if (*(esi_2 + 0xc) != j)
                if (*(esi_2 + 0x2c74) != 0xffffffff)
                    *ecx = 1
                
                *(i + &data_20f0094) += 1
            else
                sub_49a750(result, 0)
                result = result_1
                *(i + &data_20f0094) += 1
        
        ecx = var_c
        j += 1
        edx = var_10
        *(esi_2 + 0xc) = 1
        *(esi_2 + 0x10) = 0
    
    var_14 = &var_14[0x1640]
    ecx = &ecx[2]
    edx = &edx[0x1640]
    var_c = ecx
    result += 1
    var_10 = edx
    i += 8
    result_1 = result
while (i s< 0x40)

return result
