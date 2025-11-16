// 函数: sub_8e2b20
// 地址: 0x8e2b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t var_28
int32_t i_1 = var_28 + 1
int32_t i

do
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp5_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                char* var_3c
                int32_t eax_1
                eax_1.b = var_3c[2]
                int32_t eax_3
                eax_3.b = var_3c[1]
                int32_t eax_5
                eax_5.b = *var_3c
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_5
                ebx_5.b = var_3c[2]
                int32_t eax_9 = edx_5 + *(((ebx_5 - edx_5) << 2) + eax_7)
                int32_t eax_10
                eax_10.b = not.b(eax_9.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t eax_15 = var_f8 + *(((var_e0
                    + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_22 = eax_15 + var_88
                int32_t ebx_30
                
                if (eax_15 + var_88 s< 0)
                    if (ebx_22 s< 0xffffff01)
                        ebx_22 = 0xffffff01
                    
                    int32_t ebx_33
                    ebx_33.b = edi[2]
                    ebx_30 = *((ebx_33 << 2) + *((ebx_22 << 2) + data_4ced578))
                else
                    if (ebx_22 s> 0xff)
                        ebx_22 = 0xff
                    
                    int32_t ebx_25
                    ebx_25.b = edi[2]
                    ebx_30 = *(((ebx_25 - 0xff) << 2) + *((ebx_22 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_18
                eax_18.b = edi[2]
                int32_t var_118
                edi[2] = eax_18.b + (*(((ebx_30 - eax_18) << 2) + var_118)).b
                int32_t ebx_39
                ebx_39.b = var_3c[1]
                int32_t eax_21 = edx_5 + *(((ebx_39 - edx_5) << 2) + eax_7)
                int32_t eax_22
                eax_22.b = not.b(eax_21.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_27 = var_f4 + *(((var_dc
                    + *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_56 = eax_27 + var_84
                int32_t ebx_64
                
                if (eax_27 + var_84 s< 0)
                    if (ebx_56 s< 0xffffff01)
                        ebx_56 = 0xffffff01
                    
                    int32_t ebx_67
                    ebx_67.b = edi[1]
                    ebx_64 = *((ebx_67 << 2) + *((ebx_56 << 2) + data_4ced578))
                else
                    if (ebx_56 s> 0xff)
                        ebx_56 = 0xff
                    
                    int32_t ebx_59
                    ebx_59.b = edi[1]
                    ebx_64 = *(((ebx_59 - 0xff) << 2) + *((ebx_56 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_30
                eax_30.b = edi[1]
                edi[1] = eax_30.b + (*(((ebx_64 - eax_30) << 2) + var_118)).b
                int32_t ebx_73
                ebx_73.b = *var_3c
                int32_t eax_33 = edx_5 + *(((ebx_73 - edx_5) << 2) + eax_7)
                int32_t eax_34
                eax_34.b = not.b(eax_33.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_39 = var_f0 + *(((var_d8
                    + *(((eax_34 + *(((eax_33 - eax_34) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_90 = eax_39 + var_80
                int32_t ebx_98
                
                if (eax_39 + var_80 s< 0)
                    if (ebx_90 s< 0xffffff01)
                        ebx_90 = 0xffffff01
                    
                    int32_t ebx_101
                    ebx_101.b = *edi
                    ebx_98 = *((ebx_101 << 2) + *((ebx_90 << 2) + data_4ced578))
                else
                    if (ebx_90 s> 0xff)
                        ebx_90 = 0xff
                    
                    int32_t ebx_93
                    ebx_93.b = *edi
                    ebx_98 = *(((ebx_93 - 0xff) << 2) + *((ebx_90 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_42
                eax_42.b = *edi
                *edi = eax_42.b + (*(((ebx_98 - eax_42) << 2) + var_118)).b
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
