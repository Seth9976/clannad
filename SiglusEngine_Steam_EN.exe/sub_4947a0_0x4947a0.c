// 函数: sub_4947a0
// 地址: 0x4947a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = &data_1b8c890
int32_t i_1 = 0x2710
int32_t result
int32_t i

do
    if (*esi != 0)
        int32_t edi_1 = data_1af413c
        
        if (edi_1 == 0)
        label_4947f6:
            HGLOBAL hMem = *esi
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*esi)
                *esi = 0
            
            goto label_494811
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*esi == 0)
        label_494811:
            *(esi + 4) = 0
            
            if (edi_1 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(esi) != 0)
            goto label_4947f6
    else
        *(esi + 4) = 0
    
    sub_4d6c40(esi + 8, esi + 0xc)
    result = sub_4d6c40(esi + 0x10, esi + 0x14)
    *(esi + 0x1c) = 0
    esi += 0x24
    i = i_1
    i_1 -= 1
while (i != 1)
return result
