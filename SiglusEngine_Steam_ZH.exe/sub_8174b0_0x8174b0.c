// 函数: sub_8174b0
// 地址: 0x8174b0
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
            int32_t var_d0
            int32_t eax_13 =
                var_f8 + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_f8) << 2) + var_ec)
            int32_t var_88
            int32_t ebx_22 = eax_13 + var_88
            int32_t ebx_30
            
            if (eax_13 + var_88 s< 0)
                if (ebx_22 s< 0xffffff01)
                    ebx_22 = 0xffffff01
                
                int32_t ebx_33
                ebx_33.b = edi[2]
                ebx_30 = *((ebx_33 << 2) + *((ebx_22 << 2) + data_4ced578))
            else
                if (ebx_22 s> 0xff)
                    ebx_22 = 0xff
                
                int32_t ebx_25
                ebx_25.b = edi[2]
                ebx_30 = *(((ebx_25 - 0xff) << 2) + *((ebx_22 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_16
            eax_16.b = edi[2]
            edi[2] = eax_16.b + (*(((ebx_30 - eax_16) << 2) + edx_1)).b
            int32_t ebx_39
            ebx_39.b = var_124[1]
            int32_t eax_19 = edx_5 + *(((ebx_39 - edx_5) << 2) + eax_7)
            int32_t eax_20
            eax_20.b = not.b(eax_19.b)
            int32_t var_f4
            int32_t var_e8
            int32_t eax_23 =
                var_f4 + *(((eax_20 + *(((eax_19 - eax_20) << 2) + var_d0) - var_f4) << 2) + var_e8)
            int32_t var_84
            int32_t ebx_52 = eax_23 + var_84
            int32_t ebx_60
            
            if (eax_23 + var_84 s< 0)
                if (ebx_52 s< 0xffffff01)
                    ebx_52 = 0xffffff01
                
                int32_t ebx_63
                ebx_63.b = edi[1]
                ebx_60 = *((ebx_63 << 2) + *((ebx_52 << 2) + data_4ced578))
            else
                if (ebx_52 s> 0xff)
                    ebx_52 = 0xff
                
                int32_t ebx_55
                ebx_55.b = edi[1]
                ebx_60 = *(((ebx_55 - 0xff) << 2) + *((ebx_52 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_26
            eax_26.b = edi[1]
            edi[1] = eax_26.b + (*(((ebx_60 - eax_26) << 2) + edx_1)).b
            int32_t ebx_69
            ebx_69.b = *var_124
            int32_t eax_29 = edx_5 + *(((ebx_69 - edx_5) << 2) + eax_7)
            int32_t eax_30
            eax_30.b = not.b(eax_29.b)
            int32_t var_f0
            int32_t var_e4
            int32_t eax_33 =
                var_f0 + *(((eax_30 + *(((eax_29 - eax_30) << 2) + var_d0) - var_f0) << 2) + var_e4)
            int32_t var_80
            int32_t ebx_82 = eax_33 + var_80
            int32_t ebx_90
            
            if (eax_33 + var_80 s< 0)
                if (ebx_82 s< 0xffffff01)
                    ebx_82 = 0xffffff01
                
                int32_t ebx_93
                ebx_93.b = *edi
                ebx_90 = *((ebx_93 << 2) + *((ebx_82 << 2) + data_4ced578))
            else
                if (ebx_82 s> 0xff)
                    ebx_82 = 0xff
                
                int32_t ebx_85
                ebx_85.b = *edi
                ebx_90 = *(((ebx_85 - 0xff) << 2) + *((ebx_82 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_36
            eax_36.b = *edi
            *edi = eax_36.b + (*(((ebx_90 - eax_36) << 2) + edx_1)).b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
