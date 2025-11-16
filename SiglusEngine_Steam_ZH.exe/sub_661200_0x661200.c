// 函数: sub_661200
// 地址: 0x661200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* eax = data_bac4e4
int32_t var_8_1

if (*(eax + 0x156) == 0)
    var_8_1 = 0x64
else
    var_8_1 = *(eax + 0x158)

void* eax_2 = data_bac458
void* ebx = data_bac468
int32_t esi = *(eax_2 + 0x33c)
int32_t* edi = *(eax_2 + 0x338)
sub_6de670(*(ebx + 0x178), 1)
*(ebx + 0x184) = edi
*(ebx + 0x188) = esi
*(ebx + 0x190) = 1
sub_676f90(0)
return sub_6040f0(*(ebx + 0x178), edi, nullptr, var_8_1, nullptr, 0, 0)
