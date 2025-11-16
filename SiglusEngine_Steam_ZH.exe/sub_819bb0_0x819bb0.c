// 函数: sub_819bb0
// 地址: 0x819bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t eax_1
                eax_1.b = var_124[2]
                int32_t eax_3
                eax_3.b = var_124[1]
                int32_t eax_5
                eax_5.b = *var_124
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_15
                ebx_15.b = var_124[2]
                int32_t eax_9 = edx_5 + *(((ebx_15 - edx_5) << 2) + eax_7)
                int32_t eax_10
                eax_10.b = not.b(eax_9.b)
                int32_t var_d0
                int32_t eax_11 = eax_10 + *(((eax_9 - eax_10) << 2) + var_d0)
                int32_t var_88
                int32_t ebx_24 = eax_11 + var_88
                int32_t ebx_32
                
                if (eax_11 + var_88 s< 0)
                    if (ebx_24 s< 0xffffff01)
                        ebx_24 = 0xffffff01
                    
                    int32_t ebx_35
                    ebx_35.b = edi[2]
                    ebx_32 = *((ebx_35 << 2) + *((ebx_24 << 2) + data_4ced578))
                else
                    if (ebx_24 s> 0xff)
                        ebx_24 = 0xff
                    
                    int32_t ebx_27
                    ebx_27.b = edi[2]
                    ebx_32 = *(((ebx_27 - 0xff) << 2) + *((ebx_24 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_14
                eax_14.b = edi[2]
                edi[2] = eax_14.b + (*(((ebx_32 - eax_14) << 2) + edx_1)).b
                int32_t ebx_41
                ebx_41.b = var_124[1]
                int32_t eax_17 = edx_5 + *(((ebx_41 - edx_5) << 2) + eax_7)
                int32_t eax_18
                eax_18.b = not.b(eax_17.b)
                int32_t eax_19 = eax_18 + *(((eax_17 - eax_18) << 2) + var_d0)
                int32_t var_84
                int32_t ebx_50 = eax_19 + var_84
                int32_t ebx_58
                
                if (eax_19 + var_84 s< 0)
                    if (ebx_50 s< 0xffffff01)
                        ebx_50 = 0xffffff01
                    
                    int32_t ebx_61
                    ebx_61.b = edi[1]
                    ebx_58 = *((ebx_61 << 2) + *((ebx_50 << 2) + data_4ced578))
                else
                    if (ebx_50 s> 0xff)
                        ebx_50 = 0xff
                    
                    int32_t ebx_53
                    ebx_53.b = edi[1]
                    ebx_58 = *(((ebx_53 - 0xff) << 2) + *((ebx_50 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_22
                eax_22.b = edi[1]
                edi[1] = eax_22.b + (*(((ebx_58 - eax_22) << 2) + edx_1)).b
                int32_t ebx_67
                ebx_67.b = *var_124
                int32_t eax_25 = edx_5 + *(((ebx_67 - edx_5) << 2) + eax_7)
                int32_t eax_26
                eax_26.b = not.b(eax_25.b)
                int32_t eax_27 = eax_26 + *(((eax_25 - eax_26) << 2) + var_d0)
                int32_t var_80
                int32_t ebx_76 = eax_27 + var_80
                int32_t ebx_84
                
                if (eax_27 + var_80 s< 0)
                    if (ebx_76 s< 0xffffff01)
                        ebx_76 = 0xffffff01
                    
                    int32_t ebx_87
                    ebx_87.b = *edi
                    ebx_84 = *((ebx_87 << 2) + *((ebx_76 << 2) + data_4ced578))
                else
                    if (ebx_76 s> 0xff)
                        ebx_76 = 0xff
                    
                    int32_t ebx_79
                    ebx_79.b = *edi
                    ebx_84 = *(((ebx_79 - 0xff) << 2) + *((ebx_76 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_30
                eax_30.b = *edi
                *edi = eax_30.b + (*(((ebx_84 - eax_30) << 2) + edx_1)).b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
