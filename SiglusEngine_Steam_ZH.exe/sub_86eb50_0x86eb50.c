// 函数: sub_86eb50
// 地址: 0x86eb50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_3c
char* esi_1 = var_3c
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t result_1
int32_t result = result_1
int32_t var_34
int32_t ebx = var_34
int32_t var_28
int32_t i_1 = var_28 + 1
int32_t i

do
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp2_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                int32_t ebx_2
                ebx_2.b = esi_1[3]
                
                if (ebx_2 != 0)
                    int32_t var_11c
                    int32_t ebx_8 = *(*((ebx_2 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_8 != 0)
                        int32_t edx_2 = *((ebx_8 << 2) + &data_4e3da80)
                        int32_t eax
                        eax.b = esi_1[2]
                        int32_t eax_2
                        eax_2.b = esi_1[1]
                        int32_t eax_4
                        eax_4.b = *esi_1
                        uint32_t edx_6 = (*(&data_4e3d680 + (eax << 2))
                            + *(&data_4e3e280 + (eax_2 << 2)) + *(&data_4e3de80 + (eax_4 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_6 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_16
                        ebx_16.b = esi_1[2]
                        int32_t eax_8 = edx_6 + *(((ebx_16 - edx_6) << 2) + eax_6)
                        int32_t eax_9
                        eax_9.b = not.b(eax_8.b)
                        int32_t eax_13
                        eax_13.b = edi[2]
                        int32_t var_f8
                        int32_t var_ec
                        int32_t var_d0
                        int32_t eax_14 = eax_13 - *((neg.d(var_f8 +
                            *(((eax_9 + *(((eax_8 - eax_9) << 2) + var_d0) - var_f8) << 2) + var_ec)
                            - 0xff) << 2) + edx_2)
                        
                        if (eax_14 s< 0)
                            eax_14 = 0
                        
                        edi[2] = eax_14.b
                        int32_t ebx_34
                        ebx_34.b = esi_1[1]
                        int32_t eax_16 = edx_6 + *(((ebx_34 - edx_6) << 2) + eax_6)
                        int32_t eax_17
                        eax_17.b = not.b(eax_16.b)
                        int32_t eax_21
                        eax_21.b = edi[1]
                        int32_t var_f4
                        int32_t var_e8
                        int32_t eax_22 = eax_21 - *((neg.d(var_f4 + *(((eax_17
                            + *(((eax_16 - eax_17) << 2) + var_d0) - var_f4) << 2) + var_e8) - 0xff)
                            << 2) + edx_2)
                        
                        if (eax_22 s< 0)
                            eax_22 = 0
                        
                        edi[1] = eax_22.b
                        int32_t ebx_52
                        ebx_52.b = *esi_1
                        int32_t eax_24 = edx_6 + *(((ebx_52 - edx_6) << 2) + eax_6)
                        int32_t eax_25
                        eax_25.b = not.b(eax_24.b)
                        int32_t eax_29
                        eax_29.b = *edi
                        int32_t var_f0
                        int32_t var_e4
                        int32_t eax_30 = eax_29 - *((neg.d(var_f0 + *(((eax_25
                            + *(((eax_24 - eax_25) << 2) + var_d0) - var_f0) << 2) + var_e4) - 0xff)
                            << 2) + edx_2)
                        
                        if (eax_30 s< 0)
                            eax_30 = 0
                        
                        *edi = eax_30.b
            
            edi = &edi[4]
            temp2_1 = edx
            edx -= var_44
        while (temp2_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp4_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp4_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 = &esi_1[var_20]
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 = &esi_1[ebx]
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
