// 函数: sub_5507a0
// 地址: 0x5507a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s< 0)
    return 0

if (arg1 != 0xc && arg1 != 0x12 && arg1 != 0xffffff9d && arg1 != 0xffffff9e)
    if (arg1 s< 0x1a)
        switch (arg1)
            case 0
                return *(data_20c2cac + (arg2 << 2))
            case 1
                return *(data_20c2cb4 + (arg2 << 2))
            case 2
                return *(data_20c2cbc + (arg2 << 2))
            case 3
                return *(data_20c2cc4 + (arg2 << 2))
            case 4
                return *(data_20c2ccc + (arg2 << 2))
            case 5
                return *(data_20c2cd4 + (arg2 << 2))
            case 6
                return *(data_20c2cdc + (arg2 << 2))
        
        if (arg1 != 7)
            if (arg1 != 8)
                if (arg1 != 9)
                    if (arg1 == 0x19)
                        return *(data_20c2cfc + (arg2 << 2))
                else if (arg2 s< data_63ecd4)
                    return *(data_20c2cf4 + (arg2 << 2))
            else if (arg2 s< data_63ecd0)
                return *(data_20c2cec + (arg2 << 2))
        else if (arg2 s< data_63eccc)
            return *(data_20c2ce4 + (arg2 << 2))
    else if (arg1 s< 0x34)
        int32_t ebx_2 = arg2 & 0x8000001f
        
        if (ebx_2 s< 0)
            ebx_2 = ((ebx_2 - 1) | 0xffffffe0) + 1
        
        int32_t eax_25
        int32_t edx
        edx:eax_25 = sx.q(arg2)
        int32_t edx_3 = ((edx & 0x1f) + eax_25) s>> 5
        
        switch (arg1)
            case 0x1a
                return (*(data_20c2cac + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440)) u>> ebx_2.b
            case 0x1b
                return (*(data_20c2cb4 + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440)) u>> ebx_2.b
            case 0x1c
                return (*(data_20c2cbc + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440)) u>> ebx_2.b
            case 0x1d
                return (*(data_20c2cc4 + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440)) u>> ebx_2.b
            case 0x1e
                return (*(data_20c2ccc + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440)) u>> ebx_2.b
            case 0x1f
                return (*(data_20c2cd4 + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440)) u>> ebx_2.b
            case 0x20
                return (*(data_20c2cdc + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440)) u>> ebx_2.b
        
        if (arg1 != 0x21)
            if (arg1 != 0x22)
                if (arg1 != 0x23)
                    if (arg1 == 0x33)
                        return (*(data_20c2cfc + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440))
                            u>> ebx_2.b
                else if (arg2 s< data_63ed3c)
                    return (*(data_20c2cf4 + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440))
                        u>> ebx_2.b
            else if (arg2 s< data_63ed38)
                return (*(data_20c2cec + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440)) u>> ebx_2.b
        else if (arg2 s< data_63ed34)
            return (*(data_20c2ce4 + (edx_3 << 2)) & *((ebx_2 << 2) + &data_611440)) u>> ebx_2.b
    else if (arg1 s< 0x4e)
        int32_t ebx_6 = arg2 & 0x8000000f
        
        if (ebx_6 s< 0)
            ebx_6 = ((ebx_6 - 1) | 0xfffffff0) + 1
        
        int32_t eax_49
        int32_t edx_4
        edx_4:eax_49 = sx.q(arg2)
        int32_t edx_7 = ((edx_4 & 0xf) + eax_49) s>> 4
        
        switch (arg1)
            case 0x34
                return (*(data_20c2cac + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                    u>> (ebx_6.b * 2)
            case 0x35
                return (*(data_20c2cb4 + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                    u>> (ebx_6.b * 2)
            case 0x36
                return (*(data_20c2cbc + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                    u>> (ebx_6.b * 2)
            case 0x37
                return (*(data_20c2cc4 + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                    u>> (ebx_6.b * 2)
            case 0x38
                return (*(data_20c2ccc + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                    u>> (ebx_6.b * 2)
            case 0x39
                return (*(data_20c2cd4 + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                    u>> (ebx_6.b * 2)
            case 0x3a
                return (*(data_20c2cdc + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                    u>> (ebx_6.b * 2)
        
        if (arg1 != 0x3b)
            if (arg1 != 0x3c)
                if (arg1 != 0x3d)
                    if (arg1 == 0x4d)
                        return (*(data_20c2cfc + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                            u>> (ebx_6.b * 2)
                else if (arg2 s< data_63eda4)
                    return (*(data_20c2cf4 + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                        u>> (ebx_6.b * 2)
            else if (arg2 s< data_63eda0)
                return (*(data_20c2cec + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                    u>> (ebx_6.b * 2)
        else if (arg2 s< data_63ed9c)
            return (*(data_20c2ce4 + (edx_7 << 2)) & *((ebx_6 << 2) + &data_611400))
                u>> (ebx_6.b * 2)
    else if (arg1 s< 0x68)
        int32_t ebx_10 = arg2 & 0x80000007
        
        if (ebx_10 s< 0)
            ebx_10 = ((ebx_10 - 1) | 0xfffffff8) + 1
        
        int32_t eax_73
        int32_t edx_8
        edx_8:eax_73 = sx.q(arg2)
        
        switch (arg1)
            case 0x4e
                return (*(data_20c2cac + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                    & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
            case 0x4f
                return (*(data_20c2cb4 + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                    & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
            case 0x50
                return (*(data_20c2cbc + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                    & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
            case 0x51
                return (*(data_20c2cc4 + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                    & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
            case 0x52
                return (*(data_20c2ccc + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                    & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
            case 0x53
                return (*(data_20c2cd4 + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                    & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
            case 0x54
                return (*(data_20c2cdc + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                    & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
        
        if (arg1 != 0x55)
            if (arg1 != 0x56)
                if (arg1 != 0x57)
                    if (arg1 == 0x67)
                        return (*(data_20c2cfc + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                            & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
                else if (arg2 s< data_63ee0c)
                    return (*(data_20c2cf4 + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                        & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
            else if (arg2 s< data_63ee08)
                return (*(data_20c2cec + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                    & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
        else if (arg2 s< data_63ee04)
            return (*(data_20c2ce4 + (((edx_8 & 7) + eax_73) s>> 3 << 2))
                & *((ebx_10 << 2) + &data_6113e0)) u>> (ebx_10 << 2).b
    else if (arg1 s< 0x82)
        int32_t ebx_14 = arg2 & 0x80000003
        
        if (ebx_14 s< 0)
            ebx_14 = ((ebx_14 - 1) | 0xfffffffc) + 1
        
        int32_t eax_77
        int32_t edx_12
        edx_12:eax_77 = sx.q(arg2)
        
        switch (arg1)
            case 0x68
                return (*(data_20c2cac + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                    & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
            case 0x69
                return (*(data_20c2cb4 + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                    & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
            case 0x6a
                return (*(data_20c2cbc + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                    & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
            case 0x6b
                return (*(data_20c2cc4 + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                    & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
            case 0x6c
                return (*(data_20c2ccc + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                    & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
            case 0x6d
                return (*(data_20c2cd4 + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                    & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
            case 0x6e
                return (*(data_20c2cdc + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                    & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
        
        if (arg1 != 0x6f)
            if (arg1 != 0x70)
                if (arg1 != 0x71)
                    if (arg1 == 0x81)
                        return (*(data_20c2cfc + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                            & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
                else if (arg2 s< data_63ee74)
                    return (*(data_20c2cf4 + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                        & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
            else if (arg2 s< data_63ee70)
                return (*(data_20c2cec + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                    & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b
        else if (arg2 s< data_63ee6c)
            return (*(data_20c2ce4 + (((edx_12 & 3) + eax_77) s>> 2 << 2))
                & *((ebx_14 << 2) + &data_610f74)) u>> (ebx_14 << 3).b

return 0
