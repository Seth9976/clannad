// 函数: sub_6f2ce0
// 地址: 0x6f2ce0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* var_8 = arg1
int32_t var_8_1 = 0

if ((arg2 & 0x40) != 0)
    sub_52e820(arg1, u"D3DCREATE_HARDWARE_VERTEXPROCESSING")
    return arg1

if ((arg2 & 0x20) != 0)
    sub_52e820(arg1, u"D3DCREATE_SOFTWARE_VERTEXPROCESSING")
    return arg1

if (arg2 s>= 0)
    sub_52e820(arg1, &data_ad93bc)
    return arg1

sub_52e820(arg1, u"D3DCREATE_MIXED_VERTEXPROCESSING")
return arg1
