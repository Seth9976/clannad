// 函数: sub_4d9720
// 地址: 0x4d9720
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* lpsz_1 = arg1

if (lpsz_1 != 0)
    while (*lpsz_1 != 0)
        void* const lpsz = &data_6149a4
        
        while (true)
            arg1.b = *lpsz
            
            if (arg1.b != 0)
                if (*lpsz_1 == arg1.b)
                    return CharNextA(lpsz_1)
                
                lpsz, arg1 = CharNextA(lpsz)
                
                if (lpsz != 0)
                    continue
            
            PSTR lpsz_2
            lpsz_2, arg1 = CharNextA(lpsz_1)
            lpsz_1 = lpsz_2
            break
        
        if (lpsz_1 == 0)
            break

return 0
