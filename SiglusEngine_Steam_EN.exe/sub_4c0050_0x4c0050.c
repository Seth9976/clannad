// 函数: sub_4c0050
// 地址: 0x4c0050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_641b3c

if (eax != 0 && eax != 1)
    goto label_4c008a

uint32_t eax_1 = sub_4bfb10(0x1005)

if (data_208c70c != 0)
    data_208c6ec = 1
    return eax_1

eax = data_641b3c
label_4c008a:

if (eax == 0 || eax == 2)
    eax_1 = sub_4bfb10(0x1001)
    
    if (data_208c70c != 0)
        data_208c6ec = 1
        return eax_1
    
    eax = data_641b3c

if (eax == 0 || eax == 3)
    eax_1 = sub_4bfb10(0x1002)
    
    if (data_208c70c != 0)
        data_208c6ec = 1
        return eax_1
    
    eax = data_641b3c

if (eax == 0 || eax == 4)
    sub_4bfb10(0x1009)
    eax = data_208c6ec
    
    if (data_208c70c != 0)
        eax = 1
    
    data_208c6ec = eax

return eax
