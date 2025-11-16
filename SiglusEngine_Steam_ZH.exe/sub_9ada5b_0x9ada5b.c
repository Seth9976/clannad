// 函数: sub_9ada5b
// 地址: 0x9ada5b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t ecx
void* ebp
long double st0
st0, ecx = AugmentSinCos(ebp, arg1)
char temp0 = ecx.b
ecx.b = ecx:1.b
ecx:1.b = temp0
long double result = __fpatan(st0, arg1)
ecx.b = ecx.b

if (ecx.b != 0)
    result = fconvert.t(3.1415926534682512) + fconvert.t(1.2154201012607932e-10) - result

ecx:1.b = ecx:1.b

if (ecx:1.b == 0)
    return result

return fneg(result)
