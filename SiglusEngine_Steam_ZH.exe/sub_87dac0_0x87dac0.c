// 函数: sub_87dac0
// 地址: 0x87dac0
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
                
                int32_t eax
                eax.b = esi_1[2]
                int32_t eax_2
                eax_2.b = esi_1[1]
                int32_t eax_4
                eax_4.b = *esi_1
                uint32_t edx_5 = (*(&data_4e3d680 + (eax << 2)) + *(&data_4e3e280 + (eax_2 << 2))
                    + *(&data_4e3de80 + (eax_4 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_6 = *(&data_4e3da80 + var_cc)
                int32_t ebx_6
                ebx_6.b = esi_1[2]
                int32_t eax_8 = edx_5 + *(((ebx_6 - edx_5) << 2) + eax_6)
                int32_t eax_9
                eax_9.b = not.b(eax_8.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_d0
                int32_t eax_12 = var_f8
                    + *(((eax_9 + *(((eax_8 - eax_9) << 2) + var_d0) - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_19 = eax_12 + var_88
                int32_t ebx_27
                
                if (eax_12 + var_88 s< 0)
                    if (ebx_19 s< 0xffffff01)
                        ebx_19 = 0xffffff01
                    
                    int32_t ebx_30
                    ebx_30.b = edi[2]
                    ebx_27 = *((ebx_30 << 2) + *((ebx_19 << 2) + data_4ced578))
                else
                    if (ebx_19 s> 0xff)
                        ebx_19 = 0xff
                    
                    int32_t ebx_22
                    ebx_22.b = edi[2]
                    ebx_27 = *(((ebx_22 - 0xff) << 2) + *((ebx_19 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_15
                eax_15.b = edi[2]
                int32_t var_118
                edi[2] = eax_15.b + (*(((ebx_27 - eax_15) << 2) + var_118)).b
                int32_t ebx_36
                ebx_36.b = esi_1[1]
                int32_t eax_18 = edx_5 + *(((ebx_36 - edx_5) << 2) + eax_6)
                int32_t eax_19
                eax_19.b = not.b(eax_18.b)
                int32_t var_f4
                int32_t var_e8
                int32_t eax_22 = var_f4
                    + *(((eax_19 + *(((eax_18 - eax_19) << 2) + var_d0) - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_49 = eax_22 + var_84
                int32_t ebx_57
                
                if (eax_22 + var_84 s< 0)
                    if (ebx_49 s< 0xffffff01)
                        ebx_49 = 0xffffff01
                    
                    int32_t ebx_60
                    ebx_60.b = edi[1]
                    ebx_57 = *((ebx_60 << 2) + *((ebx_49 << 2) + data_4ced578))
                else
                    if (ebx_49 s> 0xff)
                        ebx_49 = 0xff
                    
                    int32_t ebx_52
                    ebx_52.b = edi[1]
                    ebx_57 = *(((ebx_52 - 0xff) << 2) + *((ebx_49 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_25
                eax_25.b = edi[1]
                edi[1] = eax_25.b + (*(((ebx_57 - eax_25) << 2) + var_118)).b
                int32_t ebx_66
                ebx_66.b = *esi_1
                int32_t eax_28 = edx_5 + *(((ebx_66 - edx_5) << 2) + eax_6)
                int32_t eax_29
                eax_29.b = not.b(eax_28.b)
                int32_t var_f0
                int32_t var_e4
                int32_t eax_32 = var_f0
                    + *(((eax_29 + *(((eax_28 - eax_29) << 2) + var_d0) - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_79 = eax_32 + var_80
                int32_t ebx_87
                
                if (eax_32 + var_80 s< 0)
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
                    ebx_87 = *(((ebx_82 - 0xff) << 2) + *((ebx_79 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_35
                eax_35.b = *edi
                *edi = eax_35.b + (*(((ebx_87 - eax_35) << 2) + var_118)).b
            
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
