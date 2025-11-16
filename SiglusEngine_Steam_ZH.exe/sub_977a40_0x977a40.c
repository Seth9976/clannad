// 函数: sub_977a40
// 地址: 0x977a40
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
                int32_t ebx_8
                ebx_8.b = var_18[2]
                int32_t ebx_9
                ebx_9.b = var_18[1]
                int32_t ebx_10
                ebx_10.b = *var_18
                result = result_1
                
                if (result != 0xff)
                    int32_t ebx_16
                    ebx_16.b = edi[3]
                    
                    if (ebx_16 != 0)
                        int32_t eax_5 = *((result << 2) + &data_4d6e180)
                        *((ebx_9 << 2) + eax_5)
                        *((ebx_10 << 2) + eax_5)
                        int32_t eax_6
                        eax_6.b = edi[2]
                        edi[2] = (divu.dp.d(mulu.dp.d(eax_6, edx_6), ecx_5)).b
                        int32_t eax_11
                        eax_11.b = edi[1]
                        edi[1] = (divu.dp.d(mulu.dp.d(eax_11, edx_6), ecx_5)).b
                        int32_t eax_16
                        eax_16.b = *edi
                        result = divu.dp.d(mulu.dp.d(eax_16, edx_6), ecx_5)
                        *edi = result.b
                        edi[3] = ecx_5.b
                    else
                        edi[2] = ebx_8.b
                        edi[1] = ebx_9.b
                        *edi = ebx_10.b
                        edi[3] = result.b
                else
                    edi[2] = ebx_8.b
                    edi[1] = ebx_9.b
                    *edi = ebx_10.b
                    edi[3] = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
