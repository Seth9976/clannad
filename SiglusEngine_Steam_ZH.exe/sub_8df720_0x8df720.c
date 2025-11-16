// 函数: sub_8df720
// 地址: 0x8df720
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
                int32_t eax_11 =
                    var_f8 + *(((edx_5 + *(((ebx_5 - edx_5) << 2) + eax_7) - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_14 = eax_11 + var_88
                char eax_14
                
                if (eax_11 + var_88 s< 0)
                    if (ebx_14 s< 0xffffff01)
                        ebx_14 = 0xffffff01
                    
                    int32_t ebx_23
                    ebx_23.b = edi[2]
                    eax_14 = (*((ebx_23 << 2) + *((ebx_14 << 2) + data_4ced578))).b
                else
                    if (ebx_14 s> 0xff)
                        ebx_14 = 0xff
                    
                    int32_t ebx_17
                    ebx_17.b = edi[2]
                    eax_14 = (*(((ebx_17 - 0xff) << 2) + *((ebx_14 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_14
                int32_t ebx_26
                ebx_26.b = var_3c[1]
                int32_t var_f4
                int32_t var_e8
                int32_t eax_19 = var_f4
                    + *(((edx_5 + *(((ebx_26 - edx_5) << 2) + eax_7) - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_35 = eax_19 + var_84
                char eax_22
                
                if (eax_19 + var_84 s< 0)
                    if (ebx_35 s< 0xffffff01)
                        ebx_35 = 0xffffff01
                    
                    int32_t ebx_44
                    ebx_44.b = edi[1]
                    eax_22 = (*((ebx_44 << 2) + *((ebx_35 << 2) + data_4ced578))).b
                else
                    if (ebx_35 s> 0xff)
                        ebx_35 = 0xff
                    
                    int32_t ebx_38
                    ebx_38.b = edi[1]
                    eax_22 = (*(((ebx_38 - 0xff) << 2) + *((ebx_35 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_22
                int32_t ebx_47
                ebx_47.b = *var_3c
                int32_t var_f0
                int32_t var_e4
                int32_t eax_27 = var_f0
                    + *(((edx_5 + *(((ebx_47 - edx_5) << 2) + eax_7) - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_56 = eax_27 + var_80
                char eax
                
                if (eax_27 + var_80 s< 0)
                    if (ebx_56 s< 0xffffff01)
                        ebx_56 = 0xffffff01
                    
                    int32_t ebx_65
                    ebx_65.b = *edi
                    eax = (*((ebx_65 << 2) + *((ebx_56 << 2) + data_4ced578))).b
                else
                    if (ebx_56 s> 0xff)
                        ebx_56 = 0xff
                    
                    int32_t ebx_59
                    ebx_59.b = *edi
                    eax = (*(((ebx_59 - 0xff) << 2) + *((ebx_56 << 2) + data_4ced578))).b - 1
                
                *edi = eax
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
