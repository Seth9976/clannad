// 函数: sub_41e520
// 地址: 0x41e520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_f89aec = 0xffffffff
data_f89af0 = 0xffffffff
data_f89af4 = 0xffffffff
data_f89af8 = 0xffffffff

if (arg1 u<= 0xf)
    int32_t esi_1 = arg1 * 5
    
    if (*(arg1 * 0x134 + &data_925270) != 0)
        HWND hWnd_1 = *((esi_1 << 2) + &data_f899ac)
        
        if (hWnd_1 != 0)
            SetWindowLongA(hWnd_1, 0xfffffffc, *((esi_1 << 2) + &data_f899b0))
            HWND hWnd = *((esi_1 << 2) + &data_f899ac)
            *((esi_1 << 2) + &data_f899b0) = 0
            DestroyWindow(hWnd)
            *((esi_1 << 2) + &data_f899ac) = 0
        
        BOOL ho = *((esi_1 << 2) + &data_f899b4)
        
        if (ho != 0)
            ho = DeleteObject(ho)
            *((esi_1 << 2) + &data_f899b4) = 0
        
        *((esi_1 << 2) + &data_f899b8) = 0
        *(arg1 * 0x134 + &data_925270) = 0
        sub_4d1ba0(ho, 0x101, arg1 * 0x134 + &data_9252a0, 0)

if (arg2 != 0)
    return sub_41df00() __tailcall
