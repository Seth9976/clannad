// 函数: sub_488360
// 地址: 0x488360
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx
edx:1.b = arg1
char var_5 = edx.b
void* i = &data_139329c
char var_6 = edx:1.b
void* i_1 = &data_139329c

do
    int32_t ebx_1 = *i
    int32_t ecx = ebx_1 * 0x3920
    int32_t var_c_1 = ecx
    
    if (*(ecx + &data_f8d2e0) != 0)
        for (void* const j = &data_610990; j s< &data_6109d0; j += 4)
            int32_t esi_1 = *j
            
            if (edx:1.b != 0)
            label_4883b4:
                
                if ((&data_703748)[esi_1] != 0 && *(ebx_1 * 0x1d4 + esi_1 + 0x1090bb0) != 0)
                    int32_t* eax_1 = sub_4881f0(ecx + &data_f89afc, esi_1)
                    
                    if (eax_1 == 1)
                        int32_t var_20_1 = esi_1
                        char eax_2
                        eax_2, edx = sub_57de50(eax_1, esi_1, ebx_1, ecx + &data_f89afc)
                        
                        if (eax_2 != 0)
                            data_1320e60 = esi_1
                            data_1320e64 = ebx_1
                            data_1320e5c = 1
                            return eax_2
                    
                    edx:1.b = var_6
                    edx.b = var_5
                    ecx = var_c_1
            else if (edx.b != 0 && (esi_1 == 0xd || esi_1 == 0xe))
                goto label_4883b4
        
        i = i_1
    
    i -= 4
    i_1 = i
while (i s>= &data_13931a0)

return i
