// 函数: sub_57ad20
// 地址: 0x57ad20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4 + (arg2 << 3)
int32_t i = 0
void* edi_2 = result * 0xff8 + 0x109a860

do
    if (*(&(&data_1090ae4)[arg3 * 0x75] + i + 0xcc) != 0)
        int32_t var_10
        int32_t var_c
        int32_t var_8
        int32_t ecx_1
        result, ecx_1 =
            sub_576a80(&var_10, arg5, edi_2, arg6, arg7, arg8, &var_10, &var_c, &var_8, &arg4, 1)
        
        if (result.b != 0)
            int32_t var_20_1 = 0
            int32_t var_24_2 = 0xff
            int32_t var_28_2 = 0
            int32_t var_2c_2 = 0
            int32_t var_30_2 = 0
            result = sub_58bcc0(result, data_702fec, data_702fe8, data_702ff0, var_10, var_c, 
                var_8, arg4, data_702ff4, (data_702ff8).b, data_702ffc, data_703000, ecx_1, 0, 0, 
                0, 0, 0, 0, 0, 0, 0, 0xff, 0, 0, 0, 0, 0)
    
    i += 1
    edi_2 += 0x14
while (i s< 0x10)

return result
