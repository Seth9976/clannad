// 函数: sub_886b80
// 地址: 0x886b80
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
                
                int32_t ebx_2
                ebx_2.b = esi_1[3]
                
                if (ebx_2 != 0)
                    int32_t var_11c
                    int32_t ebx_8 = *(*((ebx_2 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_8 != 0)
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
                            int32_t ebx_19 = *(*((eax_2 << 2) + &data_4e3da80) + (ebx_8 << 2))
                            
                            if (ebx_19 != 0)
                                int32_t edx_2 = *((ebx_19 << 2) + &data_4e3da80)
                                int32_t eax_3
                                eax_3.b = esi_1[2]
                                int32_t eax_5
                                eax_5.b = esi_1[1]
                                int32_t eax_7
                                eax_7.b = *esi_1
                                uint32_t edx_6 = (*(&data_4e3d680 + (eax_3 << 2))
                                    + *(&data_4e3e280 + (eax_5 << 2))
                                    + *(&data_4e3de80 + (eax_7 << 2))) u>> 8
                                int32_t var_cc
                                int32_t eax_9 = *(&data_4e3da80 + var_cc)
                                int32_t ebx_27
                                ebx_27.b = esi_1[2]
                                int32_t var_e0
                                int32_t var_d4
                                int32_t eax_13 = var_e0 + *(((edx_6
                                    + *(((ebx_27 - edx_6) << 2) + eax_9) - var_e0) << 2) + var_d4)
                                int32_t var_88
                                int32_t ebx_36 = eax_13 + var_88
                                int32_t ebx_44
                                
                                if (eax_13 + var_88 s< 0)
                                    if (ebx_36 s< 0xffffff01)
                                        ebx_36 = 0xffffff01
                                    
                                    int32_t ebx_47
                                    ebx_47.b = edi[2]
                                    ebx_44 = *((ebx_47 << 2) + *((ebx_36 << 2) + data_4ced578))
                                else
                                    if (ebx_36 s> 0xff)
                                        ebx_36 = 0xff
                                    
                                    int32_t ebx_39
                                    ebx_39.b = edi[2]
                                    ebx_44 =
                                        *(((ebx_39 - 0xff) << 2) + *((ebx_36 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_16
                                eax_16.b = edi[2]
                                edi[2] = eax_16.b + (*(((ebx_44 - eax_16) << 2) + edx_2)).b
                                int32_t ebx_53
                                ebx_53.b = esi_1[1]
                                int32_t var_dc
                                int32_t eax_21 = var_dc + *(((edx_6
                                    + *(((ebx_53 - edx_6) << 2) + eax_9) - var_dc) << 2) + var_d4)
                                int32_t var_84
                                int32_t ebx_62 = eax_21 + var_84
                                int32_t ebx_70
                                
                                if (eax_21 + var_84 s< 0)
                                    if (ebx_62 s< 0xffffff01)
                                        ebx_62 = 0xffffff01
                                    
                                    int32_t ebx_73
                                    ebx_73.b = edi[1]
                                    ebx_70 = *((ebx_73 << 2) + *((ebx_62 << 2) + data_4ced578))
                                else
                                    if (ebx_62 s> 0xff)
                                        ebx_62 = 0xff
                                    
                                    int32_t ebx_65
                                    ebx_65.b = edi[1]
                                    ebx_70 =
                                        *(((ebx_65 - 0xff) << 2) + *((ebx_62 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_24
                                eax_24.b = edi[1]
                                edi[1] = eax_24.b + (*(((ebx_70 - eax_24) << 2) + edx_2)).b
                                int32_t ebx_79
                                ebx_79.b = *esi_1
                                int32_t var_d8
                                int32_t eax_29 = var_d8 + *(((edx_6
                                    + *(((ebx_79 - edx_6) << 2) + eax_9) - var_d8) << 2) + var_d4)
                                int32_t var_80
                                int32_t ebx_88 = eax_29 + var_80
                                int32_t ebx_96
                                
                                if (eax_29 + var_80 s< 0)
                                    if (ebx_88 s< 0xffffff01)
                                        ebx_88 = 0xffffff01
                                    
                                    int32_t ebx_99
                                    ebx_99.b = *edi
                                    ebx_96 = *((ebx_99 << 2) + *((ebx_88 << 2) + data_4ced578))
                                else
                                    if (ebx_88 s> 0xff)
                                        ebx_88 = 0xff
                                    
                                    int32_t ebx_91
                                    ebx_91.b = *edi
                                    ebx_96 =
                                        *(((ebx_91 - 0xff) << 2) + *((ebx_88 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_32
                                eax_32.b = *edi
                                *edi = eax_32.b + (*(((ebx_96 - eax_32) << 2) + edx_2)).b
            
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
