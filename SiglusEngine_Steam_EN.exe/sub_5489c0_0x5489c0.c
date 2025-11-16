// 函数: sub_5489c0
// 地址: 0x5489c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c17b8 = arg1
    sub_547d00()
else
    if (arg2 != 0x111)
        return 0
    
    uint32_t eax_5 = zx.d(arg3)
    
    if (eax_5 == 0x4f28)
        void* const edi_1 = &data_612280
        
        for (PSTR lpString_1 = 0x20c1df8; lpString_1 s< &data_20c2008; )
            SetDlgItemTextA(data_20c17b8, *edi_1, lpString_1)
            lpString_1 = &lpString_1[0x21]
            edi_1 += 4
        
        return 1
    
    if (eax_5 == 0x4f4f)
        sub_548940()
        return 1
    
    if (eax_5 == 0x5019)
        void* const edi = &data_612280
        
        for (PSTR lpString = 0x20c19d8; lpString s< &data_20c1be8; )
            SetDlgItemTextA(data_20c17b8, *edi, lpString)
            lpString = &lpString[0x21]
            edi += 4

return 1
