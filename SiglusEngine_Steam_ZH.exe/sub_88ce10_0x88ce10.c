// 函数: sub_88ce10
// 地址: 0x88ce10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_3c
char* esi_1 = var_3c
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t result_1
int32_t result = result_1
int32_t var_34
int32_t ebx = var_34
int32_t var_28
int32_t i_1 = var_28 + 1
int32_t i

do
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp4_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                int32_t ebx_2
                ebx_2.b = esi_1[2]
                int32_t var_88
                int32_t ebx_3 = ebx_2 + var_88
                int32_t ebx_11
                
                if (ebx_2 + var_88 s< 0)
                    if (ebx_3 s< 0xffffff01)
                        ebx_3 = 0xffffff01
                    
                    int32_t ebx_14
                    ebx_14.b = edi[2]
                    ebx_11 = *((ebx_14 << 2) + *((ebx_3 << 2) + data_4ced578))
                else
                    if (ebx_3 s> 0xff)
                        ebx_3 = 0xff
                    
                    int32_t ebx_6
                    ebx_6.b = edi[2]
                    ebx_11 = *(((ebx_6 - 0xff) << 2) + *((ebx_3 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_2
                eax_2.b = edi[2]
                int32_t var_118
                edi[2] = eax_2.b + (*(((ebx_11 - eax_2) << 2) + var_118)).b
                int32_t ebx_20
                ebx_20.b = esi_1[1]
                int32_t var_84
                int32_t ebx_21 = ebx_20 + var_84
                int32_t ebx_29
                
                if (ebx_20 + var_84 s< 0)
                    if (ebx_21 s< 0xffffff01)
                        ebx_21 = 0xffffff01
                    
                    int32_t ebx_32
                    ebx_32.b = edi[1]
                    ebx_29 = *((ebx_32 << 2) + *((ebx_21 << 2) + data_4ced578))
                else
                    if (ebx_21 s> 0xff)
                        ebx_21 = 0xff
                    
                    int32_t ebx_24
                    ebx_24.b = edi[1]
                    ebx_29 = *(((ebx_24 - 0xff) << 2) + *((ebx_21 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_6
                eax_6.b = edi[1]
                edi[1] = eax_6.b + (*(((ebx_29 - eax_6) << 2) + var_118)).b
                int32_t ebx_38
                ebx_38.b = *esi_1
                int32_t var_80
                int32_t ebx_39 = ebx_38 + var_80
                int32_t ebx_47
                
                if (ebx_38 + var_80 s< 0)
                    if (ebx_39 s< 0xffffff01)
                        ebx_39 = 0xffffff01
                    
                    int32_t ebx_50
                    ebx_50.b = *edi
                    ebx_47 = *((ebx_50 << 2) + *((ebx_39 << 2) + data_4ced578))
                else
                    if (ebx_39 s> 0xff)
                        ebx_39 = 0xff
                    
                    int32_t ebx_42
                    ebx_42.b = *edi
                    ebx_47 = *(((ebx_42 - 0xff) << 2) + *((ebx_39 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_10
                eax_10.b = *edi
                *edi = eax_10.b + (*(((ebx_47 - eax_10) << 2) + var_118)).b
            
            edi = &edi[4]
            temp4_1 = edx
            edx -= var_44
        while (temp4_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp6_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp6_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 = &esi_1[var_20]
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 = &esi_1[ebx]
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
