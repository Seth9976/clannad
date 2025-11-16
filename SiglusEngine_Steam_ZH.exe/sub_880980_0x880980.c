// 函数: sub_880980
// 地址: 0x880980
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
                        int32_t var_88
                        int32_t ebx_21 = eax_8 + var_88
                        int32_t ebx_29
                        
                        if (eax_8 + var_88 s< 0)
                            if (ebx_21 s< 0xffffff01)
                                ebx_21 = 0xffffff01
                            
                            int32_t ebx_32
                            ebx_32.b = edi[2]
                            ebx_29 = *((ebx_32 << 2) + *((ebx_21 << 2) + data_4ced578))
                        else
                            if (ebx_21 s> 0xff)
                                ebx_21 = 0xff
                            
                            int32_t ebx_24
                            ebx_24.b = edi[2]
                            ebx_29 =
                                *(((ebx_24 - 0xff) << 2) + *((ebx_21 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_11
                        eax_11.b = edi[2]
                        edi[2] = eax_11.b + (*(((ebx_29 - eax_11) << 2) + edx_2)).b
                        int32_t ebx_38
                        ebx_38.b = esi_1[1]
                        int32_t eax_14 = edx_6 + *(((ebx_38 - edx_6) << 2) + eax_6)
                        int32_t var_84
                        int32_t ebx_43 = eax_14 + var_84
                        int32_t ebx_51
                        
                        if (eax_14 + var_84 s< 0)
                            if (ebx_43 s< 0xffffff01)
                                ebx_43 = 0xffffff01
                            
                            int32_t ebx_54
                            ebx_54.b = edi[1]
                            ebx_51 = *((ebx_54 << 2) + *((ebx_43 << 2) + data_4ced578))
                        else
                            if (ebx_43 s> 0xff)
                                ebx_43 = 0xff
                            
                            int32_t ebx_46
                            ebx_46.b = edi[1]
                            ebx_51 =
                                *(((ebx_46 - 0xff) << 2) + *((ebx_43 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_17
                        eax_17.b = edi[1]
                        edi[1] = eax_17.b + (*(((ebx_51 - eax_17) << 2) + edx_2)).b
                        int32_t ebx_60
                        ebx_60.b = *esi_1
                        int32_t eax_20 = edx_6 + *(((ebx_60 - edx_6) << 2) + eax_6)
                        int32_t var_80
                        int32_t ebx_65 = eax_20 + var_80
                        int32_t ebx_73
                        
                        if (eax_20 + var_80 s< 0)
                            if (ebx_65 s< 0xffffff01)
                                ebx_65 = 0xffffff01
                            
                            int32_t ebx_76
                            ebx_76.b = *edi
                            ebx_73 = *((ebx_76 << 2) + *((ebx_65 << 2) + data_4ced578))
                        else
                            if (ebx_65 s> 0xff)
                                ebx_65 = 0xff
                            
                            int32_t ebx_68
                            ebx_68.b = *edi
                            ebx_73 =
                                *(((ebx_68 - 0xff) << 2) + *((ebx_65 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_23
                        eax_23.b = *edi
                        *edi = eax_23.b + (*(((ebx_73 - eax_23) << 2) + edx_2)).b
            
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
