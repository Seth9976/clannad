// 函数: sub_8878f0
// 地址: 0x8878f0
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
                                int32_t eax_11 = edx_6 + *(((ebx_27 - edx_6) << 2) + eax_9)
                                int32_t eax_12
                                eax_12.b = not.b(eax_11.b)
                                int32_t var_f8
                                int32_t var_ec
                                int32_t var_d0
                                int32_t eax_15 = var_f8 + *(((eax_12
                                    + *(((eax_11 - eax_12) << 2) + var_d0) - var_f8) << 2) + var_ec)
                                int32_t var_88
                                int32_t ebx_40 = eax_15 + var_88
                                int32_t ebx_48
                                
                                if (eax_15 + var_88 s< 0)
                                    if (ebx_40 s< 0xffffff01)
                                        ebx_40 = 0xffffff01
                                    
                                    int32_t ebx_51
                                    ebx_51.b = edi[2]
                                    ebx_48 = *((ebx_51 << 2) + *((ebx_40 << 2) + data_4ced578))
                                else
                                    if (ebx_40 s> 0xff)
                                        ebx_40 = 0xff
                                    
                                    int32_t ebx_43
                                    ebx_43.b = edi[2]
                                    ebx_48 =
                                        *(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_18
                                eax_18.b = edi[2]
                                edi[2] = eax_18.b + (*(((ebx_48 - eax_18) << 2) + edx_2)).b
                                int32_t ebx_57
                                ebx_57.b = esi_1[1]
                                int32_t eax_21 = edx_6 + *(((ebx_57 - edx_6) << 2) + eax_9)
                                int32_t eax_22
                                eax_22.b = not.b(eax_21.b)
                                int32_t var_f4
                                int32_t var_e8
                                int32_t eax_25 = var_f4 + *(((eax_22
                                    + *(((eax_21 - eax_22) << 2) + var_d0) - var_f4) << 2) + var_e8)
                                int32_t var_84
                                int32_t ebx_70 = eax_25 + var_84
                                int32_t ebx_78
                                
                                if (eax_25 + var_84 s< 0)
                                    if (ebx_70 s< 0xffffff01)
                                        ebx_70 = 0xffffff01
                                    
                                    int32_t ebx_81
                                    ebx_81.b = edi[1]
                                    ebx_78 = *((ebx_81 << 2) + *((ebx_70 << 2) + data_4ced578))
                                else
                                    if (ebx_70 s> 0xff)
                                        ebx_70 = 0xff
                                    
                                    int32_t ebx_73
                                    ebx_73.b = edi[1]
                                    ebx_78 =
                                        *(((ebx_73 - 0xff) << 2) + *((ebx_70 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_28
                                eax_28.b = edi[1]
                                edi[1] = eax_28.b + (*(((ebx_78 - eax_28) << 2) + edx_2)).b
                                int32_t ebx_87
                                ebx_87.b = *esi_1
                                int32_t eax_31 = edx_6 + *(((ebx_87 - edx_6) << 2) + eax_9)
                                int32_t eax_32
                                eax_32.b = not.b(eax_31.b)
                                int32_t var_f0
                                int32_t var_e4
                                int32_t eax_35 = var_f0 + *(((eax_32
                                    + *(((eax_31 - eax_32) << 2) + var_d0) - var_f0) << 2) + var_e4)
                                int32_t var_80
                                int32_t ebx_100 = eax_35 + var_80
                                int32_t ebx_108
                                
                                if (eax_35 + var_80 s< 0)
                                    if (ebx_100 s< 0xffffff01)
                                        ebx_100 = 0xffffff01
                                    
                                    int32_t ebx_111
                                    ebx_111.b = *edi
                                    ebx_108 = *((ebx_111 << 2) + *((ebx_100 << 2) + data_4ced578))
                                else
                                    if (ebx_100 s> 0xff)
                                        ebx_100 = 0xff
                                    
                                    int32_t ebx_103
                                    ebx_103.b = *edi
                                    ebx_108 = *(((ebx_103 - 0xff) << 2)
                                        + *((ebx_100 << 2) + data_4ced578)) + 0xff
                                
                                int32_t eax_38
                                eax_38.b = *edi
                                *edi = eax_38.b + (*(((ebx_108 - eax_38) << 2) + edx_2)).b
            
            int32_t eax_41 = var_a0 + 1
            int32_t var_bc
            
            if (eax_41 s>= var_bc)
                eax_41 = 0
            
            var_a0 = eax_41
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
