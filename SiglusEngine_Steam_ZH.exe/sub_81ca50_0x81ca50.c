// 函数: sub_81ca50
// 地址: 0x81ca50
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
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t ebx_5
            ebx_5.b = var_124[2]
            int32_t var_88
            int32_t ebx_6 = ebx_5 + var_88
            int32_t ebx_14
            
            if (ebx_5 + var_88 s< 0)
                if (ebx_6 s< 0xffffff01)
                    ebx_6 = 0xffffff01
                
                int32_t ebx_17
                ebx_17.b = edi[2]
                ebx_14 = *((ebx_17 << 2) + *((ebx_6 << 2) + data_4ced578))
            else
                if (ebx_6 s> 0xff)
                    ebx_6 = 0xff
                
                int32_t ebx_9
                ebx_9.b = edi[2]
                ebx_14 = *(((ebx_9 - 0xff) << 2) + *((ebx_6 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_3
            eax_3.b = edi[2]
            edi[2] = eax_3.b + (*(((ebx_14 - eax_3) << 2) + edx_1)).b
            int32_t ebx_23
            ebx_23.b = var_124[1]
            int32_t var_84
            int32_t ebx_24 = ebx_23 + var_84
            int32_t ebx_32
            
            if (ebx_23 + var_84 s< 0)
                if (ebx_24 s< 0xffffff01)
                    ebx_24 = 0xffffff01
                
                int32_t ebx_35
                ebx_35.b = edi[1]
                ebx_32 = *((ebx_35 << 2) + *((ebx_24 << 2) + data_4ced578))
            else
                if (ebx_24 s> 0xff)
                    ebx_24 = 0xff
                
                int32_t ebx_27
                ebx_27.b = edi[1]
                ebx_32 = *(((ebx_27 - 0xff) << 2) + *((ebx_24 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_7
            eax_7.b = edi[1]
            edi[1] = eax_7.b + (*(((ebx_32 - eax_7) << 2) + edx_1)).b
            int32_t ebx_41
            ebx_41.b = *var_124
            int32_t var_80
            int32_t ebx_42 = ebx_41 + var_80
            int32_t ebx_50
            
            if (ebx_41 + var_80 s< 0)
                if (ebx_42 s< 0xffffff01)
                    ebx_42 = 0xffffff01
                
                int32_t ebx_53
                ebx_53.b = *edi
                ebx_50 = *((ebx_53 << 2) + *((ebx_42 << 2) + data_4ced578))
            else
                if (ebx_42 s> 0xff)
                    ebx_42 = 0xff
                
                int32_t ebx_45
                ebx_45.b = *edi
                ebx_50 = *(((ebx_45 - 0xff) << 2) + *((ebx_42 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_11
            eax_11.b = *edi
            *edi = eax_11.b + (*(((ebx_50 - eax_11) << 2) + edx_1)).b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
