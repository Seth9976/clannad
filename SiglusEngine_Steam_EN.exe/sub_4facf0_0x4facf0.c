// 函数: sub_4facf0
// 地址: 0x4facf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t ecx = data_1bfdd30
int32_t ebx = 0
int32_t edi_2 = ecx s/ 0x3e8
int32_t ecx_2 = 0
int32_t edi_6

if (edi_2 == 2)
    ecx_2 = 1
    edi_6 = 0
else if (edi_2 == 3)
    ebx = 1
    edi_6 = 0
else if (edi_2 != 4)
    edi_6 = 0
else
    ebx = 1
    edi_6 = 1

uint32_t result = ecx s% 0x3e8 - 0x64

if (result u> 0xc8)
    data_1b8b06c = 1
else
    result = zx.d(lookup_table_4fae94[result])
    
    switch (result)
        case 0
            int32_t var_18_1 = 0
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
        label_4fae2b:
            
            if (data_1b8b06c == 0 && ebx != 0)
                return sub_492d10(result, edi_6)
        case 1
            int32_t var_18_2 = 1
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 2
            result = sub_4fab60(result, arg2, ecx_2, ecx_2, 2)
            goto label_4fae2b
        case 3
            result = sub_4fab60(result, arg2, ecx_2, ecx_2, 3)
            goto label_4fae2b
        case 4
            int32_t var_18_3 = 4
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 5
            int32_t var_18_4 = 5
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 6
            int32_t var_18_5 = 6
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 7
            int32_t var_18_6 = 7
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 8
            int32_t var_18_7 = 8
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 9
            int32_t var_18_8 = 9
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 0xa
            int32_t var_18_9 = 0xa
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 0xb
            int32_t var_18_10 = 0xb
            result = sub_4faa90(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 0xc
            result = sub_4fac30(result, arg2, ecx_2, ecx_2)
            goto label_4fae2b
        case 0xd
            data_1b8b06c = 1

return result
