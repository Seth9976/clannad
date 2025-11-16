// 函数: sub_881790
// 地址: 0x881790
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
        int32_t temp4_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                int32_t ebx_2
                ebx_2.b = esi_1[2]
                int32_t eax
                eax.b = not.b(ebx_2.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t eax_5 = var_f8 + *(((var_e0
                    + *(((eax + *(((ebx_2 - eax) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_15 = eax_5 + var_88
                char eax_8
                
                if (eax_5 + var_88 s< 0)
                    if (ebx_15 s< 0xffffff01)
                        ebx_15 = 0xffffff01
                    
                    int32_t ebx_24
                    ebx_24.b = edi[2]
                    eax_8 = (*((ebx_24 << 2) + *((ebx_15 << 2) + data_4ced578))).b
                else
                    if (ebx_15 s> 0xff)
                        ebx_15 = 0xff
                    
                    int32_t ebx_18
                    ebx_18.b = edi[2]
                    eax_8 = (*(((ebx_18 - 0xff) << 2) + *((ebx_15 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_8
                int32_t ebx_27
                ebx_27.b = esi_1[1]
                int32_t eax_10
                eax_10.b = not.b(ebx_27.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_15 = var_f4 + *(((var_dc
                    + *(((eax_10 + *(((ebx_27 - eax_10) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_40 = eax_15 + var_84
                char eax_18
                
                if (eax_15 + var_84 s< 0)
                    if (ebx_40 s< 0xffffff01)
                        ebx_40 = 0xffffff01
                    
                    int32_t ebx_49
                    ebx_49.b = edi[1]
                    eax_18 = (*((ebx_49 << 2) + *((ebx_40 << 2) + data_4ced578))).b
                else
                    if (ebx_40 s> 0xff)
                        ebx_40 = 0xff
                    
                    int32_t ebx_43
                    ebx_43.b = edi[1]
                    eax_18 = (*(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_18
                int32_t ebx_52
                ebx_52.b = *esi_1
                int32_t eax_20
                eax_20.b = not.b(ebx_52.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_25 = var_f0 + *(((var_d8
                    + *(((eax_20 + *(((ebx_52 - eax_20) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_65 = eax_25 + var_80
                char eax_28
                
                if (eax_25 + var_80 s< 0)
                    if (ebx_65 s< 0xffffff01)
                        ebx_65 = 0xffffff01
                    
                    int32_t ebx_74
                    ebx_74.b = *edi
                    eax_28 = (*((ebx_74 << 2) + *((ebx_65 << 2) + data_4ced578))).b
                else
                    if (ebx_65 s> 0xff)
                        ebx_65 = 0xff
                    
                    int32_t ebx_68
                    ebx_68.b = *edi
                    eax_28 = (*(((ebx_68 - 0xff) << 2) + *((ebx_65 << 2) + data_4ced578))).b - 1
                
                *edi = eax_28
            
            edi = &edi[4]
            temp4_1 = edx
            edx -= var_44
        while (temp4_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp6_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp6_1 + var_30 s>= 0)
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
