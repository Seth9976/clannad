// 函数: sub_433f10
// 地址: 0x433f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

for (void* i = &data_12f1acc; i s< &data_12f3a0c; i += 4)
    if (*i != 0)
        int32_t edi_1 = data_1af413c
        
        if (edi_1 == 0)
        label_433f58:
            HGLOBAL hMem = *i
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*i)
                *i = 0
            
            goto label_433f73
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*i == 0)
        label_433f73:
            *(i + 0x1f40) = 0
            
            if (edi_1 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(i) != 0)
            goto label_433f58
    else
        *(i + 0x1f40) = 0

for (void* i_1 = &data_12f594c; i_1 s< &data_12f788c; i_1 += 4)
    if (*i_1 != 0)
        int32_t edi_2 = data_1af413c
        
        if (edi_2 == 0)
        label_433fdc:
            HGLOBAL hMem_1 = *i_1
            
            if (hMem_1 != 0)
                GlobalUnlock(hMem_1)
                GlobalFree(*i_1)
                *i_1 = 0
            
            goto label_433ff7
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*i_1 == 0)
        label_433ff7:
            *(i_1 + 0x1f40) = 0
            
            if (edi_2 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(i_1) != 0)
            goto label_433fdc
    else
        *(i_1 + 0x1f40) = 0

return WaitForSingleObject
