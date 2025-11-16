// 函数: sub_814880
// 地址: 0x814880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
int32_t i_2
int32_t i_1 = i_2
char result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[2]
        int32_t var_e0
        int32_t var_d4
        int32_t eax_2 = var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4)
        int32_t var_88
        int32_t ebx_6 = eax_2 + var_88
        char eax_5
        
        if (eax_2 + var_88 s< 0)
            if (ebx_6 s< 0xffffff01)
                ebx_6 = 0xffffff01
            
            int32_t ebx_15
            ebx_15.b = *(edi + 2)
            eax_5 = (*((ebx_15 << 2) + *((ebx_6 << 2) + data_4ced578))).b
        else
            if (ebx_6 s> 0xff)
                ebx_6 = 0xff
            
            int32_t ebx_9
            ebx_9.b = *(edi + 2)
            eax_5 = (*(((ebx_9 - 0xff) << 2) + *((ebx_6 << 2) + data_4ced578))).b - 1
        
        *(edi + 2) = eax_5
        int32_t ebx_18
        ebx_18.b = var_124[1]
        int32_t var_dc
        int32_t eax_8 = var_dc + *(((ebx_18 - var_dc) << 2) + var_d4)
        int32_t var_84
        int32_t ebx_23 = eax_8 + var_84
        char eax_11
        
        if (eax_8 + var_84 s< 0)
            if (ebx_23 s< 0xffffff01)
                ebx_23 = 0xffffff01
            
            int32_t ebx_32
            ebx_32.b = *(edi + 1)
            eax_11 = (*((ebx_32 << 2) + *((ebx_23 << 2) + data_4ced578))).b
        else
            if (ebx_23 s> 0xff)
                ebx_23 = 0xff
            
            int32_t ebx_26
            ebx_26.b = *(edi + 1)
            eax_11 = (*(((ebx_26 - 0xff) << 2) + *((ebx_23 << 2) + data_4ced578))).b - 1
        
        *(edi + 1) = eax_11
        int32_t ebx_35
        ebx_35.b = *var_124
        int32_t var_d8
        int32_t eax_14 = var_d8 + *(((ebx_35 - var_d8) << 2) + var_d4)
        int32_t var_80
        int32_t ebx_40 = eax_14 + var_80
        
        if (eax_14 + var_80 s< 0)
            if (ebx_40 s< 0xffffff01)
                ebx_40 = 0xffffff01
            
            int32_t ebx_49
            ebx_49.b = *edi
            result = (*((ebx_49 << 2) + *((ebx_40 << 2) + data_4ced578))).b
        else
            if (ebx_40 s> 0xff)
                ebx_40 = 0xff
            
            int32_t ebx_43
            ebx_43.b = *edi
            result = (*(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578))).b - 1
        
        *edi = result
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result
