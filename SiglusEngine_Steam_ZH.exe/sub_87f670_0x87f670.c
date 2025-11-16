// 函数: sub_87f670
// 地址: 0x87f670
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
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_12 = var_e0 +
                            *(((eax_9 + *(((eax_8 - eax_9) << 2) + var_d0) - var_e0) << 2) + var_d4)
                        int32_t var_88
                        int32_t ebx_29 = eax_12 + var_88
                        int32_t ebx_37
                        
                        if (eax_12 + var_88 s< 0)
                            if (ebx_29 s< 0xffffff01)
                                ebx_29 = 0xffffff01
                            
                            int32_t ebx_40
                            ebx_40.b = edi[2]
                            ebx_37 = *((ebx_40 << 2) + *((ebx_29 << 2) + data_4ced578))
                        else
                            if (ebx_29 s> 0xff)
                                ebx_29 = 0xff
                            
                            int32_t ebx_32
                            ebx_32.b = edi[2]
                            ebx_37 =
                                *(((ebx_32 - 0xff) << 2) + *((ebx_29 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_15
                        eax_15.b = edi[2]
                        edi[2] = eax_15.b + (*(((ebx_37 - eax_15) << 2) + edx_2)).b
                        int32_t ebx_46
                        ebx_46.b = esi_1[1]
                        int32_t eax_18 = edx_6 + *(((ebx_46 - edx_6) << 2) + eax_6)
                        int32_t eax_19
                        eax_19.b = not.b(eax_18.b)
                        int32_t var_dc
                        int32_t eax_22 = var_dc + *(((eax_19 + *(((eax_18 - eax_19) << 2) + var_d0)
                            - var_dc) << 2) + var_d4)
                        int32_t var_84
                        int32_t ebx_59 = eax_22 + var_84
                        int32_t ebx_67
                        
                        if (eax_22 + var_84 s< 0)
                            if (ebx_59 s< 0xffffff01)
                                ebx_59 = 0xffffff01
                            
                            int32_t ebx_70
                            ebx_70.b = edi[1]
                            ebx_67 = *((ebx_70 << 2) + *((ebx_59 << 2) + data_4ced578))
                        else
                            if (ebx_59 s> 0xff)
                                ebx_59 = 0xff
                            
                            int32_t ebx_62
                            ebx_62.b = edi[1]
                            ebx_67 =
                                *(((ebx_62 - 0xff) << 2) + *((ebx_59 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_25
                        eax_25.b = edi[1]
                        edi[1] = eax_25.b + (*(((ebx_67 - eax_25) << 2) + edx_2)).b
                        int32_t ebx_76
                        ebx_76.b = *esi_1
                        int32_t eax_28 = edx_6 + *(((ebx_76 - edx_6) << 2) + eax_6)
                        int32_t eax_29
                        eax_29.b = not.b(eax_28.b)
                        int32_t var_d8
                        int32_t eax_32 = var_d8 + *(((eax_29 + *(((eax_28 - eax_29) << 2) + var_d0)
                            - var_d8) << 2) + var_d4)
                        int32_t var_80
                        int32_t ebx_89 = eax_32 + var_80
                        int32_t ebx_97
                        
                        if (eax_32 + var_80 s< 0)
                            if (ebx_89 s< 0xffffff01)
                                ebx_89 = 0xffffff01
                            
                            int32_t ebx_100
                            ebx_100.b = *edi
                            ebx_97 = *((ebx_100 << 2) + *((ebx_89 << 2) + data_4ced578))
                        else
                            if (ebx_89 s> 0xff)
                                ebx_89 = 0xff
                            
                            int32_t ebx_92
                            ebx_92.b = *edi
                            ebx_97 =
                                *(((ebx_92 - 0xff) << 2) + *((ebx_89 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_35
                        eax_35.b = *edi
                        *edi = eax_35.b + (*(((ebx_97 - eax_35) << 2) + edx_2)).b
            
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
