// 函数: sub_470780
// 地址: 0x470780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
int32_t result = 0xff
arg1.b = *(edi + 0xd0)

if (arg1.b != 0xff)
    result = zx.d(arg1.b) * 0xff s/ 0xff

arg1.b = *(edi + 0xd1)

if (arg1.b != 0xff)
    result = zx.d(arg1.b) * result s/ 0xff

arg1.b = *(edi + 0xd2)

if (arg1.b != 0xff)
    result = zx.d(arg1.b) * result s/ 0xff

arg1.b = *(edi + 0xd3)

if (arg1.b != 0xff)
    result = zx.d(arg1.b) * result s/ 0xff

arg1.b = *(edi + 0xd4)

if (arg1.b != 0xff)
    result = zx.d(arg1.b) * result s/ 0xff

arg1.b = *(edi + 0xd5)

if (arg1.b != 0xff)
    result = zx.d(arg1.b) * result s/ 0xff

arg1.b = *(edi + 0xd6)

if (arg1.b != 0xff)
    result = zx.d(arg1.b) * result s/ 0xff

arg1.b = *(edi + 0xd7)

if (arg1.b != 0xff)
    result = zx.d(arg1.b) * result s/ 0xff

if (result s< 0)
    *arg2 = 0
    return result

if (result s> 0xff)
    result = 0xff

*arg2 = result.b
return result
