// 函数: sub_4b0100
// 地址: 0x4b0100
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t edx_1

if (data_7030d8 == 0)
    edx_1 = data_703050

if (data_7030d8 != 0 || edx_1 == 1)
    result = 1
label_4b01ea:
    
    if (arg1 == 0)
        if (data_7030d8 == arg1)
            data_7030d8 = 1
            return 1
        
        sub_4affd0()
        sub_42d590()
        data_13701d8 = 0
        data_137010c = 1
else if (data_1bff814 == data_1bff810)
    result = 1
    
    if (edx_1 - 0xa2 u> 0x64)
        goto label_4b01ea
    
    switch (edx_1)
        case 0xa2
            if (data_1bfe2a0 != 0)
                goto label_4b01ea
            
            result = 0
            
            if (arg1 == 0)
                data_1bfe2a0 = 1
                sub_4aa990()
                return 0
        case 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 
                0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 
                0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 
                0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 
                0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 
                0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 
                0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff, 0x100, 0x101, 0x102, 0x103, 0x104, 0x105
            goto label_4b01ea
        case 0xaa, 0xab
            if (data_1bfe2a0 != 0)
                goto label_4b01ea
            
            result = 0
            
            if (arg1 == 0)
                data_1bfe2a0 = 1
                sub_4adbf0()
                return 0
        case 0xbb
            if (data_1bfe2a0 != 0)
                goto label_4b01ea
            
            result = 0
            
            if (arg1 == 0)
                data_1bfe2a0 = 1
                sub_4ac2d0()
                return 0
        case 0x106
            if (data_1bfe2a0 != 0)
                goto label_4b01ea
            
            result = 0
            
            if (arg1 == 0)
                data_1bfe2a0 = 1
                sub_4ab180()
                return 0

return result
