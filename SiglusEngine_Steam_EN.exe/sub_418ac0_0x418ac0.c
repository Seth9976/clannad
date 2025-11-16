// 函数: sub_418ac0
// 地址: 0x418ac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = &arg1[1]
BOOL hMem

if (arg1[1] != 0)
    hMem = *arg1
    
    if (hMem s> 0)
        int32_t edi_1 = arg1[2]
        int32_t i = 0
        
        if (hMem s> 0)
            do
                sub_418ac0()
                i += 1
                edi_1 += 0x10
            while (i s< *arg1)
        
        ebx = &arg1[1]

if (arg1[1] != 0 && *ebx != 0)
    int32_t edi_2 = data_1af413c
    
    if (edi_2 == 0)
    label_418b28:
        hMem = *ebx
        
        if (hMem != 0)
            GlobalUnlock(hMem)
            GlobalFree(*ebx)
            *ebx = 0
        
        goto label_418b43
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (*ebx == 0)
    label_418b43:
        arg1[2] = 0
        
        if (edi_2 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
    else if (sub_4d6b80(ebx).b != 0)
        goto label_418b28
else
    arg1[2] = 0

arg1[2] = 0
*arg1 = 0
arg1[3] = 0
*ebx = 0
