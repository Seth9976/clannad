// 函数: sub_87b080
// 地址: 0x87b080
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
                int32_t var_f8
                int32_t var_ec
                int32_t eax_10 =
                    var_f8 + *(((edx_5 + *(((ebx_6 - edx_5) << 2) + eax_6) - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_15 = eax_10 + var_88
                char eax_13
                
                if (eax_10 + var_88 s< 0)
                    if (ebx_15 s< 0xffffff01)
                        ebx_15 = 0xffffff01
                    
                    int32_t ebx_24
                    ebx_24.b = edi[2]
                    eax_13 = (*((ebx_24 << 2) + *((ebx_15 << 2) + data_4ced578))).b
                else
                    if (ebx_15 s> 0xff)
                        ebx_15 = 0xff
                    
                    int32_t ebx_18
                    ebx_18.b = edi[2]
                    eax_13 = (*(((ebx_18 - 0xff) << 2) + *((ebx_15 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_13
                int32_t ebx_27
                ebx_27.b = esi_1[1]
                int32_t var_f4
                int32_t var_e8
                int32_t eax_18 = var_f4
                    + *(((edx_5 + *(((ebx_27 - edx_5) << 2) + eax_6) - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_36 = eax_18 + var_84
                char eax_21
                
                if (eax_18 + var_84 s< 0)
                    if (ebx_36 s< 0xffffff01)
                        ebx_36 = 0xffffff01
                    
                    int32_t ebx_45
                    ebx_45.b = edi[1]
                    eax_21 = (*((ebx_45 << 2) + *((ebx_36 << 2) + data_4ced578))).b
                else
                    if (ebx_36 s> 0xff)
                        ebx_36 = 0xff
                    
                    int32_t ebx_39
                    ebx_39.b = edi[1]
                    eax_21 = (*(((ebx_39 - 0xff) << 2) + *((ebx_36 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_21
                int32_t ebx_48
                ebx_48.b = *esi_1
                int32_t var_f0
                int32_t var_e4
                int32_t eax_26 = var_f0
                    + *(((edx_5 + *(((ebx_48 - edx_5) << 2) + eax_6) - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_57 = eax_26 + var_80
                char eax_29
                
                if (eax_26 + var_80 s< 0)
                    if (ebx_57 s< 0xffffff01)
                        ebx_57 = 0xffffff01
                    
                    int32_t ebx_66
                    ebx_66.b = *edi
                    eax_29 = (*((ebx_66 << 2) + *((ebx_57 << 2) + data_4ced578))).b
                else
                    if (ebx_57 s> 0xff)
                        ebx_57 = 0xff
                    
                    int32_t ebx_60
                    ebx_60.b = *edi
                    eax_29 = (*(((ebx_60 - 0xff) << 2) + *((ebx_57 << 2) + data_4ced578))).b - 1
                
                *edi = eax_29
            
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
