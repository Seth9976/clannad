// 函数: sub_527660
// 地址: 0x527660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_13130c0:8
int32_t ecx = 0
data_1af1798 = 1
HGLOBAL hMem_1 = nullptr
char var_5 = 1
int32_t var_14 = 0

if (edx s> 0)
    void* edi_1 = data_13130c0:4 + 0x24
    
    do
        int32_t eax_1 = *(edi_1 - 0x10)
        
        if (eax_1 == 0 || eax_1 == 1)
            BOOL esi_1 = 0
            uint32_t var_1c
            
            if (arg1 == 0)
                esi_1 = *edi_1
            else
                char* eax_2 = *edi_1
                uint32_t eax_3 = sub_4a5610(eax_2, nullptr)
                var_1c = eax_3
                
                if (eax_3 s> 1)
                    hMem_1 = nullptr
                    BOOL var_10 = 0
                    sub_4d6960(eax_3, &var_10, &hMem_1, eax_3, "SelBtnStrCommandCut")
                    sub_4a5610(eax_2, var_10)
                    hMem_1 = hMem_1
                    
                    if (var_1c s> 0)
                        esi_1 = var_10
            
            if (var_5 == 0)
                sub_498930(&data_1606c68, 0x61c908)
                sub_498930(&data_1606c68, esi_1)
            else
                if (sub_4989d0(&data_1606c68, esi_1) == 0)
                    break
                
                var_5 = 0
            
            sub_4d6c40(&hMem_1, &var_1c)
            edx = data_13130c0:8
            ecx = var_14
        
        ecx += 1
        edi_1 += 0x2c
        var_14 = ecx
    while (ecx s< edx)
    
    HGLOBAL hMem = hMem_1
    
    if (hMem != 0)
        int32_t edi_2 = data_1af413c
        char eax_5
        
        if (edi_2 != 0)
            WaitForSingleObject(data_7027a8, 0xffffffff)
            eax_5 = sub_4d6b80(&hMem_1)
        
        if (edi_2 == 0 || eax_5 != 0)
            GlobalUnlock(hMem)
            GlobalFree(hMem)
            
            if (edi_2 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)

if (data_1b8ad80.d != 0)
    int32_t eax_6 = data_1b8ad80:0xc
    
    if (eax_6 u<= 0x3f && *(eax_6 * 0x3920 + &data_f89ba4) != 0)
        *(eax_6 * 0x3920 + &data_f89bcc) += 1
    
    sub_499600(&data_1b8ad80)

data_108f2f4 = data_131d2cc
int32_t result = data_1320e58
data_1392cc4 = 0
data_13701e0 = 1
data_1392cc8 = 1
data_f89aec = 0xffffffff
data_f89af0 = 0xffffffff
data_f89af4 = 0xffffffff
data_f89af8 = 0xffffffff
data_108f2e0 = 1
data_108f2f8 = result
data_108f2f0 = 0
data_108f2ec = 0
data_108f2fc = 0
data_108f300 = 0
data_71929c = 0x13
data_7192a0 = 0
data_7192e0 = 0
return result
