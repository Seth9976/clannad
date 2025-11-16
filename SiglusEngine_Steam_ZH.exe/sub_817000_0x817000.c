// 函数: sub_817000
// 地址: 0x817000
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
        int32_t eax_1
        eax_1.b = var_124[2]
        int32_t eax_3
        eax_3.b = var_124[1]
        int32_t eax_5
        eax_5.b = *var_124
        uint32_t edx_4 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
            + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_7 = *(&data_4e3da80 + var_cc)
        int32_t ebx_5
        ebx_5.b = var_124[2]
        int32_t eax_9 = edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7)
        int32_t var_88
        int32_t ebx_10 = eax_9 + var_88
        char eax_12
        
        if (eax_9 + var_88 s< 0)
            if (ebx_10 s< 0xffffff01)
                ebx_10 = 0xffffff01
            
            int32_t ebx_19
            ebx_19.b = *(edi + 2)
            eax_12 = (*((ebx_19 << 2) + *((ebx_10 << 2) + data_4ced578))).b
        else
            if (ebx_10 s> 0xff)
                ebx_10 = 0xff
            
            int32_t ebx_13
            ebx_13.b = *(edi + 2)
            eax_12 = (*(((ebx_13 - 0xff) << 2) + *((ebx_10 << 2) + data_4ced578))).b - 1
        
        *(edi + 2) = eax_12
        int32_t ebx_22
        ebx_22.b = var_124[1]
        int32_t eax_15 = edx_4 + *(((ebx_22 - edx_4) << 2) + eax_7)
        int32_t var_84
        int32_t ebx_27 = eax_15 + var_84
        char eax_18
        
        if (eax_15 + var_84 s< 0)
            if (ebx_27 s< 0xffffff01)
                ebx_27 = 0xffffff01
            
            int32_t ebx_36
            ebx_36.b = *(edi + 1)
            eax_18 = (*((ebx_36 << 2) + *((ebx_27 << 2) + data_4ced578))).b
        else
            if (ebx_27 s> 0xff)
                ebx_27 = 0xff
            
            int32_t ebx_30
            ebx_30.b = *(edi + 1)
            eax_18 = (*(((ebx_30 - 0xff) << 2) + *((ebx_27 << 2) + data_4ced578))).b - 1
        
        *(edi + 1) = eax_18
        int32_t ebx_39
        ebx_39.b = *var_124
        int32_t eax_21 = edx_4 + *(((ebx_39 - edx_4) << 2) + eax_7)
        int32_t var_80
        int32_t ebx_44 = eax_21 + var_80
        
        if (eax_21 + var_80 s< 0)
            if (ebx_44 s< 0xffffff01)
                ebx_44 = 0xffffff01
            
            int32_t ebx_53
            ebx_53.b = *edi
            result = (*((ebx_53 << 2) + *((ebx_44 << 2) + data_4ced578))).b
        else
            if (ebx_44 s> 0xff)
                ebx_44 = 0xff
            
            int32_t ebx_47
            ebx_47.b = *edi
            result = (*(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578))).b - 1
        
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
