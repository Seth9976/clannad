// 函数: sub_4943e0
// 地址: 0x4943e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = &data_1b8c898
int32_t i_1 = 0x270f
int32_t i

do
    if (*esi != 0)
        int32_t edi_1 = data_1af413c
        
        if (edi_1 == 0)
        label_494426:
            BOOL hMem = *esi
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*esi)
                *esi = 0
            
            goto label_494441
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*esi == 0)
        label_494441:
            *(esi + 4) = 0
            
            if (edi_1 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(esi).b != 0)
            goto label_494426
    else
        *(esi + 4) = 0
    
    esi += 0x24
    i = i_1
    i_1 -= 1
while (i != 1)
