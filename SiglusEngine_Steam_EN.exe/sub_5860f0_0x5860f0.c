// 函数: sub_5860f0
// 地址: 0x5860f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t esi = arg8
int32_t edi = arg6

if (edi s> esi)
    arg1 = edi
    edi = esi
    esi = arg1

int32_t var_18 = 0
int32_t var_1c = arg24
int32_t var_20 = 0
int32_t var_24 = 0
int32_t var_48 = arg23
int32_t var_4c = arg22
int32_t var_50 = arg21
int32_t var_54 = arg20
int32_t var_58 = arg19
int32_t var_5c = arg18
int32_t var_60 = arg17
int32_t var_64 = arg16
int32_t result
char ecx
result, ecx = sub_591560(arg1, arg2, arg3, arg4, arg5.b, edi.b, arg7.b, edi, arg9, arg10, arg11, 
    arg12, arg13, arg14, arg15, arg3.b)

if (edi != esi)
    int32_t var_18_1 = 0
    int32_t var_1c_1 = arg24
    int32_t var_20_1 = 0
    int32_t var_24_1 = 0
    int32_t var_48_1 = arg23
    int32_t var_4c_1 = arg22
    int32_t var_50_1 = arg21
    int32_t var_54_1 = arg20
    int32_t var_58_1 = arg19
    int32_t var_5c_1 = arg18
    int32_t var_60_1 = arg17
    int32_t var_64_1 = arg16
    result = sub_591560(result, arg2, arg3, arg4, arg5.b, esi.b, arg7.b, esi, arg9, arg10, arg11, 
        arg12, arg13, arg14, arg15, ecx)
    
    if (edi + 1 != esi)
        int32_t var_18_2 = 0
        int32_t var_1c_2 = arg24
        int32_t var_20_2 = 0
        int32_t var_24_2 = 0
        int32_t var_48_2 = arg23
        int32_t var_4c_2 = arg22
        int32_t var_50_2 = arg21
        int32_t var_54_2 = arg20
        int32_t var_58_2 = arg19
        int32_t var_5c_2 = arg18
        int32_t var_60_2 = arg17
        int32_t var_64_2 = arg16
        sub_591560(arg5, arg2, arg3, arg4, arg5.b, (edi + 1).b, arg5.b, esi - 1, arg9, arg10, 
            arg11, arg12, arg13, arg14, arg15, (edi + 1).b)
        result = esi - 1
        
        if (edi + 1 != result)
            int32_t var_18_3 = 0
            int32_t var_1c_3 = arg24
            int32_t var_20_3 = 0
            int32_t var_24_3 = 0
            int32_t var_48_3 = arg23
            int32_t var_4c_3 = arg22
            int32_t var_50_3 = arg21
            int32_t var_54_3 = arg20
            int32_t var_58_3 = arg19
            int32_t var_5c_3 = arg18
            int32_t var_60_3 = arg17
            int32_t var_64_3 = arg16
            return sub_591560(arg7, arg2, arg3, arg4, arg7.b, (edi + 1).b, arg7.b, result, arg9, 
                arg10, arg11, arg12, arg13, arg14, arg15, (edi + 1).b)

return result
