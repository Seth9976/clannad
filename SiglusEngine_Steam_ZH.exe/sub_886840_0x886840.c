// 函数: sub_886840
// 地址: 0x886840
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
                        int32_t var_e0
                        int32_t var_d4
                        int32_t eax_13 = var_e0 +
                            *(((edx_6 + *(((ebx_18 - edx_6) << 2) + eax_9) - var_e0) << 2) + var_d4)
                        int32_t var_88
                        int32_t ebx_27 = eax_13 + var_88
                        int32_t ebx_35
                        
                        if (eax_13 + var_88 s< 0)
                            if (ebx_27 s< 0xffffff01)
                                ebx_27 = 0xffffff01
                            
                            int32_t ebx_38
                            ebx_38.b = edi[2]
                            ebx_35 = *((ebx_38 << 2) + *((ebx_27 << 2) + data_4ced578))
                        else
                            if (ebx_27 s> 0xff)
                                ebx_27 = 0xff
                            
                            int32_t ebx_30
                            ebx_30.b = edi[2]
                            ebx_35 =
                                *(((ebx_30 - 0xff) << 2) + *((ebx_27 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_16
                        eax_16.b = edi[2]
                        edi[2] = eax_16.b + (*(((ebx_35 - eax_16) << 2) + edx_2)).b
                        int32_t ebx_44
                        ebx_44.b = esi_1[1]
                        int32_t var_dc
                        int32_t eax_21 = var_dc +
                            *(((edx_6 + *(((ebx_44 - edx_6) << 2) + eax_9) - var_dc) << 2) + var_d4)
                        int32_t var_84
                        int32_t ebx_53 = eax_21 + var_84
                        int32_t ebx_61
                        
                        if (eax_21 + var_84 s< 0)
                            if (ebx_53 s< 0xffffff01)
                                ebx_53 = 0xffffff01
                            
                            int32_t ebx_64
                            ebx_64.b = edi[1]
                            ebx_61 = *((ebx_64 << 2) + *((ebx_53 << 2) + data_4ced578))
                        else
                            if (ebx_53 s> 0xff)
                                ebx_53 = 0xff
                            
                            int32_t ebx_56
                            ebx_56.b = edi[1]
                            ebx_61 =
                                *(((ebx_56 - 0xff) << 2) + *((ebx_53 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_24
                        eax_24.b = edi[1]
                        edi[1] = eax_24.b + (*(((ebx_61 - eax_24) << 2) + edx_2)).b
                        int32_t ebx_70
                        ebx_70.b = *esi_1
                        int32_t var_d8
                        int32_t eax_29 = var_d8 +
                            *(((edx_6 + *(((ebx_70 - edx_6) << 2) + eax_9) - var_d8) << 2) + var_d4)
                        int32_t var_80
                        int32_t ebx_79 = eax_29 + var_80
                        int32_t ebx_87
                        
                        if (eax_29 + var_80 s< 0)
                            if (ebx_79 s< 0xffffff01)
                                ebx_79 = 0xffffff01
                            
                            int32_t ebx_90
                            ebx_90.b = *edi
                            ebx_87 = *((ebx_90 << 2) + *((ebx_79 << 2) + data_4ced578))
                        else
                            if (ebx_79 s> 0xff)
                                ebx_79 = 0xff
                            
                            int32_t ebx_82
                            ebx_82.b = *edi
                            ebx_87 =
                                *(((ebx_82 - 0xff) << 2) + *((ebx_79 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_32
                        eax_32.b = *edi
                        *edi = eax_32.b + (*(((ebx_87 - eax_32) << 2) + edx_2)).b
            
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
