// 函数: sub_411600
// 地址: 0x411600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

for (int32_t* i = &data_976b60; i s< 0x976f80; i = &i[8])
    if (*i != 0)
        int32_t edi_2 = data_1af413c
        
        if (edi_2 == 0)
        label_411646:
            BOOL hMem = *i
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*i)
                *i = 0
            
            goto label_411661
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*i == 0)
        label_411661:
            i[1] = 0
            
            if (edi_2 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(i).b != 0)
            goto label_411646
    else
        i[1] = 0
