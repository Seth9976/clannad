// 函数: sub_4197e0
// 地址: 0x4197e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1

if (data_1321ebc != 0)
    int32_t edi_1 = data_1321eb8
    int32_t eax_1 = 0
    void* esi_1 = data_1321ec0
    
    if (edi_1 s> 0)
        do
            if (*(esi_1 + 0x20) == arg1)
                int32_t ecx_1 = 0
                
                if (data_12dc4bc != 0)
                    ecx_1 = 0x1a
                    
                    if (arg2 != 0)
                        arg2 = 1
                
                if (sub_4e8000(eax_1, *(esi_1 + 0x20), ecx_1 + 0x19, arg2, &data_704898) != 0)
                    return 1
                
                sub_418fc0(esi_1, *(esi_1 + 0x20))
                return 0
            
            eax_1 += 1
            esi_1 += 0x3c
        while (eax_1 s< edi_1)

return 0
