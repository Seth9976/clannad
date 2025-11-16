// 函数: sub_4e76e0
// 地址: 0x4e76e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0xc8)
    *arg4 = *(arg5 + 0x11600)
    return 1

if (arg3 s>= 0x82)
    if (data_702fc0 != 0)
        sub_4e74e0(0xffffffff)
else if (arg2 s< 0 || arg2 s>= (&data_63ecb0)[arg3])
    if (data_702fc0 != 0)
        sub_4e74e0(arg3)
        *arg4 = 0
        return 0
else if (arg3 s>= 0x1a)
    int32_t ecx_14
    int32_t esi_1
    
    if (arg3 s< 0x34)
        ecx_14 = arg2 & 0x1f
        esi_1 = arg2 s>> 5
        
        if (arg3 - 0x1a u<= 0x19)
            switch (arg3 + &jump_table_4e7eb4[6]:2)
                case &lookup_table_4e7ee8
                    *arg4 = (*((ecx_14 << 2) + &data_611440) & *(arg5 + (esi_1 << 2))) u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[1]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x1f40) & *((ecx_14 << 2) + &data_611440))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[2]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x3e80) & *((ecx_14 << 2) + &data_611440))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[3]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x5dc0) & *((ecx_14 << 2) + &data_611440))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[4]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x7d00) & *((ecx_14 << 2) + &data_611440))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[5]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x9c40) & *((ecx_14 << 2) + &data_611440))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[6]
                    *arg4 = (*((ecx_14 << 2) + &data_611440) & *((esi_1 << 2) + &data_13262d0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[7]
                    *arg4 = (*(data_702fe0 + (esi_1 << 2)) & *((ecx_14 << 2) + &data_611440))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[8]
                    *arg4 = (*(data_702fd4 + (esi_1 << 2)) & *((ecx_14 << 2) + &data_611440))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[9]
                    *arg4 = (*(data_702fc8 + (esi_1 << 2)) & *((ecx_14 << 2) + &data_611440))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[0xb]
                    *arg4 = (*((ecx_14 << 2) + &data_611440) & *((esi_1 << 2) + &data_715e9c))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7ee8[0x19]
                    *arg4 = (*((ecx_14 << 2) + &data_611440) & *((esi_1 << 2) + &data_1328210))
                        u>> ecx_14.b
                    return 1
    else if (arg3 s< 0x4e)
        int32_t edi_2 = arg2 & 0xf
        esi_1 = arg2 s>> 4
        ecx_14 = edi_2 * 2
        
        if (arg3 - 0x34 u<= 0x19)
            switch (arg3)
                case 0x34
                    *arg4 = (*((edi_2 << 2) + &data_611400) & *(arg5 + (esi_1 << 2))) u>> ecx_14.b
                    return 1
                case 0x35
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x1f40) & *((edi_2 << 2) + &data_611400))
                        u>> ecx_14.b
                    return 1
                case 0x36
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x3e80) & *((edi_2 << 2) + &data_611400))
                        u>> ecx_14.b
                    return 1
                case 0x37
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x5dc0) & *((edi_2 << 2) + &data_611400))
                        u>> ecx_14.b
                    return 1
                case 0x38
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x7d00) & *((edi_2 << 2) + &data_611400))
                        u>> ecx_14.b
                    return 1
                case 0x39
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x9c40) & *((edi_2 << 2) + &data_611400))
                        u>> ecx_14.b
                    return 1
                case 0x3a
                    *arg4 = (*((edi_2 << 2) + &data_611400) & *((esi_1 << 2) + &data_13262d0))
                        u>> ecx_14.b
                    return 1
                case 0x3b
                    *arg4 = (*(data_702fe0 + (esi_1 << 2)) & *((edi_2 << 2) + &data_611400))
                        u>> ecx_14.b
                    return 1
                case 0x3c
                    *arg4 = (*(data_702fd4 + (esi_1 << 2)) & *((edi_2 << 2) + &data_611400))
                        u>> ecx_14.b
                    return 1
                case 0x3d
                    *arg4 = (*(data_702fc8 + (esi_1 << 2)) & *((edi_2 << 2) + &data_611400))
                        u>> ecx_14.b
                    return 1
                case 0x3f
                    *arg4 = (*((edi_2 << 2) + &data_611400) & *((esi_1 << 2) + &data_715e9c))
                        u>> ecx_14.b
                    return 1
                case 0x4d
                    *arg4 = (*((edi_2 << 2) + &data_611400) & *((esi_1 << 2) + &data_1328210))
                        u>> ecx_14.b
                    return 1
    else if (arg3 s>= 0x68)
        int32_t edi_4 = arg2 & 3
        esi_1 = arg2 s>> 2
        ecx_14 = edi_4 << 3
        
        if (arg3 - 0x68 u<= 0x19)
            switch (arg3 + &jump_table_4e7f54[7])
                case &lookup_table_4e7fd8
                    *arg4 = (*((edi_4 << 2) + &data_610f74) & *(arg5 + (esi_1 << 2))) u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[1]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x1f40) & *((edi_4 << 2) + &data_610f74))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[2]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x3e80) & *((edi_4 << 2) + &data_610f74))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[3]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x5dc0) & *((edi_4 << 2) + &data_610f74))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[4]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x7d00) & *((edi_4 << 2) + &data_610f74))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[5]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x9c40) & *((edi_4 << 2) + &data_610f74))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[6]
                    *arg4 = (*((edi_4 << 2) + &data_610f74) & *((esi_1 << 2) + &data_13262d0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[7]
                    *arg4 = (*(data_702fe0 + (esi_1 << 2)) & *((edi_4 << 2) + &data_610f74))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[8]
                    *arg4 = (*(data_702fd4 + (esi_1 << 2)) & *((edi_4 << 2) + &data_610f74))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[9]
                    *arg4 = (*(data_702fc8 + (esi_1 << 2)) & *((edi_4 << 2) + &data_610f74))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[0xb]
                    *arg4 = (*((edi_4 << 2) + &data_610f74) & *((esi_1 << 2) + &data_715e9c))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7fd8[0x19]
                    *arg4 = (*((edi_4 << 2) + &data_610f74) & *((esi_1 << 2) + &data_1328210))
                        u>> ecx_14.b
                    return 1
    else
        int32_t edi_3 = arg2 & 7
        esi_1 = arg2 s>> 3
        ecx_14 = edi_3 << 2
        
        if (arg3 - 0x4e u<= 0x19)
            switch (&lookup_table_4e7f38[2 + arg3])
                case &lookup_table_4e7f88
                    *arg4 = (*((edi_3 << 2) + &data_6113e0) & *(arg5 + (esi_1 << 2))) u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[1]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x1f40) & *((edi_3 << 2) + &data_6113e0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[2]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x3e80) & *((edi_3 << 2) + &data_6113e0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[3]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x5dc0) & *((edi_3 << 2) + &data_6113e0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[4]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x7d00) & *((edi_3 << 2) + &data_6113e0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[5]
                    *arg4 = (*(arg5 + (esi_1 << 2) + 0x9c40) & *((edi_3 << 2) + &data_6113e0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[6]
                    *arg4 = (*((edi_3 << 2) + &data_6113e0) & *((esi_1 << 2) + &data_13262d0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[7]
                    *arg4 = (*(data_702fe0 + (esi_1 << 2)) & *((edi_3 << 2) + &data_6113e0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[8]
                    *arg4 = (*(data_702fd4 + (esi_1 << 2)) & *((edi_3 << 2) + &data_6113e0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[9]
                    *arg4 = (*(data_702fc8 + (esi_1 << 2)) & *((edi_3 << 2) + &data_6113e0))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[0xb]
                    *arg4 = (*((edi_3 << 2) + &data_6113e0) & *((esi_1 << 2) + &data_715e9c))
                        u>> ecx_14.b
                    return 1
                case &lookup_table_4e7f88[0x19]
                    *arg4 = (*((edi_3 << 2) + &data_6113e0) & *((esi_1 << 2) + &data_1328210))
                        u>> ecx_14.b
                    return 1
else
    switch (arg3)
        case 0
            *arg4 = *(arg5 + (arg2 << 2))
            return 1
        case 1
            *arg4 = *(arg5 + (arg2 << 2) + 0x1f40)
            return 1
        case 2
            *arg4 = *(arg5 + (arg2 << 2) + 0x3e80)
            return 1
        case 3
            *arg4 = *(arg5 + (arg2 << 2) + 0x5dc0)
            return 1
        case 4
            *arg4 = *(arg5 + (arg2 << 2) + 0x7d00)
            return 1
        case 5
            *arg4 = *(arg5 + (arg2 << 2) + 0x9c40)
            return 1
        case 6
            *arg4 = *((arg2 << 2) + &data_13262d0)
            return 1
        case 7
            *arg4 = *(data_702fe0 + (arg2 << 2))
            return 1
        case 8
            *arg4 = *(data_702fd4 + (arg2 << 2))
            return 1
        case 9
            *arg4 = *(data_702fc8 + (arg2 << 2))
            return 1
        case 0xb
            *arg4 = *((arg2 << 2) + &data_715e9c)
            return 1
        case 0x19
            *arg4 = *((arg2 << 2) + &data_1328210)
            return 1

*arg4 = 0
return 0
