// 函数: sub_571590
// 地址: 0x571590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
void* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    sub_5719b0(esi)
    esi -= 0xffffff80
while (esi != ebx)

int32_t eax = *arg1
arg1[1] = eax
return eax
