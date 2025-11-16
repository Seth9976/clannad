// 函数: sub_543ab0
// 地址: 0x543ab0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c1538 = arg1
    sub_543670()
else
    if (arg2 != 0x111)
        return 0
    
    uint32_t eax_5 = zx.d(arg3)
    
    if (eax_5 == 0x4e31)
        for (void* const i = &data_612090; i s< &data_612110; i += 4)
            SendDlgItemMessageA(data_20c1538, *i, 0xf1, 0, 0)
        
        return 1
    
    if (eax_5 == 0x4e32)
        for (void* const i_1 = &data_612090; i_1 s< &data_612110; i_1 += 4)
            SendDlgItemMessageA(data_20c1538, *i_1, 0xf1, 1, 0)
        
        return 1
    
    if (eax_5 == 0x4f4f)
        sub_543a50()

return 1
