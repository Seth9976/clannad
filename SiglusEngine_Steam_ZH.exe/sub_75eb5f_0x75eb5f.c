// 函数: sub_75eb5f
// 地址: 0x75eb5f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t charType = arg3
wchar16 srcStr
arg1 = srcStr

if (arg1 == 0xffff)
    return 0

uint32_t eax_2

if (arg1 u>= 0x100)
    BOOL eax_3 = GetStringTypeW(1, &srcStr, 1, &charType)
    int32_t eax_4 = neg.d(eax_3)
    eax_2 = zx.d((sbb.d(eax_4, eax_4, eax_3 != 0)).w) & zx.d(charType.w)
else
    eax_2 = zx.d((*data_b4cd48)[zx.d(arg1)])

return eax_2 & zx.d(arg4)
