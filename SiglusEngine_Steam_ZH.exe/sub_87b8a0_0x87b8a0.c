// 函数: sub_87b8a0
// 地址: 0x87b8a0
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
                        int32_t var_f8
                        int32_t var_ec
                        int32_t eax_10 = var_f8 +
                            *(((edx_6 + *(((ebx_16 - edx_6) << 2) + eax_6) - var_f8) << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_25 = eax_10 + var_88
                        int32_t ebx_33
                        
                        if (eax_10 + var_88 s< 0)
                            if (ebx_25 s< 0xffffff01)
                                ebx_25 = 0xffffff01
                            
                            int32_t ebx_36
                            ebx_36.b = edi[2]
                            ebx_33 = *((ebx_36 << 2) + *((ebx_25 << 2) + data_4ced578))
                        else
                            if (ebx_25 s> 0xff)
                                ebx_25 = 0xff
                            
                            int32_t ebx_28
                            ebx_28.b = edi[2]
                            ebx_33 =
                                *(((ebx_28 - 0xff) << 2) + *((ebx_25 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_13
                        eax_13.b = edi[2]
                        edi[2] = eax_13.b + (*(((ebx_33 - eax_13) << 2) + edx_2)).b
                        int32_t ebx_42
                        ebx_42.b = esi_1[1]
                        int32_t var_f4
                        int32_t var_e8
                        int32_t eax_18 = var_f4 +
                            *(((edx_6 + *(((ebx_42 - edx_6) << 2) + eax_6) - var_f4) << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_51 = eax_18 + var_84
                        int32_t ebx_59
                        
                        if (eax_18 + var_84 s< 0)
                            if (ebx_51 s< 0xffffff01)
                                ebx_51 = 0xffffff01
                            
                            int32_t ebx_62
                            ebx_62.b = edi[1]
                            ebx_59 = *((ebx_62 << 2) + *((ebx_51 << 2) + data_4ced578))
                        else
                            if (ebx_51 s> 0xff)
                                ebx_51 = 0xff
                            
                            int32_t ebx_54
                            ebx_54.b = edi[1]
                            ebx_59 =
                                *(((ebx_54 - 0xff) << 2) + *((ebx_51 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_21
                        eax_21.b = edi[1]
                        edi[1] = eax_21.b + (*(((ebx_59 - eax_21) << 2) + edx_2)).b
                        int32_t ebx_68
                        ebx_68.b = *esi_1
                        int32_t var_f0
                        int32_t var_e4
                        int32_t eax_26 = var_f0 +
                            *(((edx_6 + *(((ebx_68 - edx_6) << 2) + eax_6) - var_f0) << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_77 = eax_26 + var_80
                        int32_t ebx_85
                        
                        if (eax_26 + var_80 s< 0)
                            if (ebx_77 s< 0xffffff01)
                                ebx_77 = 0xffffff01
                            
                            int32_t ebx_88
                            ebx_88.b = *edi
                            ebx_85 = *((ebx_88 << 2) + *((ebx_77 << 2) + data_4ced578))
                        else
                            if (ebx_77 s> 0xff)
                                ebx_77 = 0xff
                            
                            int32_t ebx_80
                            ebx_80.b = *edi
                            ebx_85 =
                                *(((ebx_80 - 0xff) << 2) + *((ebx_77 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_29
                        eax_29.b = *edi
                        *edi = eax_29.b + (*(((ebx_85 - eax_29) << 2) + edx_2)).b
            
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
