// 函数: sub_5c4d40
// 地址: 0x5c4d40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* lpsz_1 = arg1

if (lpsz_1 != 0)
    while (*lpsz_1 != 0)
        void* const lpsz = &data_aee750
        
        while (true)
            int16_t ecx = *lpsz
            
            if (ecx != 0)
                if (*lpsz_1 == ecx)
                    return CharNextW(lpsz_1)
                
                lpsz = CharNextW(lpsz)
                
                if (lpsz != 0)
                    continue
            
            lpsz_1 = CharNextW(lpsz_1)
            break
        
        if (lpsz_1 == 0)
            break

return 0
