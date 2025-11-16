// 函数: sub_4b9450
// 地址: 0x4b9450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
int32_t i = arg2
int32_t* var_10 = esi

if (esi[2] != 0)
    int32_t edi_1 = 0
    i = sub_4d1be0(i, arg4, i, 0x8c)
    int32_t i_1 = 0
    
    if (i != 0)
        edi_1 = 1
    
    int32_t var_14_1 = edi_1
    
    if (*esi s> 0)
        void* ebx_2 = esi[2] + 0x8c
        void* var_8_1 = ebx_2
        
        do
            int32_t eax
            
            if (edi_1 == 0)
                eax = sub_4d1be0(i, ebx_2 + 0x94, ebx_2, 0x94)
            
            if (edi_1 != 0 || eax != 0)
                int32_t* edi_2 = ebx_2 + 0x1c
                int32_t* esi_1 = ebx_2 + 0xb0
                int32_t j_1 = 4
                int32_t j
                
                do
                    int32_t ecx_2 = *edi_2
                    
                    if (ecx_2 != 0xffffffff || edi_2[1] != ecx_2 || edi_2[2] != ecx_2
                            || edi_2[3] != ecx_2)
                        int32_t var_24_1 = edi_2[3]
                        int32_t var_28_1 = edi_2[2]
                        sub_494c90(ecx_2, edi_2[1])
                    
                    int32_t ecx_3 = *esi_1
                    edi_2 = &edi_2[7]
                    
                    if (ecx_3 != 0xffffffff || esi_1[1] != ecx_3 || esi_1[2] != ecx_3
                            || esi_1[3] != ecx_3)
                        int32_t var_24_2 = esi_1[3]
                        int32_t var_28_2 = esi_1[2]
                        sub_494c90(ecx_3, esi_1[1])
                    
                    esi_1 = &esi_1[7]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                ebx_2 = var_8_1
                esi = var_10
                edi_1 = var_14_1
            
            ebx_2 += 0x1b4
            i = i_1 + 1
            var_8_1 = ebx_2
            i_1 = i
        while (i s< *esi)

return i
