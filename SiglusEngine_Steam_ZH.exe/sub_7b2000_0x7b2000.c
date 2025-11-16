// 函数: sub_7b2000
// 地址: 0x7b2000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
char* var_124
char* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = esi_1[3]
        
        if (ebx_1 != 0)
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t eax_1
            eax_1.b = esi_1[2]
            int32_t eax_3
            eax_3.b = esi_1[1]
            int32_t eax_5
            eax_5.b = *esi_1
            uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_7 = *(&data_4e3da80 + var_cc)
            int32_t ebx_9
            ebx_9.b = esi_1[2]
            int32_t var_f8
            int32_t var_ec
            int32_t eax_11 =
                var_f8 + *(((edx_5 + *(((ebx_9 - edx_5) << 2) + eax_7) - var_f8) << 2) + var_ec)
            int32_t var_88
            int32_t ebx_18 = eax_11 + var_88
            int32_t ebx_26
            
            if (eax_11 + var_88 s< 0)
                if (ebx_18 s< 0xffffff01)
                    ebx_18 = 0xffffff01
                
                int32_t ebx_29
                ebx_29.b = edi[2]
                ebx_26 = *((ebx_29 << 2) + *((ebx_18 << 2) + data_4ced578))
            else
                if (ebx_18 s> 0xff)
                    ebx_18 = 0xff
                
                int32_t ebx_21
                ebx_21.b = edi[2]
                ebx_26 = *(((ebx_21 - 0xff) << 2) + *((ebx_18 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_14
            eax_14.b = edi[2]
            edi[2] = eax_14.b + (*(((ebx_26 - eax_14) << 2) + edx_1)).b
            int32_t ebx_35
            ebx_35.b = esi_1[1]
            int32_t var_f4
            int32_t var_e8
            int32_t eax_19 =
                var_f4 + *(((edx_5 + *(((ebx_35 - edx_5) << 2) + eax_7) - var_f4) << 2) + var_e8)
            int32_t var_84
            int32_t ebx_44 = eax_19 + var_84
            int32_t ebx_52
            
            if (eax_19 + var_84 s< 0)
                if (ebx_44 s< 0xffffff01)
                    ebx_44 = 0xffffff01
                
                int32_t ebx_55
                ebx_55.b = edi[1]
                ebx_52 = *((ebx_55 << 2) + *((ebx_44 << 2) + data_4ced578))
            else
                if (ebx_44 s> 0xff)
                    ebx_44 = 0xff
                
                int32_t ebx_47
                ebx_47.b = edi[1]
                ebx_52 = *(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_22
            eax_22.b = edi[1]
            edi[1] = eax_22.b + (*(((ebx_52 - eax_22) << 2) + edx_1)).b
            int32_t ebx_61
            ebx_61.b = *esi_1
            int32_t var_f0
            int32_t var_e4
            int32_t eax_27 =
                var_f0 + *(((edx_5 + *(((ebx_61 - edx_5) << 2) + eax_7) - var_f0) << 2) + var_e4)
            int32_t var_80
            int32_t ebx_70 = eax_27 + var_80
            int32_t ebx_78
            
            if (eax_27 + var_80 s< 0)
                if (ebx_70 s< 0xffffff01)
                    ebx_70 = 0xffffff01
                
                int32_t ebx_81
                ebx_81.b = *edi
                ebx_78 = *((ebx_81 << 2) + *((ebx_70 << 2) + data_4ced578))
            else
                if (ebx_70 s> 0xff)
                    ebx_70 = 0xff
                
                int32_t ebx_73
                ebx_73.b = *edi
                ebx_78 = *(((ebx_73 - 0xff) << 2) + *((ebx_70 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_30
            eax_30.b = *edi
            *edi = eax_30.b + (*(((ebx_78 - eax_30) << 2) + edx_1)).b
        
        esi_1 = &esi_1[4]
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 = &esi_1[var_120]
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
