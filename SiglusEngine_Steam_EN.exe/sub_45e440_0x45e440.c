// 函数: sub_45e440
// 地址: 0x45e440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x10)

if (result s> 0)
    void* esi_1 = *(arg1 + 0xc)
    
    if (esi_1 != 0)
        int32_t i = 0
        
        if (result s> 0)
            do
                int32_t ecx = *(esi_1 + 0x2c)
                uint32_t eax = zx.d(*(esi_1 + 0x30))
                
                if (ecx != 0)
                    int32_t var_10_2 = 0
                    uint32_t var_14_2 = eax
                    int32_t ecx_2 = neg.d(ecx)
                    int32_t var_18_2 = ecx_2
                    int32_t var_1c_2 = 0
                    int32_t var_20_2 = 0
                    result = sub_584980(eax, data_702fec, data_702fe8, data_702ff0, esi_1 + 0x64, 
                        *(esi_1 + 4), *(esi_1 + 8), 0, 0, 1, *(esi_1 + 0x24), *(esi_1 + 0x28), 
                        data_702ff4, (data_702ff8).b, data_702ffc, data_703000, ecx_2, 0, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)
                else
                    uint32_t var_10_1 = eax
                    int32_t var_14_1 = data_703000
                    int32_t var_18_1 = data_702ffc
                    int32_t var_1c_1 = data_702ff8
                    result = sub_584e80(eax, data_702fec, data_702fe8, data_702ff0, esi_1 + 0x64, 
                        *(esi_1 + 4), *(esi_1 + 8), ecx, ecx, 1, *(esi_1 + 0x24), *(esi_1 + 0x28), 
                        (data_702ff4).b)
                
                esi_1 += *esi_1
                i += 1
            while (i s< *(arg1 + 0x10))

return result
