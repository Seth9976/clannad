// 函数: sub_945910
// 地址: 0x945910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t eax_1 = *esi_4
    void* esi_1 = &esi_4[1]
    
    if (eax_1 != 0)
        int32_t var_c
        
        if (eax_1 s> 0)
            edi = &edi[var_c]
        else
            edi -= var_c
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[3]
    
    if (ebx_1 != 0)
        int32_t var_11c
        int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
        
        if (ebx_7 != 0)
            int32_t edx_2 = *((ebx_7 << 2) + &data_4e3da80)
            int32_t eax_2
            eax_2.b = var_18[2]
            int32_t eax_4
            eax_4.b = var_18[1]
            int32_t eax_6
            eax_6.b = *var_18
            uint32_t edx_6 = (*(&data_4e3d680 + (eax_2 << 2)) + *(&data_4e3e280 + (eax_4 << 2))
                + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_8 = *(&data_4e3da80 + var_cc)
            int32_t ebx_15
            ebx_15.b = var_18[2]
            int32_t var_f8
            int32_t var_ec
            int32_t eax_12 =
                var_f8 + *(((edx_6 + *(((ebx_15 - edx_6) << 2) + eax_8) - var_f8) << 2) + var_ec)
            int32_t var_88
            int32_t ebx_24 = eax_12 + var_88
            int32_t ebx_32
            
            if (eax_12 + var_88 s< 0)
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
            
            int32_t eax_15
            eax_15.b = edi[2]
            edi[2] = eax_15.b + (*(((ebx_32 - eax_15) << 2) + edx_2)).b
            int32_t ebx_41
            ebx_41.b = var_18[1]
            int32_t var_f4
            int32_t var_e8
            int32_t eax_20 =
                var_f4 + *(((edx_6 + *(((ebx_41 - edx_6) << 2) + eax_8) - var_f4) << 2) + var_e8)
            int32_t var_84
            int32_t ebx_50 = eax_20 + var_84
            int32_t ebx_58
            
            if (eax_20 + var_84 s< 0)
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
            
            int32_t eax_23
            eax_23.b = edi[1]
            edi[1] = eax_23.b + (*(((ebx_58 - eax_23) << 2) + edx_2)).b
            int32_t ebx_67
            ebx_67.b = *var_18
            int32_t var_f0
            int32_t var_e4
            int32_t eax_28 =
                var_f0 + *(((edx_6 + *(((ebx_67 - edx_6) << 2) + eax_8) - var_f0) << 2) + var_e4)
            int32_t var_80
            int32_t ebx_76 = eax_28 + var_80
            int32_t ebx_84
            
            if (eax_28 + var_80 s< 0)
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
            
            int32_t eax_31
            eax_31.b = *edi
            result = eax_31 + *(((ebx_84 - eax_31) << 2) + edx_2)
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
