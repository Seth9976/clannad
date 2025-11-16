// 函数: sub_564300
// 地址: 0x564300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
data_1318518 = arg1
int32_t result

if (arg1 u> 0x13)
    result = data_20ca9f4
else
    switch (arg1)
        case 0
            result = 0
            data_20ca9f4 = 0
        case 1
            result = 4
            data_20ca9f4 = 4
        case 2
            result = 8
            data_20ca9f4 = 8
        case 3
            result = 0xc
            data_20ca9f4 = 0xc
        case 4
            result = 0x3e8
            data_20ca9f4 = 0x3e8
        case 5
            result = 0x3e9
            data_20ca9f4 = 0x3e9
        case 6
            result = 0x3ea
            data_20ca9f4 = 0x3ea
        case 7
            result = 0x3eb
            data_20ca9f4 = 0x3eb
        case 8
            result = 0x3ec
            data_20ca9f4 = 0x3ec
        case 9
            result = 0x3ed
            data_20ca9f4 = 0x3ed
        case 0xa
            result = 0x3ee
            data_20ca9f4 = 0x3ee
        case 0xb
            result = 0x3ef
            data_20ca9f4 = 0x3ef
        case 0xc
            result = 0x3f0
            data_20ca9f4 = 0x3f0
        case 0xd
            result = 0x3f1
            data_20ca9f4 = 0x3f1
        case 0xe
            result = 0x3f2
            data_20ca9f4 = 0x3f2
        case 0xf
            result = 0x3f3
            data_20ca9f4 = 0x3f3
        case 0x10
            result = 0x3f4
            data_20ca9f4 = 0x3f4
        case 0x11
            result = 0x3f5
            data_20ca9f4 = 0x3f5
        case 0x12
            result = 0x3f6
            data_20ca9f4 = 0x3f6
        case 0x13
            result = 0x3f7
            data_20ca9f4 = 0x3f7

if (arg2 == 0)
    return result

BOOL bEnable

if (result s>= 0x3e8)
    sub_5636d0()
    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef1), 1)
    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef2), 1)
    bEnable = 1
else
    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef1), 0)
    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef2), 0)
    bEnable = 0

EnableWindow(GetDlgItem(data_1af0a78, 0x4ef3), bEnable)
return sub_563b20(1)
