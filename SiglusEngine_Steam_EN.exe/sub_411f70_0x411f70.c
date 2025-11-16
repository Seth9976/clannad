// 函数: sub_411f70
// 地址: 0x411f70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
int32_t ebx

if (arg3 != 0)
    ebx = arg4
    
    if (arg3 == 1)
        if (esi s< data_70300c)
            esi = data_70300c
        
        if (ebx s< data_7030dc)
            ebx = data_7030dc
else
    esi = data_70300c
    ebx = data_7030dc

int32_t result = sub_411350(arg3)

if (arg3 s>= 0x21)
    return result

return sub_411500(result, esi, arg3, ebx)
