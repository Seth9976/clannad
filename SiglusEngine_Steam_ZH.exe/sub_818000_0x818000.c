// 函数: sub_818000
// 地址: 0x818000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t eax_1
            eax_1.b = var_124[2]
            int32_t eax_3
            eax_3.b = var_124[1]
            int32_t eax_5
            eax_5.b = *var_124
            uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_7 = *(&data_4e3da80 + var_cc)
            int32_t ebx_9
            ebx_9.b = var_124[2]
            int32_t eax_9 = edx_5 + *(((ebx_9 - edx_5) << 2) + eax_7)
            int32_t eax_10
            eax_10.b = not.b(eax_9.b)
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t eax_15 = var_f8 + *(((var_e0
                + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec)
            int32_t var_88
            int32_t ebx_26 = eax_15 + var_88
            int32_t ebx_34
            
            if (eax_15 + var_88 s< 0)
                if (ebx_26 s< 0xffffff01)
                    ebx_26 = 0xffffff01
                
                int32_t ebx_37
                ebx_37.b = edi[2]
                ebx_34 = *((ebx_37 << 2) + *((ebx_26 << 2) + data_4ced578))
            else
                if (ebx_26 s> 0xff)
                    ebx_26 = 0xff
                
                int32_t ebx_29
                ebx_29.b = edi[2]
                ebx_34 = *(((ebx_29 - 0xff) << 2) + *((ebx_26 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_18
            eax_18.b = edi[2]
            edi[2] = eax_18.b + (*(((ebx_34 - eax_18) << 2) + edx_1)).b
            int32_t ebx_43
            ebx_43.b = var_124[1]
            int32_t eax_21 = edx_5 + *(((ebx_43 - edx_5) << 2) + eax_7)
            int32_t eax_22
            eax_22.b = not.b(eax_21.b)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t eax_27 = var_f4 + *(((var_dc
                + *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8)
            int32_t var_84
            int32_t ebx_60 = eax_27 + var_84
            int32_t ebx_68
            
            if (eax_27 + var_84 s< 0)
                if (ebx_60 s< 0xffffff01)
                    ebx_60 = 0xffffff01
                
                int32_t ebx_71
                ebx_71.b = edi[1]
                ebx_68 = *((ebx_71 << 2) + *((ebx_60 << 2) + data_4ced578))
            else
                if (ebx_60 s> 0xff)
                    ebx_60 = 0xff
                
                int32_t ebx_63
                ebx_63.b = edi[1]
                ebx_68 = *(((ebx_63 - 0xff) << 2) + *((ebx_60 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_30
            eax_30.b = edi[1]
            edi[1] = eax_30.b + (*(((ebx_68 - eax_30) << 2) + edx_1)).b
            int32_t ebx_77
            ebx_77.b = *var_124
            int32_t eax_33 = edx_5 + *(((ebx_77 - edx_5) << 2) + eax_7)
            int32_t eax_34
            eax_34.b = not.b(eax_33.b)
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t eax_39 = var_f0 + *(((var_d8
                + *(((eax_34 + *(((eax_33 - eax_34) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4)
            int32_t var_80
            int32_t ebx_94 = eax_39 + var_80
            int32_t ebx_102
            
            if (eax_39 + var_80 s< 0)
                if (ebx_94 s< 0xffffff01)
                    ebx_94 = 0xffffff01
                
                int32_t ebx_105
                ebx_105.b = *edi
                ebx_102 = *((ebx_105 << 2) + *((ebx_94 << 2) + data_4ced578))
            else
                if (ebx_94 s> 0xff)
                    ebx_94 = 0xff
                
                int32_t ebx_97
                ebx_97.b = *edi
                ebx_102 = *(((ebx_97 - 0xff) << 2) + *((ebx_94 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_42
            eax_42.b = *edi
            *edi = eax_42.b + (*(((ebx_102 - eax_42) << 2) + edx_1)).b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
