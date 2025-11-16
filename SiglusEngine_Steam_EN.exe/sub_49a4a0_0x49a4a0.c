// 函数: sub_49a4a0
// 地址: 0x49a4a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = &data_f2e714
int32_t i_1 = 0x400
int32_t i

do
    if (*esi != 0)
        int32_t edi_1 = data_1af413c
        
        if (edi_1 == 0)
        label_49a4e6:
            BOOL hMem = *esi
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*esi)
                *esi = 0
            
            goto label_49a501
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*esi == 0)
        label_49a501:
            *(esi + 4) = 0
            
            if (edi_1 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(esi).b != 0)
            goto label_49a4e6
    else
        *(esi + 4) = 0
    
    esi += 0x34
    i = i_1
    i_1 -= 1
while (i != 1)
