// 函数: sub_5b2160
// 地址: 0x5b2160
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
void* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    sub_54ec30(esi)
    esi += 0x2cc
while (esi != ebx)

int32_t eax = *arg1
arg1[1] = eax
return eax
