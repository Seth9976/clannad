// 函数: sub_4e8000
// 地址: 0x4e8000
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 == 0xc8)
    *(arg5 + 0x11600) = arg4
    return 1

if (arg3 s>= 0x82)
    if (data_702fc0 != 0)
        sub_4e74e0(0xffffffff)
else if (arg2 s< 0 || arg2 s>= (&data_63ecb0)[arg3])
    if (data_702fc0 != 0)
        sub_4e74e0(arg3)
else if (arg3 s>= 0x1a)
    int32_t edx
    int32_t esi_2
    
    if (arg3 s< 0x34)
        edx = arg2 s>> 5
        esi_2 = arg4 & 1
        int32_t edi_2 = arg2 & 0x1f
        
        if (arg3 - 0x1a u<= 0x19)
            switch (arg3 + &jump_table_4e89a0[6]:2)
                case &lookup_table_4e89d4
                    void* edx_1 = arg5 + (edx << 2)
                    *edx_1 = (not.d(*((edi_2 << 2) + &data_611440)) & *edx_1) | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[1]
                    void* edx_2 = arg5 + (edx << 2)
                    *(edx_2 + 0x1f40) = (not.d(*((edi_2 << 2) + &data_611440)) & *(edx_2 + 0x1f40))
                        | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[2]
                    void* edx_3 = arg5 + (edx << 2)
                    *(edx_3 + 0x3e80) = (not.d(*((edi_2 << 2) + &data_611440)) & *(edx_3 + 0x3e80))
                        | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[3]
                    void* edx_4 = arg5 + (edx << 2)
                    *(edx_4 + 0x5dc0) = (not.d(*((edi_2 << 2) + &data_611440)) & *(edx_4 + 0x5dc0))
                        | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[4]
                    void* edx_5 = arg5 + (edx << 2)
                    *(edx_5 + 0x7d00) = (not.d(*((edi_2 << 2) + &data_611440)) & *(edx_5 + 0x7d00))
                        | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[5]
                    void* edx_6 = arg5 + (edx << 2)
                    *(edx_6 + 0x9c40) = (not.d(*((edi_2 << 2) + &data_611440)) & *(edx_6 + 0x9c40))
                        | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[6]
                    *((edx << 2) + &data_13262d0) = (not.d(*((edi_2 << 2) + &data_611440))
                        & *((edx << 2) + &data_13262d0)) | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[7]
                    int32_t* edx_7 = data_702fe0 + (edx << 2)
                    *edx_7 = (not.d(*((edi_2 << 2) + &data_611440)) & *edx_7) | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[8]
                    int32_t* edx_8 = data_702fd4 + (edx << 2)
                    *edx_8 = (not.d(*((edi_2 << 2) + &data_611440)) & *edx_8) | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[9]
                    int32_t* edx_9 = data_702fc8 + (edx << 2)
                    *edx_9 = (not.d(*((edi_2 << 2) + &data_611440)) & *edx_9) | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[0xb]
                    *((edx << 2) + &data_715e9c) = (not.d(*((edi_2 << 2) + &data_611440))
                        & *((edx << 2) + &data_715e9c)) | esi_2 << edi_2.b
                    return 1
                case &lookup_table_4e89d4[0x19]
                    *((edx << 2) + &data_1328210) = (not.d(*((edi_2 << 2) + &data_611440))
                        & *((edx << 2) + &data_1328210)) | esi_2 << edi_2.b
                    return 1
    else
        char ebx_1
        
        if (arg3 s< 0x4e)
            int32_t edi_3 = arg2 & 0xf
            edx = arg2 s>> 4
            esi_2 = arg4 & 3
            ebx_1 = edi_3.b * 2
            
            if (arg3 - 0x34 u<= 0x19)
                switch (arg3)
                    case 0x34
                        void* edx_10 = arg5 + (edx << 2)
                        *edx_10 = (not.d(*((edi_3 << 2) + &data_611400)) & *edx_10) | esi_2 << ebx_1
                        return 1
                    case 0x35
                        void* edx_11 = arg5 + (edx << 2)
                        *(edx_11 + 0x1f40) = (not.d(*((edi_3 << 2) + &data_611400))
                            & *(edx_11 + 0x1f40)) | esi_2 << ebx_1
                        return 1
                    case 0x36
                        void* edx_12 = arg5 + (edx << 2)
                        *(edx_12 + 0x3e80) = (not.d(*((edi_3 << 2) + &data_611400))
                            & *(edx_12 + 0x3e80)) | esi_2 << ebx_1
                        return 1
                    case 0x37
                        void* edx_13 = arg5 + (edx << 2)
                        *(edx_13 + 0x5dc0) = (not.d(*((edi_3 << 2) + &data_611400))
                            & *(edx_13 + 0x5dc0)) | esi_2 << ebx_1
                        return 1
                    case 0x38
                        void* edx_14 = arg5 + (edx << 2)
                        *(edx_14 + 0x7d00) = (not.d(*((edi_3 << 2) + &data_611400))
                            & *(edx_14 + 0x7d00)) | esi_2 << ebx_1
                        return 1
                    case 0x39
                        void* edx_15 = arg5 + (edx << 2)
                        *(edx_15 + 0x9c40) = (not.d(*((edi_3 << 2) + &data_611400))
                            & *(edx_15 + 0x9c40)) | esi_2 << ebx_1
                        return 1
                    case 0x3a
                        *((edx << 2) + &data_13262d0) = (not.d(*((edi_3 << 2) + &data_611400))
                            & *((edx << 2) + &data_13262d0)) | esi_2 << ebx_1
                        return 1
                    case 0x3b
                        int32_t* edx_16 = data_702fe0 + (edx << 2)
                        *edx_16 = (not.d(*((edi_3 << 2) + &data_611400)) & *edx_16) | esi_2 << ebx_1
                        return 1
                    case 0x3c
                        int32_t* edx_17 = data_702fd4 + (edx << 2)
                        *edx_17 = (not.d(*((edi_3 << 2) + &data_611400)) & *edx_17) | esi_2 << ebx_1
                        return 1
                    case 0x3d
                        int32_t* edx_18 = data_702fc8 + (edx << 2)
                        *edx_18 = (not.d(*((edi_3 << 2) + &data_611400)) & *edx_18) | esi_2 << ebx_1
                        return 1
                    case 0x3f
                        *((edx << 2) + &data_715e9c) = (not.d(*((edi_3 << 2) + &data_611400))
                            & *((edx << 2) + &data_715e9c)) | esi_2 << ebx_1
                        return 1
                    case 0x4d
                        *((edx << 2) + &data_1328210) = (not.d(*((edi_3 << 2) + &data_611400))
                            & *((edx << 2) + &data_1328210)) | esi_2 << ebx_1
                        return 1
        else if (arg3 s>= 0x68)
            int32_t edi_5 = arg2 & 3
            edx = arg2 s>> 2
            esi_2 = arg4 & 0xff
            ebx_1 = (edi_5 << 3).b
            
            if (arg3 - 0x68 u<= 0x19)
                switch (arg3 + &jump_table_4e8a40[7])
                    case &lookup_table_4e8ac4
                        void* edx_28 = arg5 + (edx << 2)
                        *edx_28 = (not.d(*((edi_5 << 2) + &data_610f74)) & *edx_28) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[1]
                        void* edx_29 = arg5 + (edx << 2)
                        *(edx_29 + 0x1f40) = (not.d(*((edi_5 << 2) + &data_610f74))
                            & *(edx_29 + 0x1f40)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[2]
                        void* edx_30 = arg5 + (edx << 2)
                        *(edx_30 + 0x3e80) = (not.d(*((edi_5 << 2) + &data_610f74))
                            & *(edx_30 + 0x3e80)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[3]
                        void* edx_31 = arg5 + (edx << 2)
                        *(edx_31 + 0x5dc0) = (not.d(*((edi_5 << 2) + &data_610f74))
                            & *(edx_31 + 0x5dc0)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[4]
                        void* edx_32 = arg5 + (edx << 2)
                        *(edx_32 + 0x7d00) = (not.d(*((edi_5 << 2) + &data_610f74))
                            & *(edx_32 + 0x7d00)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[5]
                        void* edx_33 = arg5 + (edx << 2)
                        *(edx_33 + 0x9c40) = (not.d(*((edi_5 << 2) + &data_610f74))
                            & *(edx_33 + 0x9c40)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[6]
                        *((edx << 2) + &data_13262d0) = (not.d(*((edi_5 << 2) + &data_610f74))
                            & *((edx << 2) + &data_13262d0)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[7]
                        int32_t* edx_34 = data_702fe0 + (edx << 2)
                        *edx_34 = (not.d(*((edi_5 << 2) + &data_610f74)) & *edx_34) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[8]
                        int32_t* edx_35 = data_702fd4 + (edx << 2)
                        *edx_35 = (not.d(*((edi_5 << 2) + &data_610f74)) & *edx_35) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[9]
                        int32_t* edx_36 = data_702fc8 + (edx << 2)
                        *edx_36 = (not.d(*((edi_5 << 2) + &data_610f74)) & *edx_36) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[0xb]
                        *((edx << 2) + &data_715e9c) = (not.d(*((edi_5 << 2) + &data_610f74))
                            & *((edx << 2) + &data_715e9c)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8ac4[0x19]
                        *((edx << 2) + &data_1328210) = (not.d(*((edi_5 << 2) + &data_610f74))
                            & *((edx << 2) + &data_1328210)) | esi_2 << ebx_1
                        return 1
        else
            int32_t edi_4 = arg2 & 7
            edx = arg2 s>> 3
            esi_2 = arg4 & 0xf
            ebx_1 = (edi_4 << 2).b
            
            if (arg3 - 0x4e u<= 0x19)
                switch (&lookup_table_4e8a24[2 + arg3])
                    case &lookup_table_4e8a74
                        void* edx_19 = arg5 + (edx << 2)
                        *edx_19 = (not.d(*((edi_4 << 2) + &data_6113e0)) & *edx_19) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[1]
                        void* edx_20 = arg5 + (edx << 2)
                        *(edx_20 + 0x1f40) = (not.d(*((edi_4 << 2) + &data_6113e0))
                            & *(edx_20 + 0x1f40)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[2]
                        void* edx_21 = arg5 + (edx << 2)
                        *(edx_21 + 0x3e80) = (not.d(*((edi_4 << 2) + &data_6113e0))
                            & *(edx_21 + 0x3e80)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[3]
                        void* edx_22 = arg5 + (edx << 2)
                        *(edx_22 + 0x5dc0) = (not.d(*((edi_4 << 2) + &data_6113e0))
                            & *(edx_22 + 0x5dc0)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[4]
                        void* edx_23 = arg5 + (edx << 2)
                        *(edx_23 + 0x7d00) = (not.d(*((edi_4 << 2) + &data_6113e0))
                            & *(edx_23 + 0x7d00)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[5]
                        void* edx_24 = arg5 + (edx << 2)
                        *(edx_24 + 0x9c40) = (not.d(*((edi_4 << 2) + &data_6113e0))
                            & *(edx_24 + 0x9c40)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[6]
                        *((edx << 2) + &data_13262d0) = (not.d(*((edi_4 << 2) + &data_6113e0))
                            & *((edx << 2) + &data_13262d0)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[7]
                        int32_t* edx_25 = data_702fe0 + (edx << 2)
                        *edx_25 = (not.d(*((edi_4 << 2) + &data_6113e0)) & *edx_25) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[8]
                        int32_t* edx_26 = data_702fd4 + (edx << 2)
                        *edx_26 = (not.d(*((edi_4 << 2) + &data_6113e0)) & *edx_26) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[9]
                        int32_t* edx_27 = data_702fc8 + (edx << 2)
                        *edx_27 = (not.d(*((edi_4 << 2) + &data_6113e0)) & *edx_27) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[0xb]
                        *((edx << 2) + &data_715e9c) = (not.d(*((edi_4 << 2) + &data_6113e0))
                            & *((edx << 2) + &data_715e9c)) | esi_2 << ebx_1
                        return 1
                    case &lookup_table_4e8a74[0x19]
                        *((edx << 2) + &data_1328210) = (not.d(*((edi_4 << 2) + &data_6113e0))
                            & *((edx << 2) + &data_1328210)) | esi_2 << ebx_1
                        return 1
else
    switch (arg3)
        case 0
            *(arg5 + (arg2 << 2)) = arg4
            return 1
        case 1
            *(arg5 + (arg2 << 2) + 0x1f40) = arg4
            return 1
        case 2
            *(arg5 + (arg2 << 2) + 0x3e80) = arg4
            return 1
        case 3
            *(arg5 + (arg2 << 2) + 0x5dc0) = arg4
            return 1
        case 4
            *(arg5 + (arg2 << 2) + 0x7d00) = arg4
            return 1
        case 5
            *(arg5 + (arg2 << 2) + 0x9c40) = arg4
            return 1
        case 6
            *((arg2 << 2) + &data_13262d0) = arg4
            return 1
        case 7
            *(data_702fe0 + (arg2 << 2)) = arg4
            return 1
        case 8
            *(data_702fd4 + (arg2 << 2)) = arg4
            return 1
        case 9
            *(data_702fc8 + (arg2 << 2)) = arg4
            return 1
        case 0xb
            *((arg2 << 2) + &data_715e9c) = arg4
            return 1
        case 0x19
            *((arg2 << 2) + &data_1328210) = arg4
            return 1

return 0
