// 函数: sub_48b0c0
// 地址: 0x48b0c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_7192e0
data_1af17c8 = 1

if (arg1 == 0)
    eax = 2

data_7192e0 = eax

if (eax == 0)
    data_7192e4 = data_131310c
    int32_t* eax_11
    int80_t st0_2
    eax_11, st0_2 = sub_489150()
    int32_t eax_12
    int32_t ecx_5
    eax_12, ecx_5 = sub_411500(eax_11, data_70300c, 0x1e, data_7030dc)
    int32_t var_14_5 = 0
    int32_t var_18_4 = 0xff
    int32_t var_1c_4 = 0xffffff01
    int32_t var_20_3 = 0
    int32_t var_24_2 = 0
    sub_584980(eax_12, data_976f18, data_976f14, data_976f1c, data_1332b54, data_70300c, 
        data_7030dc, 0, 0, 0, 0, 0, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, ecx_5, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)
    data_1332b54 = data_976f14
    sub_4a5090()
    data_7192e0 = 1
else if (eax == 1)
    int32_t* eax_6
    int80_t st0_1
    eax_6, st0_1 = sub_489150()
    int32_t eax_7 = sub_4d2110(eax_6, data_131310c, data_7192e4, 0x1f4, 0, 0x1f4)
    int32_t var_14_3 = 0
    int32_t var_18_3 = 0xff
    int32_t eax_8
    int32_t ecx_3
    eax_8, ecx_3 = sub_4d2110(eax_7, data_131310c, data_7192e4, 0x1f4, 0xffffff01, 0)
    int32_t var_1c_3 = eax_8
    int32_t var_20_2 = 0
    int32_t var_24_1 = 0
    sub_584980(eax_8, data_976f18, data_976f14, data_976f1c, data_1332b54, data_70300c, 
        data_7030dc, 0, 0, 0, 0, 0, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, ecx_3, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)
    data_1332b54 = data_976f14
    sub_4a5090()
    
    if (eax_7 == 0x1f4)
        data_7192e0 = 2
else if (eax == 2)
    sub_4d6c40(0x976f10, &data_976f14)
    data_976f18 = 0
    data_976f1c = 0
    sub_4a5090()
    void* ecx = data_703660
    
    if (ecx != 0xffffffff)
        uint32_t eax_4 = zx.d(data_703664)
        void* var_14_1 = ecx
        uint32_t var_18_1 = eax_4
        sub_4a33f0(eax_4, data_703668, ecx, data_70366c)
    
    HWND eax_5 = sub_41e620()
    
    if (data_976b08 != 0 && data_976b2c == 1)
        int32_t var_14_2 = 1
        int32_t var_18_2 = data_976b3c
        int32_t var_1c_2 = data_976b38
        sub_4a38a0(eax_5, data_976b30, &data_976b08, data_976b34)
    
    data_1af1728 = 1
    sub_42d590()
