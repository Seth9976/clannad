// 函数: sub_4dee20
// 地址: 0x4dee20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax_1

if (arg1 == 0)
    eax_1 = nullptr
else
    eax_1 = &arg1[-0xe]

if (arg2 == 0)
    return 0x80004003

int32_t* edx = *(eax_1 + 0x3c)

if (edx == 0)
    *arg2 = 0
    return 0x80004005

arg1 = edx
jump(**edx)
