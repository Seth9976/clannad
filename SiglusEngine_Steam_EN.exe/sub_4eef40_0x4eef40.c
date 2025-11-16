// 函数: sub_4eef40
// 地址: 0x4eef40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = arg2

if (i_1 s<= 0)
    return 

int32_t* esi_1 = arg1 + 4
int32_t i

do
    if (*esi_1 != 0)
        int32_t edi_1 = data_1af413c
        
        if (edi_1 == 0)
        label_4eef86:
            BOOL hMem = *esi_1
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*esi_1)
                *esi_1 = 0
            
            goto label_4eefa1
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*esi_1 == 0)
        label_4eefa1:
            esi_1[1] = 0
            
            if (edi_1 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(esi_1).b != 0)
            goto label_4eef86
    else
        esi_1[1] = 0
    
    esi_1 = &esi_1[5]
    i = i_1
    i_1 -= 1
while (i != 1)
