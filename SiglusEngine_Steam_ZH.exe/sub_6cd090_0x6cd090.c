// 函数: sub_6cd090
// 地址: 0x6cd090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0

if (arg2 == 0)
    sub_6d4470(arg3, "Image width is zero in IHDR")
    edi = 1
else if (arg2 u> 0x7fffffff)
    sub_6d4470(arg3, "Invalid image width in IHDR")
    edi = 1

if (((arg2 + 7) & 0xfffffff8) u> 0x1ffffff8)
    sub_6d4470(arg3, "Image width is too large for this architecture")
    edi = 1

if (arg2 u> *(arg3 + 0x270))
    sub_6d4470(arg3, "Image width exceeds user limit in IHDR")
    edi = 1

if (arg4 == 0)
    sub_6d4470(arg3, "Image height is zero in IHDR")
    edi = 1
else if (arg4 u> 0x7fffffff)
    sub_6d4470(arg3, "Invalid image height in IHDR")
    edi = 1

if (arg4 u> *(arg3 + 0x274))
    sub_6d4470(arg3, "Image height exceeds user limit in IHDR")
    edi = 1

if (arg5 != 1 && arg5 != 2 && arg5 != 4 && arg5 != 8 && arg5 != 0x10)
    sub_6d4470(arg3, "Invalid bit depth in IHDR")
    edi = 1

if (arg6 s< 0 || arg6 == 1 || arg6 == 5 || arg6 s> 6)
    sub_6d4470(arg3, "Invalid color type in IHDR")
    edi = 1

if (arg6 != 3)
    if ((arg6 == 2 || arg6 == 4 || arg6 == 6) && arg5 s< 8)
        sub_6d4470(arg3, "Invalid color type/bit depth combination in IHDR")
        edi = 1
else if (arg5 s> 8)
    sub_6d4470(arg3, "Invalid color type/bit depth combination in IHDR")
    edi = 1

if (arg7 s>= 2)
    sub_6d4470(arg3, "Unknown interlace method in IHDR")
    edi = 1

if (arg8 != 0)
    sub_6d4470(arg3, "Unknown compression method in IHDR")
    edi = 1

if ((*(arg3 + 0x74) & 0x1000) != 0 && *(arg3 + 0x248) != 0)
    sub_6d4470(arg3, "MNG features are not allowed in a PNG datastream")

int32_t* result = arg9

if (result == 0)
label_6cd258:
    
    if (edi != 1)
        return result
else
    if ((*(arg3 + 0x248) & 4) == 0 || result != 0x40 || (*(arg3 + 0x74) & 0x1000) != 0)
        result = sub_6d4470(arg3, "Unknown filter method in IHDR")
        edi = 1
    else if (arg6 != 2 && arg6 != 6)
        result = sub_6d4470(arg3, "Unknown filter method in IHDR")
        edi = 1
    
    if ((*(arg3 + 0x74) & 0x1000) == 0)
        goto label_6cd258
    
    sub_6d4470(arg3, "Invalid filter method in IHDR")

sub_6d42e0(arg3, "Invalid IHDR data")
noreturn
