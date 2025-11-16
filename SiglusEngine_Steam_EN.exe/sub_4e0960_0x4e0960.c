// 函数: sub_4e0960
// 地址: 0x4e0960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

HRESULT result = 0

if (*(arg1 + 0x28) == 0)
    result = CoCreateInstance(&data_610418, 0, CLSCTX_INPROC_SERVER, &data_61e678, arg1 + 0x28)

if (*(arg1 + 0x28) != 0 || result s>= 0)
    *arg2 = *(arg1 + 0x28)
    int32_t* ecx_1 = *(arg1 + 0x28)
    (*(*ecx_1 + 4))(ecx_1)

return result
