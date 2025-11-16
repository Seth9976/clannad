// 函数: sub_4dee90
// 地址: 0x4dee90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    return 0x8002000b

if (arg3 == 0)
    return 0x80004003

int32_t ecx = data_6400ec
HRESULT result = 0

if (ecx == 0)
    result = sub_4d9ec0(arg2)
    ecx = data_6400ec

*arg3 = ecx
int32_t* ecx_1 = data_6400ec

if (ecx_1 == 0)
    return result

(*(*ecx_1 + 4))(ecx_1)
return 0
