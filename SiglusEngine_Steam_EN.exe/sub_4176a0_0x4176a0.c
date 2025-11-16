// 函数: sub_4176a0
// 地址: 0x4176a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx

if (data_131d2d0 u> 0x1f)
    return 

void* esi_1 = &data_131d32c
int32_t i_1 = 0x10
int32_t i

do
    if (*esi_1 != 0)
        int32_t edi_1 = data_1af413c
        
        if (edi_1 == 0)
        label_4176fc:
            HGLOBAL hMem = *esi_1
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*esi_1)
                *esi_1 = 0
            
            goto label_417717
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*esi_1 == 0)
        label_417717:
            *(esi_1 + 4) = 0
            
            if (edi_1 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(esi_1) != 0)
            goto label_4176fc
    else
        *(esi_1 + 4) = 0
    
    sub_4d6c40(esi_1 + 8, esi_1 + 0xc)
    *(esi_1 + 0x158) += 1
    *(esi_1 + 0x270) += 1
    esi_1 += 0x3b4
    i = i_1
    i_1 -= 1
while (i != 1)
