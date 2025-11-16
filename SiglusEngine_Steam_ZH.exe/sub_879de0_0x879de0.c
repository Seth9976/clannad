// 函数: sub_879de0
// 地址: 0x879de0
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
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t eax_3 = var_f8
                    + *(((var_e0 + *(((ebx_2 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_11 = eax_3 + var_88
                char eax_6
                
                if (eax_3 + var_88 s< 0)
                    if (ebx_11 s< 0xffffff01)
                        ebx_11 = 0xffffff01
                    
                    int32_t ebx_20
                    ebx_20.b = edi[2]
                    eax_6 = (*((ebx_20 << 2) + *((ebx_11 << 2) + data_4ced578))).b
                else
                    if (ebx_11 s> 0xff)
                        ebx_11 = 0xff
                    
                    int32_t ebx_14
                    ebx_14.b = edi[2]
                    eax_6 = (*(((ebx_14 - 0xff) << 2) + *((ebx_11 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_6
                int32_t ebx_23
                ebx_23.b = esi_1[1]
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_11 = var_f4
                    + *(((var_dc + *(((ebx_23 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_32 = eax_11 + var_84
                char eax_14
                
                if (eax_11 + var_84 s< 0)
                    if (ebx_32 s< 0xffffff01)
                        ebx_32 = 0xffffff01
                    
                    int32_t ebx_41
                    ebx_41.b = edi[1]
                    eax_14 = (*((ebx_41 << 2) + *((ebx_32 << 2) + data_4ced578))).b
                else
                    if (ebx_32 s> 0xff)
                        ebx_32 = 0xff
                    
                    int32_t ebx_35
                    ebx_35.b = edi[1]
                    eax_14 = (*(((ebx_35 - 0xff) << 2) + *((ebx_32 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_14
                int32_t ebx_44
                ebx_44.b = *esi_1
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_19 = var_f0
                    + *(((var_d8 + *(((ebx_44 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_53 = eax_19 + var_80
                char eax_22
                
                if (eax_19 + var_80 s< 0)
                    if (ebx_53 s< 0xffffff01)
                        ebx_53 = 0xffffff01
                    
                    int32_t ebx_62
                    ebx_62.b = *edi
                    eax_22 = (*((ebx_62 << 2) + *((ebx_53 << 2) + data_4ced578))).b
                else
                    if (ebx_53 s> 0xff)
                        ebx_53 = 0xff
                    
                    int32_t ebx_56
                    ebx_56.b = *edi
                    eax_22 = (*(((ebx_56 - 0xff) << 2) + *((ebx_53 << 2) + data_4ced578))).b - 1
                
                *edi = eax_22
            
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
