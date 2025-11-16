// 函数: sub_4fb3c0
// 地址: 0x4fb3c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = data_1bfdd30
int32_t ebx = 0
int32_t esi_2 = edi s/ 0x3e8
uint32_t result = esi_2 * 0x3e8
int32_t edi_1 = edi s% 0x3e8
int32_t esi_5

if (esi_2 == 3)
    ebx = 1
    esi_5 = 0
else if (esi_2 != 4)
    esi_5 = 0
else
    ebx = 1
    esi_5 = 1

if (edi_1 s> 0x190)
    data_1b8b06c = 1
else if (edi_1 == 0x190)
    result = sub_4fb330(arg2, arg2)
label_4fb4f1:
    
    if (data_1b8b06c == 0 && ebx != 0)
        return sub_493fe0(esi_5) __tailcall
else if (edi_1 - 0x64 u> 0xc8)
    data_1b8b06c = 1
else
    result = zx.d(*(edi_1 + 0x4fb4ec))
    
    switch (result)
        case 0
            int32_t var_10_1 = 0
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 1
            int32_t var_10_2 = 1
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 2
            int32_t var_10_3 = 2
            result = sub_4fb2a0(result, arg2, arg2)
            goto label_4fb4f1
        case 3
            int32_t var_10_4 = 3
            result = sub_4fb2a0(result, arg2, arg2)
            goto label_4fb4f1
        case 4
            int32_t var_10_5 = 4
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 5
            int32_t var_10_6 = 5
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 6
            int32_t var_10_7 = 6
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 7
            int32_t var_10_8 = 7
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 8
            int32_t var_10_9 = 8
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 9
            int32_t var_10_10 = 9
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 0xa
            int32_t var_10_11 = 0xa
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 0xb
            int32_t var_10_12 = 0xb
            result = sub_4fb250(result, arg2, arg2)
            goto label_4fb4f1
        case 0xc
            result = sub_4fb2f0(arg2, arg2)
            goto label_4fb4f1
        case 0xd
            data_1b8b06c = 1

return result
