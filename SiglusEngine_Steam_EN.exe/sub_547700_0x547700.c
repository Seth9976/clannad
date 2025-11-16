// 函数: sub_547700
// 地址: 0x547700
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c176c = arg1
    sub_547550()
    data_20c178c = 1
else if (arg2 != 0x111)
    if (arg2 != 0x114)
        return 0
    
    if (arg4 == GetDlgItem(arg1, 0x4fad))
        LRESULT eax_7 = SendMessageA(GetDlgItem(arg1, 0x4fad), 0x400, 0, 0)
        WaitForSingleObject(data_20c177c, 0xffffffff)
        HANDLE hSemaphore = data_20c177c
        data_20c1770 = eax_7
        data_20c179c = 0
        ReleaseSemaphore(hSemaphore, 1, nullptr)
else if (zx.d(arg3) - 0x4f28 u<= 0x2b)
    uint32_t eax_11 = zx.d(*(zx.d(arg3) + sub_542980+8))
    
    switch (eax_11)
        case 0
            SendMessageA(GetDlgItem(data_20c176c, 0x4fad), 0x405, 1, data_12ff36c)
            sub_5473f0(data_12ff36c)
            sub_547430(data_12ff368)
        case 1
            if (arg3 == 0x4f4e)
                sub_4c10a0(eax_11, 0x4f4e, data_20c176c, &data_20c1774)
            
            BOOL bEnable
            
            if (data_20c1774 == 0)
                bEnable = 0
            else
                bEnable = 1
            
            EnableWindow(GetDlgItem(data_20c176c, 0x4f53), bEnable)
        case 2
            sub_547680()
        case 3
            if (arg3 == 0x4f53)
                sub_4c10a0(eax_11, 0x4f53, data_20c176c, &data_20c1778)

return 1
