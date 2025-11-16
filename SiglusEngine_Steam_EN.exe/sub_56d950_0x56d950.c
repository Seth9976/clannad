// 函数: sub_56d950
// 地址: 0x56d950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND ecx_3 = data_1af0a6c
data_1af4e8c = 0xffffffff
data_1be46d8 = 0xffffffff
data_1af4e88 = 0xffffffff
WPARAM eax

if (ecx_3 != 0)
    eax = sub_4c1810(ecx_3, 0x4f32)
    
    if (eax s>= 0 && eax s< data_20d19c8)
        int32_t ecx = eax * 3
        data_1af4e8c = *((ecx << 3) + &data_20d59d0)
        data_1be46d8 = *((ecx << 3) + &data_20d59d4)
        data_1af4e88 = *((ecx << 3) + &data_20d59d8)

HWND ecx_1 = data_1af0ac4

if (ecx_1 == 0)
    return 

eax = sub_4c1810(ecx_1, 0x4f32)

if (eax s< 0 || eax s>= data_20ef260)
    return 

int32_t ecx_2 = eax * 3
data_1af4e8c = *((ecx_2 << 3) + &data_20e36e0)
data_1be46d8 = *((ecx_2 << 3) + &data_20e36e4)
data_1af4e88 = *((ecx_2 << 3) + &data_20e36e8)
