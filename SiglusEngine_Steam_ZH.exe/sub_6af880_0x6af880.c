// 函数: sub_6af880
// 地址: 0x6af880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg1
int32_t* ebx = arg1
int32_t edi = ebx[1]
int32_t esi = *ebx
int32_t eax

if (sub_6af2c0(eax, &ebx[2], arg1, edi) == 0)
    *ebx = esi
    ebx[1] = edi

int32_t result = ebx[1]
int16_t* ecx = *ebx

if (arg2 != 0)
    *arg2 = 0

if (ecx == result)
    ebx[1] = edi
    result.b = 0
    *ebx = esi
    return result

if (arg2 != 0)
    result.w = *ecx
    ecx = &ecx[1]
    *arg2 = result.w

*ebx = ecx
result.b = 1
return result
