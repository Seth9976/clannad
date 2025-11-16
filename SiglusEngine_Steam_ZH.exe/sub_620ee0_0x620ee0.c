// 函数: sub_620ee0
// 地址: 0x620ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = data_bac4ec
int32_t ebx = *result
int32_t ecx = result[1]

if (ebx != ecx)
    int32_t var_c_1 = 0
    result = (ecx - ebx) s/ 0x1c
    
    if (result s> 0)
        int32_t ecx_2 = 0
        int32_t var_8_1 = 0
        int16_t** edi_2 = data_bac510 + 0xbc1c
        
        do
            if (*(ecx_2 + ebx + 0x18) == 0 && edi_2[-5] == 2)
                int32_t* eax_3
                
                if (arg1[5] u< 8)
                    eax_3 = arg1
                else
                    eax_3 = *arg1
                
                int32_t var_1c_1 = arg1[4]
                int32_t eax_4
                int32_t ecx_4
                eax_4, ecx_4 = sub_536340(&edi_2[-0xb], ecx_2, edi_2[-7], eax_3)
                int32_t eax_6
                
                if (eax_4 != 0)
                    int32_t* eax_5
                    
                    if (arg1[5] u< 8)
                        eax_5 = arg1
                    else
                        eax_5 = *arg1
                    
                    int32_t var_1c_2 = arg1[4]
                    eax_6 = sub_536340(&edi_2[-4], ecx_4, *edi_2, eax_5)
                
                if (eax_4 != 0 && eax_6 != 0)
                    ecx_2 = var_8_1
                else
                    ecx_2 = var_8_1
                    *(ecx_2 + *data_bac4ec + 0x18) = 1
            
            int32_t* eax_9 = data_bac4ec
            var_c_1 += 1
            edi_2 = &edi_2[0x12]
            var_8_1 = ecx_2 + 0x1c
            ebx = *eax_9
            ecx_2 = var_8_1
            result = (eax_9[1] - ebx) s/ 0x1c
        while (var_c_1 s< result)

return result
