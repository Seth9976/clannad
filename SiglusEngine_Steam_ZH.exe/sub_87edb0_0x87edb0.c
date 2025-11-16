// 函数: sub_87edb0
// 地址: 0x87edb0
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
                
                int32_t var_118
                int32_t var_168_1 = var_118
                int32_t eax
                eax.b = esi_1[2]
                int32_t eax_2
                eax_2.b = esi_1[1]
                int32_t eax_4
                eax_4.b = *esi_1
                uint32_t edx_5 = (*(&data_4e3d680 + (eax << 2)) + *(&data_4e3e280 + (eax_2 << 2))
                    + *(&data_4e3de80 + (eax_4 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_6 = *(&data_4e3da80 + var_cc)
                int32_t ebx_6
                ebx_6.b = esi_1[2]
                int32_t eax_8 = edx_5 + *(((ebx_6 - edx_5) << 2) + eax_6)
                int32_t eax_9
                eax_9.b = not.b(eax_8.b)
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t eax_12 = var_e0
                    + *(((eax_9 + *(((eax_8 - eax_9) << 2) + var_d0) - var_e0) << 2) + var_d4)
                int32_t var_88
                int32_t ebx_19 = eax_12 + var_88
                char eax_15
                
                if (eax_12 + var_88 s< 0)
                    if (ebx_19 s< 0xffffff01)
                        ebx_19 = 0xffffff01
                    
                    int32_t ebx_28
                    ebx_28.b = edi[2]
                    eax_15 = (*((ebx_28 << 2) + *((ebx_19 << 2) + data_4ced578))).b
                else
                    if (ebx_19 s> 0xff)
                        ebx_19 = 0xff
                    
                    int32_t ebx_22
                    ebx_22.b = edi[2]
                    eax_15 = (*(((ebx_22 - 0xff) << 2) + *((ebx_19 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_15
                int32_t ebx_31
                ebx_31.b = esi_1[1]
                int32_t eax_18 = edx_5 + *(((ebx_31 - edx_5) << 2) + eax_6)
                int32_t eax_19
                eax_19.b = not.b(eax_18.b)
                int32_t var_dc
                int32_t eax_22 = var_dc
                    + *(((eax_19 + *(((eax_18 - eax_19) << 2) + var_d0) - var_dc) << 2) + var_d4)
                int32_t var_84
                int32_t ebx_44 = eax_22 + var_84
                char eax_25
                
                if (eax_22 + var_84 s< 0)
                    if (ebx_44 s< 0xffffff01)
                        ebx_44 = 0xffffff01
                    
                    int32_t ebx_53
                    ebx_53.b = edi[1]
                    eax_25 = (*((ebx_53 << 2) + *((ebx_44 << 2) + data_4ced578))).b
                else
                    if (ebx_44 s> 0xff)
                        ebx_44 = 0xff
                    
                    int32_t ebx_47
                    ebx_47.b = edi[1]
                    eax_25 = (*(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_25
                int32_t ebx_56
                ebx_56.b = *esi_1
                int32_t eax_28 = edx_5 + *(((ebx_56 - edx_5) << 2) + eax_6)
                int32_t eax_29
                eax_29.b = not.b(eax_28.b)
                int32_t var_d8
                int32_t eax_32 = var_d8
                    + *(((eax_29 + *(((eax_28 - eax_29) << 2) + var_d0) - var_d8) << 2) + var_d4)
                int32_t var_80
                int32_t ebx_69 = eax_32 + var_80
                char eax_35
                
                if (eax_32 + var_80 s< 0)
                    if (ebx_69 s< 0xffffff01)
                        ebx_69 = 0xffffff01
                    
                    int32_t ebx_78
                    ebx_78.b = *edi
                    eax_35 = (*((ebx_78 << 2) + *((ebx_69 << 2) + data_4ced578))).b
                else
                    if (ebx_69 s> 0xff)
                        ebx_69 = 0xff
                    
                    int32_t ebx_72
                    ebx_72.b = *edi
                    eax_35 = (*(((ebx_72 - 0xff) << 2) + *((ebx_69 << 2) + data_4ced578))).b - 1
                
                *edi = eax_35
            
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
