// 函数: sub_87ccf0
// 地址: 0x87ccf0
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
                int32_t var_e0
                int32_t var_d4
                int32_t eax_10 =
                    var_e0 + *(((edx_5 + *(((ebx_6 - edx_5) << 2) + eax_6) - var_e0) << 2) + var_d4)
                int32_t var_88
                int32_t ebx_15 = eax_10 + var_88
                int32_t ebx_23
                
                if (eax_10 + var_88 s< 0)
                    if (ebx_15 s< 0xffffff01)
                        ebx_15 = 0xffffff01
                    
                    int32_t ebx_26
                    ebx_26.b = edi[2]
                    ebx_23 = *((ebx_26 << 2) + *((ebx_15 << 2) + data_4ced578))
                else
                    if (ebx_15 s> 0xff)
                        ebx_15 = 0xff
                    
                    int32_t ebx_18
                    ebx_18.b = edi[2]
                    ebx_23 = *(((ebx_18 - 0xff) << 2) + *((ebx_15 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_13
                eax_13.b = edi[2]
                int32_t var_118
                edi[2] = eax_13.b + (*(((ebx_23 - eax_13) << 2) + var_118)).b
                int32_t ebx_32
                ebx_32.b = esi_1[1]
                int32_t var_dc
                int32_t eax_18 = var_dc
                    + *(((edx_5 + *(((ebx_32 - edx_5) << 2) + eax_6) - var_dc) << 2) + var_d4)
                int32_t var_84
                int32_t ebx_41 = eax_18 + var_84
                int32_t ebx_49
                
                if (eax_18 + var_84 s< 0)
                    if (ebx_41 s< 0xffffff01)
                        ebx_41 = 0xffffff01
                    
                    int32_t ebx_52
                    ebx_52.b = edi[1]
                    ebx_49 = *((ebx_52 << 2) + *((ebx_41 << 2) + data_4ced578))
                else
                    if (ebx_41 s> 0xff)
                        ebx_41 = 0xff
                    
                    int32_t ebx_44
                    ebx_44.b = edi[1]
                    ebx_49 = *(((ebx_44 - 0xff) << 2) + *((ebx_41 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_21
                eax_21.b = edi[1]
                edi[1] = eax_21.b + (*(((ebx_49 - eax_21) << 2) + var_118)).b
                int32_t ebx_58
                ebx_58.b = *esi_1
                int32_t var_d8
                int32_t eax_26 = var_d8
                    + *(((edx_5 + *(((ebx_58 - edx_5) << 2) + eax_6) - var_d8) << 2) + var_d4)
                int32_t var_80
                int32_t ebx_67 = eax_26 + var_80
                int32_t ebx_75
                
                if (eax_26 + var_80 s< 0)
                    if (ebx_67 s< 0xffffff01)
                        ebx_67 = 0xffffff01
                    
                    int32_t ebx_78
                    ebx_78.b = *edi
                    ebx_75 = *((ebx_78 << 2) + *((ebx_67 << 2) + data_4ced578))
                else
                    if (ebx_67 s> 0xff)
                        ebx_67 = 0xff
                    
                    int32_t ebx_70
                    ebx_70.b = *edi
                    ebx_75 = *(((ebx_70 - 0xff) << 2) + *((ebx_67 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_29
                eax_29.b = *edi
                *edi = eax_29.b + (*(((ebx_75 - eax_29) << 2) + var_118)).b
            
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
