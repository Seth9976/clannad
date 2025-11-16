// 函数: sub_5b21a0
// 地址: 0x5b21a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
void* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    sub_6efc80(esi)
    esi += 0x130
while (esi != ebx)

int32_t eax = *arg1
arg1[1] = eax
return eax
