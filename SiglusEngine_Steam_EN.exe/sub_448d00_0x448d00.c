// 函数: sub_448d00
// 地址: 0x448d00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1af44f0

if (ecx != 0xffffffff)
    ecx.b += 0x41
    int32_t eax
    
    if (data_1333e08 != 0 && data_1352000 == ecx.b)
        eax = data_1333e1c
        
        if (data_1352001 == 0x3a)
            eax = 1
        
        data_1333e1c = eax
    
    if (data_1333e0c != 0 && data_1352208 == ecx.b)
        eax = data_1333e20
        
        if (data_1352209 == 0x3a)
            eax = 1
        
        data_1333e20 = eax
    
    if (data_1333e10 != 0 && data_1352410 == ecx.b)
        eax = data_1333e24
        
        if (data_1352411 == 0x3a)
            eax = 1
        
        data_1333e24 = eax
    
    if (data_1333e14 != 0 && data_1352618 == ecx.b)
        eax = data_1333e28
        
        if (data_1352619 == 0x3a)
            eax = 1
        
        data_1333e28 = eax
    
    if (data_1333e18 != 0 && data_1352820 == ecx.b)
        eax = data_1333e2c
        
        if (data_1352821 == 0x3a)
            eax = 1
        
        data_1333e2c = eax

bool cond:0 = data_108fe90.d == 0
data_1af44e8 = 0

if ((cond:0 || data_1333e20 == 0) && (data_108fe90:4 == 0 || data_1333e24 == 0)
        && (data_108fe90:8 == 0 || data_1333e28 == 0)
        && (data_108fe90:0xc == 0 || data_1333e2c == 0))
    data_1af44e8 = 1
