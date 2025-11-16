// 函数: sub_4bdf80
// 地址: 0x4bdf80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4
int32_t edi = arg3

if (edi s> esi)
    arg1 = edi
    edi = esi
    esi = arg1

int32_t ecx = arg5

if (arg2 s> ecx)
    arg1 = arg2
    arg2 = ecx
    ecx = arg1

data_208c48c = esi
data_208c490 = ecx
data_208046c = edi
data_208c494 = esi - edi + 1
data_208c488 = arg2
data_208c498 = ecx - arg2 + 1
