// 函数: sub_550dd0
// 地址: 0x550dd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s< 0)
    return 0

if (arg3 != 0xc && arg3 != 0x12 && arg3 != 0xffffff9d && arg3 != 0xffffff9e)
    if (arg3 s>= 0x1a)
        uint32_t edi_12
        
        if (arg3 s< 0x34)
            int32_t ebx_2 = arg2 & 0x8000001f
            
            if (ebx_2 s< 0)
                ebx_2 = ((ebx_2 - 1) | 0xffffffe0) + 1
            
            int32_t eax_24
            int32_t edx
            edx:eax_24 = sx.q(arg2)
            edi_12 = arg4 & 1
            int32_t edx_3 = ((edx & 0x1f) + eax_24) s>> 5
            
            switch (arg3)
                case 0x1a
                    int32_t* esi_1 = data_20c2cac + (edx_3 << 2)
                    *esi_1 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_1) | edi_12 << ebx_2.b
                    return edi_12
                case 0x1b
                    int32_t* esi_2 = data_20c2cb4 + (edx_3 << 2)
                    *esi_2 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_2) | edi_12 << ebx_2.b
                    return edi_12
                case 0x1c
                    int32_t* esi_3 = data_20c2cbc + (edx_3 << 2)
                    *esi_3 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_3) | edi_12 << ebx_2.b
                    return edi_12
                case 0x1d
                    int32_t* esi_4 = data_20c2cc4 + (edx_3 << 2)
                    *esi_4 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_4) | edi_12 << ebx_2.b
                    return edi_12
                case 0x1e
                    int32_t* esi_5 = data_20c2ccc + (edx_3 << 2)
                    *esi_5 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_5) | edi_12 << ebx_2.b
                    return edi_12
                case 0x1f
                    int32_t* esi_6 = data_20c2cd4 + (edx_3 << 2)
                    *esi_6 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_6) | edi_12 << ebx_2.b
                    return edi_12
                case 0x20
                    int32_t* esi_7 = data_20c2cdc + (edx_3 << 2)
                    *esi_7 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_7) | edi_12 << ebx_2.b
                    return edi_12
            
            if (arg3 != 0x21)
                if (arg3 != 0x22)
                    if (arg3 != 0x23)
                        if (arg3 == 0x33)
                            int32_t* esi_11 = data_20c2cfc + (edx_3 << 2)
                            *esi_11 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_11)
                                | edi_12 << ebx_2.b
                    else if (arg2 s< data_63ed3c)
                        int32_t* esi_10 = data_20c2cf4 + (edx_3 << 2)
                        *esi_10 =
                            (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_10) | edi_12 << ebx_2.b
                else if (arg2 s< data_63ed38)
                    int32_t* esi_9 = data_20c2cec + (edx_3 << 2)
                    *esi_9 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_9) | edi_12 << ebx_2.b
            else if (arg2 s< data_63ed34)
                int32_t* esi_8 = data_20c2ce4 + (edx_3 << 2)
                *esi_8 = (not.d(*((ebx_2 << 2) + &data_611440)) & *esi_8) | edi_12 << ebx_2.b
            
            return edi_12
        
        if (arg3 s< 0x4e)
            int32_t ebx_6 = arg2 & 0x8000000f
            
            if (ebx_6 s< 0)
                ebx_6 = ((ebx_6 - 1) | 0xfffffff0) + 1
            
            int32_t eax_70
            int32_t edx_48
            edx_48:eax_70 = sx.q(arg2)
            edi_12 = arg4 & 3
            int32_t edx_51 = ((edx_48 & 0xf) + eax_70) s>> 4
            
            switch (arg3)
                case 0x34
                    int32_t* esi_12 = data_20c2cac + (edx_51 << 2)
                    *esi_12 =
                        (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_12) | edi_12 << (ebx_6.b * 2)
                    return edi_12
                case 0x35
                    int32_t* esi_13 = data_20c2cb4 + (edx_51 << 2)
                    *esi_13 =
                        (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_13) | edi_12 << (ebx_6.b * 2)
                    return edi_12
                case 0x36
                    int32_t* esi_14 = data_20c2cbc + (edx_51 << 2)
                    *esi_14 =
                        (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_14) | edi_12 << (ebx_6.b * 2)
                    return edi_12
                case 0x37
                    int32_t* esi_15 = data_20c2cc4 + (edx_51 << 2)
                    *esi_15 =
                        (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_15) | edi_12 << (ebx_6.b * 2)
                    return edi_12
                case 0x38
                    int32_t* esi_16 = data_20c2ccc + (edx_51 << 2)
                    *esi_16 =
                        (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_16) | edi_12 << (ebx_6.b * 2)
                    return edi_12
                case 0x39
                    int32_t* esi_17 = data_20c2cd4 + (edx_51 << 2)
                    *esi_17 =
                        (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_17) | edi_12 << (ebx_6.b * 2)
                    return edi_12
                case 0x3a
                    int32_t* esi_18 = data_20c2cdc + (edx_51 << 2)
                    *esi_18 =
                        (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_18) | edi_12 << (ebx_6.b * 2)
                    return edi_12
            
            if (arg3 != 0x3b)
                if (arg3 != 0x3c)
                    if (arg3 != 0x3d)
                        if (arg3 == 0x4d)
                            int32_t* esi_22 = data_20c2cfc + (edx_51 << 2)
                            *esi_22 = (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_22)
                                | edi_12 << (ebx_6.b * 2)
                    else if (arg2 s< data_63eda4)
                        int32_t* esi_21 = data_20c2cf4 + (edx_51 << 2)
                        *esi_21 = (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_21)
                            | edi_12 << (ebx_6.b * 2)
                else if (arg2 s< data_63eda0)
                    int32_t* esi_20 = data_20c2cec + (edx_51 << 2)
                    *esi_20 =
                        (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_20) | edi_12 << (ebx_6.b * 2)
            else if (arg2 s< data_63ed9c)
                int32_t* esi_19 = data_20c2ce4 + (edx_51 << 2)
                *esi_19 =
                    (not.d(*((ebx_6 << 2) + &data_611400)) & *esi_19) | edi_12 << (ebx_6.b * 2)
            
            return edi_12
        
        if (arg3 s< 0x68)
            int32_t ebx_10 = arg2 & 0x80000007
            
            if (ebx_10 s< 0)
                ebx_10 = ((ebx_10 - 1) | 0xfffffff8) + 1
            
            int32_t eax_116
            int32_t edx_96
            edx_96:eax_116 = sx.q(arg2)
            edi_12 = arg4 & 0xf
            int32_t eax_117
            
            switch (arg3)
                case 0x4e
                    eax_117 = data_20c2cac
                label_551398:
                    int32_t* esi_23 = eax_117 + (((edx_96 & 7) + eax_116) s>> 3 << 2)
                    *esi_23 = (not.d(*((ebx_10 << 2) + &data_6113e0)) & *esi_23)
                        | edi_12 << (ebx_10 << 2).b
                    return edi_12
                case 0x4f
                    eax_117 = data_20c2cb4
                    goto label_551398
                case 0x50
                    eax_117 = data_20c2cbc
                    goto label_551398
                case 0x51
                    eax_117 = data_20c2cc4
                    goto label_551398
                case 0x52
                    eax_117 = data_20c2ccc
                    goto label_551398
                case 0x53
                    eax_117 = data_20c2cd4
                    goto label_551398
                case 0x54
                    eax_117 = data_20c2cdc
                    goto label_551398
            
            if (arg3 != 0x55)
                if (arg3 != 0x56)
                    if (arg3 != 0x57)
                        if (arg3 == 0x67)
                            eax_117 = data_20c2cfc
                            goto label_551398
                    else if (arg2 s< data_63ee0c)
                        eax_117 = data_20c2cf4
                        goto label_551398
                else if (arg2 s< data_63ee08)
                    eax_117 = data_20c2cec
                    goto label_551398
            else if (arg2 s< data_63ee04)
                eax_117 = data_20c2ce4
                goto label_551398
            
            return edi_12
        
        if (arg3 s< 0x82)
            int32_t ebx_14 = arg2 & 0x80000003
            
            if (ebx_14 s< 0)
                ebx_14 = ((ebx_14 - 1) | 0xfffffffc) + 1
            
            int32_t eax_122
            int32_t edx_104
            edx_104:eax_122 = sx.q(arg2)
            edi_12 = zx.d(arg4.b)
            int32_t eax_123
            
            switch (arg3)
                case 0x68
                    eax_123 = data_20c2cac
                label_551528:
                    int32_t* esi_24 = eax_123 + (((edx_104 & 3) + eax_122) s>> 2 << 2)
                    *esi_24 = (not.d(*((ebx_14 << 2) + &data_610f74)) & *esi_24)
                        | edi_12 << (ebx_14 << 3).b
                    return edi_12
                case 0x69
                    eax_123 = data_20c2cb4
                    goto label_551528
                case 0x6a
                    eax_123 = data_20c2cbc
                    goto label_551528
                case 0x6b
                    eax_123 = data_20c2cc4
                    goto label_551528
                case 0x6c
                    eax_123 = data_20c2ccc
                    goto label_551528
                case 0x6d
                    eax_123 = data_20c2cd4
                    goto label_551528
                case 0x6e
                    eax_123 = data_20c2cdc
                    goto label_551528
            
            if (arg3 != 0x6f)
                if (arg3 != 0x70)
                    if (arg3 != 0x71)
                        if (arg3 == 0x81)
                            eax_123 = data_20c2cfc
                            goto label_551528
                    else if (arg2 s< data_63ee74)
                        eax_123 = data_20c2cf4
                        goto label_551528
                else if (arg2 s< data_63ee70)
                    eax_123 = data_20c2cec
                    goto label_551528
            else if (arg2 s< data_63ee6c)
                eax_123 = data_20c2ce4
                goto label_551528
            
            return edi_12
    else
        switch (arg3)
            case 0
                *(data_20c2cac + (arg2 << 2)) = arg4
                return arg4
            case 1
                *(data_20c2cb4 + (arg2 << 2)) = arg4
                return arg4
            case 2
                *(data_20c2cbc + (arg2 << 2)) = arg4
                return arg4
            case 3
                *(data_20c2cc4 + (arg2 << 2)) = arg4
                return arg4
            case 4
                *(data_20c2ccc + (arg2 << 2)) = arg4
                return arg4
            case 5
                *(data_20c2cd4 + (arg2 << 2)) = arg4
                return arg4
            case 6
                *(data_20c2cdc + (arg2 << 2)) = arg4
                return arg4
        
        if (arg3 != 7)
            if (arg3 != 8)
                if (arg3 != 9)
                    if (arg3 == 0x19)
                        *(data_20c2cfc + (arg2 << 2)) = arg4
                else if (arg2 s< data_63ecd4)
                    *(data_20c2cf4 + (arg2 << 2)) = arg4
            else if (arg2 s< data_63ecd0)
                *(data_20c2cec + (arg2 << 2)) = arg4
        else if (arg2 s< data_63eccc)
            *(data_20c2ce4 + (arg2 << 2)) = arg4

return arg4
