// 函数: sub_94a480
// 地址: 0x94a480
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
            int32_t eax_10 = edx_6 + *(((ebx_15 - edx_6) << 2) + eax_8)
            int32_t var_88
            int32_t ebx_20 = eax_10 + var_88
            int32_t ebx_28
            
            if (eax_10 + var_88 s< 0)
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
            
            int32_t eax_13
            eax_13.b = edi[2]
            edi[2] = eax_13.b + (*(((ebx_28 - eax_13) << 2) + edx_2)).b
            int32_t ebx_37
            ebx_37.b = var_18[1]
            int32_t eax_16 = edx_6 + *(((ebx_37 - edx_6) << 2) + eax_8)
            int32_t var_84
            int32_t ebx_42 = eax_16 + var_84
            int32_t ebx_50
            
            if (eax_16 + var_84 s< 0)
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
            
            int32_t eax_19
            eax_19.b = edi[1]
            edi[1] = eax_19.b + (*(((ebx_50 - eax_19) << 2) + edx_2)).b
            int32_t ebx_59
            ebx_59.b = *var_18
            int32_t eax_22 = edx_6 + *(((ebx_59 - edx_6) << 2) + eax_8)
            int32_t var_80
            int32_t ebx_64 = eax_22 + var_80
            int32_t ebx_72
            
            if (eax_22 + var_80 s< 0)
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
            
            int32_t eax_25
            eax_25.b = *edi
            result = eax_25 + *(((ebx_72 - eax_25) << 2) + edx_2)
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
