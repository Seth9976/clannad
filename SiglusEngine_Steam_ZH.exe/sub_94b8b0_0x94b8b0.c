// 函数: sub_94b8b0
// 地址: 0x94b8b0
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
            int32_t ebx_11
            ebx_11.b = var_18[2]
            int32_t eax_2
            eax_2.b = not.b(ebx_11.b)
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t eax_7 = var_f8 + *(((var_e0
                + *(((eax_2 + *(((ebx_11 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec)
            int32_t var_88
            int32_t ebx_24 = eax_7 + var_88
            int32_t ebx_32
            
            if (eax_7 + var_88 s< 0)
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
            
            int32_t eax_10
            eax_10.b = edi[2]
            edi[2] = eax_10.b + (*(((ebx_32 - eax_10) << 2) + edx_2)).b
            int32_t ebx_41
            ebx_41.b = var_18[1]
            int32_t eax_12
            eax_12.b = not.b(ebx_41.b)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t eax_17 = var_f4 + *(((var_dc
                + *(((eax_12 + *(((ebx_41 - eax_12) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8)
            int32_t var_84
            int32_t ebx_54 = eax_17 + var_84
            int32_t ebx_62
            
            if (eax_17 + var_84 s< 0)
                if (ebx_54 s< 0xffffff01)
                    ebx_54 = 0xffffff01
                
                int32_t ebx_65
                ebx_65.b = edi[1]
                ebx_62 = *((ebx_65 << 2) + *((ebx_54 << 2) + data_4ced578))
            else
                if (ebx_54 s> 0xff)
                    ebx_54 = 0xff
                
                int32_t ebx_57
                ebx_57.b = edi[1]
                ebx_62 = *(((ebx_57 - 0xff) << 2) + *((ebx_54 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_20
            eax_20.b = edi[1]
            edi[1] = eax_20.b + (*(((ebx_62 - eax_20) << 2) + edx_2)).b
            int32_t ebx_71
            ebx_71.b = *var_18
            int32_t eax_22
            eax_22.b = not.b(ebx_71.b)
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t eax_27 = var_f0 + *(((var_d8
                + *(((eax_22 + *(((ebx_71 - eax_22) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4)
            int32_t var_80
            int32_t ebx_84 = eax_27 + var_80
            int32_t ebx_92
            
            if (eax_27 + var_80 s< 0)
                if (ebx_84 s< 0xffffff01)
                    ebx_84 = 0xffffff01
                
                int32_t ebx_95
                ebx_95.b = *edi
                ebx_92 = *((ebx_95 << 2) + *((ebx_84 << 2) + data_4ced578))
            else
                if (ebx_84 s> 0xff)
                    ebx_84 = 0xff
                
                int32_t ebx_87
                ebx_87.b = *edi
                ebx_92 = *(((ebx_87 - 0xff) << 2) + *((ebx_84 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_30
            eax_30.b = *edi
            result = eax_30 + *(((ebx_92 - eax_30) << 2) + edx_2)
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
