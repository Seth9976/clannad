// 函数: sub_81a580
// 地址: 0x81a580
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
        int32_t var_88
        int32_t ebx_2 = ebx_1 + var_88
        char eax_3
        
        if (ebx_1 + var_88 s< 0)
            if (ebx_2 s< 0xffffff01)
                ebx_2 = 0xffffff01
            
            int32_t ebx_11
            ebx_11.b = *(edi + 2)
            eax_3 = (*((ebx_11 << 2) + *((ebx_2 << 2) + data_4ced578))).b
        else
            if (ebx_2 s> 0xff)
                ebx_2 = 0xff
            
            int32_t ebx_5
            ebx_5.b = *(edi + 2)
            eax_3 = (*(((ebx_5 - 0xff) << 2) + *((ebx_2 << 2) + data_4ced578))).b - 1
        
        *(edi + 2) = eax_3
        int32_t ebx_14
        ebx_14.b = var_124[1]
        int32_t var_84
        int32_t ebx_15 = ebx_14 + var_84
        char eax_7
        
        if (ebx_14 + var_84 s< 0)
            if (ebx_15 s< 0xffffff01)
                ebx_15 = 0xffffff01
            
            int32_t ebx_24
            ebx_24.b = *(edi + 1)
            eax_7 = (*((ebx_24 << 2) + *((ebx_15 << 2) + data_4ced578))).b
        else
            if (ebx_15 s> 0xff)
                ebx_15 = 0xff
            
            int32_t ebx_18
            ebx_18.b = *(edi + 1)
            eax_7 = (*(((ebx_18 - 0xff) << 2) + *((ebx_15 << 2) + data_4ced578))).b - 1
        
        *(edi + 1) = eax_7
        int32_t ebx_27
        ebx_27.b = *var_124
        int32_t var_80
        int32_t ebx_28 = ebx_27 + var_80
        
        if (ebx_27 + var_80 s< 0)
            if (ebx_28 s< 0xffffff01)
                ebx_28 = 0xffffff01
            
            int32_t ebx_37
            ebx_37.b = *edi
            result = (*((ebx_37 << 2) + *((ebx_28 << 2) + data_4ced578))).b
        else
            if (ebx_28 s> 0xff)
                ebx_28 = 0xff
            
            int32_t ebx_31
            ebx_31.b = *edi
            result = (*(((ebx_31 - 0xff) << 2) + *((ebx_28 << 2) + data_4ced578))).b - 1
        
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
