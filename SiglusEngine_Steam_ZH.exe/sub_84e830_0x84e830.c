// 函数: sub_84e830
// 地址: 0x84e830
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
    i = i_1
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp4_1
        
        do
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                void* var_98
                int32_t eax
                eax.b = *(var_98 + var_a0)
                int32_t var_b4
                
                if (var_b4 != 0)
                    eax.b = not.b(eax.b)
                
                char var_b0
                int32_t var_ac
                int32_t eax_2 = (eax << var_b0) + var_ac
                
                if (eax_2 s< 0)
                    eax_2 = 0
                else if (eax_2 s> 0xff)
                    eax_2 = 0xff
                
                if (eax_2 != 0)
                    int32_t var_11c
                    int32_t ebx_10 = *(*((eax_2 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_10 != 0)
                        int32_t edx_2 = *((ebx_10 << 2) + &data_4e3da80)
                        int32_t eax_3
                        eax_3.b = esi_1[2]
                        int32_t eax_5
                        eax_5.b = esi_1[1]
                        int32_t eax_7
                        eax_7.b = *esi_1
                        uint32_t edx_6 = (*(&data_4e3d680 + (eax_3 << 2))
                            + *(&data_4e3e280 + (eax_5 << 2)) + *(&data_4e3de80 + (eax_7 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_9 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_18
                        ebx_18.b = esi_1[2]
                        int32_t eax_11 = edx_6 + *(((ebx_18 - edx_6) << 2) + eax_9)
                        int32_t eax_12
                        eax_12.b = not.b(eax_11.b)
                        int32_t eax_16
                        eax_16.b = edi[2]
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        edi[2] = eax_16.b + (*(((var_e0 + *(((eax_12
                            + *(((eax_11 - eax_12) << 2) + var_d0) - var_e0) << 2) + var_d4) - eax_16)
                            << 2) + edx_2)).b
                        int32_t ebx_34
                        ebx_34.b = esi_1[1]
                        int32_t eax_19 = edx_6 + *(((ebx_34 - edx_6) << 2) + eax_9)
                        int32_t eax_20
                        eax_20.b = not.b(eax_19.b)
                        int32_t eax_24
                        eax_24.b = edi[1]
                        int32_t var_dc
                        edi[1] = eax_24.b + (*(((var_dc + *(((eax_20
                            + *(((eax_19 - eax_20) << 2) + var_d0) - var_dc) << 2) + var_d4) - eax_24)
                            << 2) + edx_2)).b
                        int32_t ebx_50
                        ebx_50.b = *esi_1
                        int32_t eax_27 = edx_6 + *(((ebx_50 - edx_6) << 2) + eax_9)
                        int32_t eax_28
                        eax_28.b = not.b(eax_27.b)
                        int32_t eax_32
                        eax_32.b = *edi
                        int32_t var_d8
                        *edi = eax_32.b + (*(((var_d8 + *(((eax_28
                            + *(((eax_27 - eax_28) << 2) + var_d0) - var_d8) << 2) + var_d4) - eax_32)
                            << 2) + edx_2)).b
            
            int32_t eax_35 = var_a0 + 1
            int32_t var_bc
            
            if (eax_35 s>= var_bc)
                eax_35 = 0
            
            var_a0 = eax_35
            edi = &edi[4]
            temp4_1 = edx
            edx -= var_44
        while (temp4_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp2_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp2_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 = &esi_1[var_20]
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 = &esi_1[ebx]
    
    i_1 = i - 1
while (i != 1)
return result
