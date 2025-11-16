// 函数: sub_882bd0
// 地址: 0x882bd0
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
                int32_t eax
                eax.b = not.b(ebx_2.b)
                int32_t var_d0
                int32_t eax_1 = eax + *(((ebx_2 - eax) << 2) + var_d0)
                int32_t var_88
                int32_t ebx_7 = eax_1 + var_88
                char eax_4
                
                if (eax_1 + var_88 s< 0)
                    if (ebx_7 s< 0xffffff01)
                        ebx_7 = 0xffffff01
                    
                    int32_t ebx_16
                    ebx_16.b = edi[2]
                    eax_4 = (*((ebx_16 << 2) + *((ebx_7 << 2) + data_4ced578))).b
                else
                    if (ebx_7 s> 0xff)
                        ebx_7 = 0xff
                    
                    int32_t ebx_10
                    ebx_10.b = edi[2]
                    eax_4 = (*(((ebx_10 - 0xff) << 2) + *((ebx_7 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_4
                int32_t ebx_19
                ebx_19.b = esi_1[1]
                int32_t eax_6
                eax_6.b = not.b(ebx_19.b)
                int32_t eax_7 = eax_6 + *(((ebx_19 - eax_6) << 2) + var_d0)
                int32_t var_84
                int32_t ebx_24 = eax_7 + var_84
                char eax_10
                
                if (eax_7 + var_84 s< 0)
                    if (ebx_24 s< 0xffffff01)
                        ebx_24 = 0xffffff01
                    
                    int32_t ebx_33
                    ebx_33.b = edi[1]
                    eax_10 = (*((ebx_33 << 2) + *((ebx_24 << 2) + data_4ced578))).b
                else
                    if (ebx_24 s> 0xff)
                        ebx_24 = 0xff
                    
                    int32_t ebx_27
                    ebx_27.b = edi[1]
                    eax_10 = (*(((ebx_27 - 0xff) << 2) + *((ebx_24 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_10
                int32_t ebx_36
                ebx_36.b = *esi_1
                int32_t eax_12
                eax_12.b = not.b(ebx_36.b)
                int32_t eax_13 = eax_12 + *(((ebx_36 - eax_12) << 2) + var_d0)
                int32_t var_80
                int32_t ebx_41 = eax_13 + var_80
                char eax_16
                
                if (eax_13 + var_80 s< 0)
                    if (ebx_41 s< 0xffffff01)
                        ebx_41 = 0xffffff01
                    
                    int32_t ebx_50
                    ebx_50.b = *edi
                    eax_16 = (*((ebx_50 << 2) + *((ebx_41 << 2) + data_4ced578))).b
                else
                    if (ebx_41 s> 0xff)
                        ebx_41 = 0xff
                    
                    int32_t ebx_44
                    ebx_44.b = *edi
                    eax_16 = (*(((ebx_44 - 0xff) << 2) + *((ebx_41 << 2) + data_4ced578))).b - 1
                
                *edi = eax_16
            
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
