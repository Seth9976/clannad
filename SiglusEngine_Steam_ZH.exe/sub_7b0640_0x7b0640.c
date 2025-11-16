// 函数: sub_7b0640
// 地址: 0x7b0640
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
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t ebx_5
            ebx_5.b = esi_1[2]
            int32_t var_f8
            int32_t var_ec
            int32_t eax_2 = var_f8 + *(((ebx_5 - var_f8) << 2) + var_ec)
            int32_t var_88
            int32_t ebx_10 = eax_2 + var_88
            int32_t ebx_18
            
            if (eax_2 + var_88 s< 0)
                if (ebx_10 s< 0xffffff01)
                    ebx_10 = 0xffffff01
                
                int32_t ebx_21
                ebx_21.b = edi[2]
                ebx_18 = *((ebx_21 << 2) + *((ebx_10 << 2) + data_4ced578))
            else
                if (ebx_10 s> 0xff)
                    ebx_10 = 0xff
                
                int32_t ebx_13
                ebx_13.b = edi[2]
                ebx_18 = *(((ebx_13 - 0xff) << 2) + *((ebx_10 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_5
            eax_5.b = edi[2]
            edi[2] = eax_5.b + (*(((ebx_18 - eax_5) << 2) + edx_1)).b
            int32_t ebx_27
            ebx_27.b = esi_1[1]
            int32_t var_f4
            int32_t var_e8
            int32_t eax_8 = var_f4 + *(((ebx_27 - var_f4) << 2) + var_e8)
            int32_t var_84
            int32_t ebx_32 = eax_8 + var_84
            int32_t ebx_40
            
            if (eax_8 + var_84 s< 0)
                if (ebx_32 s< 0xffffff01)
                    ebx_32 = 0xffffff01
                
                int32_t ebx_43
                ebx_43.b = edi[1]
                ebx_40 = *((ebx_43 << 2) + *((ebx_32 << 2) + data_4ced578))
            else
                if (ebx_32 s> 0xff)
                    ebx_32 = 0xff
                
                int32_t ebx_35
                ebx_35.b = edi[1]
                ebx_40 = *(((ebx_35 - 0xff) << 2) + *((ebx_32 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_11
            eax_11.b = edi[1]
            edi[1] = eax_11.b + (*(((ebx_40 - eax_11) << 2) + edx_1)).b
            int32_t ebx_49
            ebx_49.b = *esi_1
            int32_t var_f0
            int32_t var_e4
            int32_t eax_14 = var_f0 + *(((ebx_49 - var_f0) << 2) + var_e4)
            int32_t var_80
            int32_t ebx_54 = eax_14 + var_80
            int32_t ebx_62
            
            if (eax_14 + var_80 s< 0)
                if (ebx_54 s< 0xffffff01)
                    ebx_54 = 0xffffff01
                
                int32_t ebx_65
                ebx_65.b = *edi
                ebx_62 = *((ebx_65 << 2) + *((ebx_54 << 2) + data_4ced578))
            else
                if (ebx_54 s> 0xff)
                    ebx_54 = 0xff
                
                int32_t ebx_57
                ebx_57.b = *edi
                ebx_62 = *(((ebx_57 - 0xff) << 2) + *((ebx_54 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_17
            eax_17.b = *edi
            *edi = eax_17.b + (*(((ebx_62 - eax_17) << 2) + edx_1)).b
        
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
