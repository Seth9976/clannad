// 函数: sub_7b7180
// 地址: 0x7b7180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
char* var_124
char* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = esi_1[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t eax_1
                eax_1.b = esi_1[2]
                int32_t eax_3
                eax_3.b = esi_1[1]
                int32_t eax_5
                eax_5.b = *esi_1
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_15
                ebx_15.b = esi_1[2]
                int32_t eax_9 = edx_5 + *(((ebx_15 - edx_5) << 2) + eax_7)
                int32_t var_88
                int32_t ebx_20 = eax_9 + var_88
                int32_t ebx_28
                
                if (eax_9 + var_88 s< 0)
                    if (ebx_20 s< 0xffffff01)
                        ebx_20 = 0xffffff01
                    
                    int32_t ebx_31
                    ebx_31.b = edi[2]
                    ebx_28 = *((ebx_31 << 2) + *((ebx_20 << 2) + data_4ced578))
                else
                    if (ebx_20 s> 0xff)
                        ebx_20 = 0xff
                    
                    int32_t ebx_23
                    ebx_23.b = edi[2]
                    ebx_28 = *(((ebx_23 - 0xff) << 2) + *((ebx_20 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_12
                eax_12.b = edi[2]
                edi[2] = eax_12.b + (*(((ebx_28 - eax_12) << 2) + edx_1)).b
                int32_t ebx_37
                ebx_37.b = esi_1[1]
                int32_t eax_15 = edx_5 + *(((ebx_37 - edx_5) << 2) + eax_7)
                int32_t var_84
                int32_t ebx_42 = eax_15 + var_84
                int32_t ebx_50
                
                if (eax_15 + var_84 s< 0)
                    if (ebx_42 s< 0xffffff01)
                        ebx_42 = 0xffffff01
                    
                    int32_t ebx_53
                    ebx_53.b = edi[1]
                    ebx_50 = *((ebx_53 << 2) + *((ebx_42 << 2) + data_4ced578))
                else
                    if (ebx_42 s> 0xff)
                        ebx_42 = 0xff
                    
                    int32_t ebx_45
                    ebx_45.b = edi[1]
                    ebx_50 = *(((ebx_45 - 0xff) << 2) + *((ebx_42 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_18
                eax_18.b = edi[1]
                edi[1] = eax_18.b + (*(((ebx_50 - eax_18) << 2) + edx_1)).b
                int32_t ebx_59
                ebx_59.b = *esi_1
                int32_t eax_21 = edx_5 + *(((ebx_59 - edx_5) << 2) + eax_7)
                int32_t var_80
                int32_t ebx_64 = eax_21 + var_80
                int32_t ebx_72
                
                if (eax_21 + var_80 s< 0)
                    if (ebx_64 s< 0xffffff01)
                        ebx_64 = 0xffffff01
                    
                    int32_t ebx_75
                    ebx_75.b = *edi
                    ebx_72 = *((ebx_75 << 2) + *((ebx_64 << 2) + data_4ced578))
                else
                    if (ebx_64 s> 0xff)
                        ebx_64 = 0xff
                    
                    int32_t ebx_67
                    ebx_67.b = *edi
                    ebx_72 = *(((ebx_67 - 0xff) << 2) + *((ebx_64 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_24
                eax_24.b = *edi
                *edi = eax_24.b + (*(((ebx_72 - eax_24) << 2) + edx_1)).b
        
        esi_1 = &esi_1[4]
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 = &esi_1[var_120]
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
