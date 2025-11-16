// 函数: sub_54b050
// 地址: 0x54b050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c2190 = arg1
    sub_54a6b0()
else
    if (arg2 != 0x111)
        return 0
    
    uint32_t eax_4 = zx.d(arg3)
    
    if (eax_4 s<= 0x4fb2)
        if (eax_4 == 0x4fb2)
            data_20c21bc = 0
            return 1
        
        if (eax_4 - 0x4eae u<= 0xa1)
            uint32_t eax_6 = zx.d(*(eax_4 + sub_5463e0+0xea))
            
            switch (eax_6)
                case 0
                    if (arg3 == 0x4eae)
                        sub_4c10a0(eax_6, 0x4eae, data_20c2190, &data_20c2198)
                case 1
                    if (arg3 == 0x4eaf)
                        sub_4c10a0(eax_6, 0x4eaf, data_20c2190, &data_20c21b8)
                case 2
                    if (arg3 == 0x4eb9)
                        sub_4c10a0(eax_6, 0x4eb9, data_20c2190, &data_20c219c)
                case 3
                    if (arg3 == 0x4ec4)
                        sub_4c10a0(eax_6, 0x4ec4, data_20c2190, &data_20c2194)
                case 4
                    if (arg3 == 0x4ec8)
                        sub_4c10a0(eax_6, 0x4ec8, data_20c2190, &data_20c21a0)
                case 5
                    if (arg3 == 0x4ec9)
                        sub_4c10a0(eax_6, 0x4ec9, data_20c2190, &data_20c21a4)
                case 6
                    if (arg3 == 0x4eca)
                        sub_4c10a0(eax_6, 0x4eca, data_20c2190, &data_20c21a8)
                case 7
                    if (arg3 == 0x4ecb)
                        sub_4c10a0(eax_6, 0x4ecb, data_20c2190, &data_20c21ac)
                case 8
                    if (arg3 == 0x4ecc)
                        sub_4c10a0(eax_6, 0x4ecc, data_20c2190, &data_20c21b0)
                case 9
                    if (arg3 == 0x4ecd)
                        sub_4c10a0(eax_6, 0x4ecd, data_20c2190, &data_20c21b4)
                case 0xa
                    sub_547210(data_20c2190)
                case 0xb
                    sub_547c00(data_20c2190, 0)
                case 0xc
                    sub_54aed0()
    else if (eax_4 - 0x4fb3 u<= 6)
        switch (eax_4)
            case 0x4fb3
                data_20c21bc = 1
            case 0x4fb4
                data_20c21bc = 2
            case 0x4fb5
                data_20c21bc = 3
            case 0x4fb6
                data_20c21bc = 4
            case 0x4fb7
                data_20c21bc = 5
            case 0x4fb8
                data_20c21bc = 6
            case 0x4fb9
                data_20c21bc = 7

return 1
