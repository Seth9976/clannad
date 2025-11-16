// 函数: sub_8e01a0
// 地址: 0x8e01a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t var_28
int32_t i_1 = var_28 + 1
int32_t i

do
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp5_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                int32_t var_118
                int32_t var_160_1 = var_118
                char* var_3c
                int32_t eax_1
                eax_1.b = var_3c[2]
                int32_t eax_3
                eax_3.b = var_3c[1]
                int32_t eax_5
                eax_5.b = *var_3c
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_5
                ebx_5.b = var_3c[2]
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t eax_13 = var_f8 + *(((var_e0
                    + *(((edx_5 + *(((ebx_5 - edx_5) << 2) + eax_7) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_18 = eax_13 + var_88
                char eax_16
                
                if (eax_13 + var_88 s< 0)
                    if (ebx_18 s< 0xffffff01)
                        ebx_18 = 0xffffff01
                    
                    int32_t ebx_27
                    ebx_27.b = edi[2]
                    eax_16 = (*((ebx_27 << 2) + *((ebx_18 << 2) + data_4ced578))).b
                else
                    if (ebx_18 s> 0xff)
                        ebx_18 = 0xff
                    
                    int32_t ebx_21
                    ebx_21.b = edi[2]
                    eax_16 = (*(((ebx_21 - 0xff) << 2) + *((ebx_18 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_16
                int32_t ebx_30
                ebx_30.b = var_3c[1]
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_23 = var_f4 + *(((var_dc
                    + *(((edx_5 + *(((ebx_30 - edx_5) << 2) + eax_7) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_43 = eax_23 + var_84
                char eax_26
                
                if (eax_23 + var_84 s< 0)
                    if (ebx_43 s< 0xffffff01)
                        ebx_43 = 0xffffff01
                    
                    int32_t ebx_52
                    ebx_52.b = edi[1]
                    eax_26 = (*((ebx_52 << 2) + *((ebx_43 << 2) + data_4ced578))).b
                else
                    if (ebx_43 s> 0xff)
                        ebx_43 = 0xff
                    
                    int32_t ebx_46
                    ebx_46.b = edi[1]
                    eax_26 = (*(((ebx_46 - 0xff) << 2) + *((ebx_43 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_26
                int32_t ebx_55
                ebx_55.b = *var_3c
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_33 = var_f0 + *(((var_d8
                    + *(((edx_5 + *(((ebx_55 - edx_5) << 2) + eax_7) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_68 = eax_33 + var_80
                char eax
                
                if (eax_33 + var_80 s< 0)
                    if (ebx_68 s< 0xffffff01)
                        ebx_68 = 0xffffff01
                    
                    int32_t ebx_77
                    ebx_77.b = *edi
                    eax = (*((ebx_77 << 2) + *((ebx_68 << 2) + data_4ced578))).b
                else
                    if (ebx_68 s> 0xff)
                        ebx_68 = 0xff
                    
                    int32_t ebx_71
                    ebx_71.b = *edi
                    eax = (*(((ebx_71 - 0xff) << 2) + *((ebx_68 << 2) + data_4ced578))).b - 1
                
                *edi = eax
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
