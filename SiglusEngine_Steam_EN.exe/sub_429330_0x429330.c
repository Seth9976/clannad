// 函数: sub_429330
// 地址: 0x429330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

for (int32_t i = 0; i s< 0x1f40; i += 4)
    if (*(i + &data_1390760) != 0)
        int32_t ebx_1 = data_1af413c
        
        if (ebx_1 == 0)
        label_429383:
            BOOL hMem = *(i + &data_1390760)
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*(i + &data_1390760))
                *(i + &data_1390760) = 0
            
            *(i + &data_1353040) = 0
            
            if (ebx_1 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else
            WaitForSingleObject(data_7027a8, 0xffffffff)
            
            if (*(i + &data_1390760) == 0)
                goto label_429383
            
            if (sub_4d6b80(i + &data_1390760).b != 0)
                goto label_429383
    else
        *(i + &data_1353040) = 0
