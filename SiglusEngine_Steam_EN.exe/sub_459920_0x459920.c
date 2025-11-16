// 函数: sub_459920
// 地址: 0x459920
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

for (int32_t* i = &data_7030f0; i s< &data_703190; i = &i[0xa])
    if (*i != 0)
        int32_t edi_2 = data_1af413c
        
        if (edi_2 == 0)
        label_459966:
            BOOL hMem = *i
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*i)
                *i = 0
            
            goto label_459981
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*i == 0)
        label_459981:
            i[1] = 0
            
            if (edi_2 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(i).b != 0)
            goto label_459966
    else
        i[1] = 0
