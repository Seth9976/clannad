// 函数: sub_475090
// 地址: 0x475090
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = data_7031bc
int32_t edx = 0

if (edi s> 0)
    void* esi_1 = &data_12b926c
    void* eax_1 = &data_72d6bc
    
    while (true)
        if (*(eax_1 + 0x650) == 0)
            if (*eax_1 == 0)
            label_4750cc:
                edx += 1
                eax_1 += 0xca0
                esi_1 += 0x24
                
                if (edx s>= edi)
                    break
                
                continue
            else if (*esi_1 s> arg1 && *((edx << 2) + &data_8c16b0) == 0)
                goto label_4750cc
        
        return 1

return 0
