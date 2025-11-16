// 函数: sub_4d6140
// 地址: 0x4d6140
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0xffffffff
int32_t eax = 0xffffffff

if (arg2 == 0)
    esi = arg2 + 0x58
    eax = arg2 + 0x5a
else if (arg2 == 1)
    esi = arg2 + 0x59
    eax = arg2 + 0x57

if (arg1 == 0x26 || arg1 == 0x68)
    data_13701f6 += 1
else
    if (arg1 == 0x28 || arg1 == 0x62)
        data_137023e += 1
        int32_t eax_10 = arg1 * 9
        *((eax_10 << 2) + &data_1370676) += 1
        return eax_10
    
    if (arg1 == 0x25 || arg1 == 0x64)
        data_1370262 += 1
        int32_t eax_9 = arg1 * 9
        *((eax_9 << 2) + &data_1370676) += 1
        return eax_9
    
    if (arg1 == 0x27 || arg1 == 0x66)
        data_137021a += 1
        int32_t eax_8 = arg1 * 9
        *((eax_8 << 2) + &data_1370676) += 1
        return eax_8
    
    if (arg1 == 0xd)
    label_4d6267:
        data_13702aa += 1
        int32_t eax_7 = arg1 * 9
        *((eax_7 << 2) + &data_1370676) += 1
        return eax_7
    
    if (esi != 0xffffffff && arg1 == esi)
        goto label_4d6267
    
    if (arg1 == 0x1b)
    label_4d6255:
        data_1370286 += 1
        int32_t eax_6 = arg1 * 9
        *((eax_6 << 2) + &data_1370676) += 1
        return eax_6
    
    if (eax == 0xffffffff)
        if (arg1 == 8)
            goto label_4d6255
    else if (arg1 == eax || arg1 == 8)
        goto label_4d6255
    
    if (arg1 == 1)
        data_13702aa += 1
        int32_t eax_1 = arg1 * 9
        data_13702ce += 1
        *((eax_1 << 2) + &data_1370676) += 1
        return eax_1
    
    if (arg1 == 2)
        data_1370286 += 1
        int32_t eax_2 = arg1 * 9
        data_13702f2 += 1
        *((eax_2 << 2) + &data_1370676) += 1
        return eax_2
    
    if (arg1 == 0x20)
        data_1370316 += 1
        int32_t eax_3 = arg1 * 9
        *((eax_3 << 2) + &data_1370676) += 1
        return eax_3
    
    if (arg1 == 0x21)
        data_137033a += 1
        int32_t eax_4 = arg1 * 9
        *((eax_4 << 2) + &data_1370676) += 1
        return eax_4
    
    if (arg1 == 0x22)
        data_137035e += 1
        int32_t eax_5 = arg1 * 9
        *((eax_5 << 2) + &data_1370676) += 1
        return eax_5

int32_t eax_11 = arg1 * 9
*((eax_11 << 2) + &data_1370676) += 1
return eax_11
