// 函数: sub_9674a0
// 地址: 0x9674a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t eax_1 = *esi_4
    void* esi_1 = &esi_4[1]
    
    if (eax_1 != 0)
        int32_t var_c
        
        if (eax_1 s> 0)
            edi = &edi[var_c]
        else
            edi -= var_c
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[3]
    
    if (ebx_1 != 0)
        int32_t var_11c
        int32_t result_1 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
        
        if (result_1 != 0)
            int32_t ecx_1 = result_1 << 2
            int32_t eax_2
            eax_2.b = edi[3]
            result = eax_2 << 2
            int32_t ecx_5 = *(*(ecx_1 + &data_4dae580) + result)
            
            if (ecx_5 != 0)
                int32_t edx_6 = *(*(ecx_1 + &data_4dee980) + result)
                int32_t eax_3
                eax_3.b = var_18[2]
                int32_t eax_5
                eax_5.b = var_18[1]
                int32_t eax_7
                eax_7.b = *var_18
                uint32_t edx_10 = (*(&data_4e3d680 + (eax_3 << 2)) + *(&data_4e3e280 + (eax_5 << 2))
                    + *(&data_4e3de80 + (eax_7 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_9 = *(&data_4e3da80 + var_cc)
                int32_t ebx_12
                ebx_12.b = var_18[2]
                int32_t var_f8
                int32_t var_ec
                int32_t eax_13 = var_f8
                    + *(((edx_10 + *(((ebx_12 - edx_10) << 2) + eax_9) - var_f8) << 2) + var_ec)
                int32_t ebx_21
                ebx_21.b = var_18[1]
                int32_t var_f4
                int32_t var_e8
                int32_t eax_17 = var_f4
                    + *(((edx_10 + *(((ebx_21 - edx_10) << 2) + eax_9) - var_f4) << 2) + var_e8)
                int32_t ebx_30
                ebx_30.b = *var_18
                int32_t var_f0
                int32_t var_e4
                int32_t eax_21 = var_f0
                    + *(((edx_10 + *(((ebx_30 - edx_10) << 2) + eax_9) - var_f0) << 2) + var_e4)
                result = result_1
                
                if (result != 0xff)
                    int32_t ebx_44
                    ebx_44.b = edi[3]
                    
                    if (ebx_44 != 0)
                        int32_t eax_24 = *((result << 2) + &data_4d6e180)
                        *((eax_17 << 2) + eax_24)
                        *((eax_21 << 2) + eax_24)
                        int32_t eax_25
                        eax_25.b = edi[2]
                        edi[2] = (divu.dp.d(mulu.dp.d(eax_25, edx_6), ecx_5)).b
                        int32_t eax_30
                        eax_30.b = edi[1]
                        edi[1] = (divu.dp.d(mulu.dp.d(eax_30, edx_6), ecx_5)).b
                        int32_t eax_35
                        eax_35.b = *edi
                        result = divu.dp.d(mulu.dp.d(eax_35, edx_6), ecx_5)
                        *edi = result.b
                        edi[3] = ecx_5.b
                    else
                        edi[2] = eax_13.b
                        edi[1] = eax_17.b
                        *edi = eax_21.b
                        edi[3] = result.b
                else
                    edi[2] = eax_13.b
                    edi[1] = eax_17.b
                    *edi = eax_21.b
                    edi[3] = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
