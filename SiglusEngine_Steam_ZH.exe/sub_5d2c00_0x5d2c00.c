// 函数: sub_5d2c00
// 地址: 0x5d2c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = data_bac484
char eax = sub_626870(arg1, 1)

if (eax == 0)
    return eax

sub_5d2ea0(esi)
sub_5d26f0(esi)
(*(esi + 0x124) * 0x2e60)[*(esi + 0x10c)] = 1
int32_t edx_1 = *(esi + 0x124) * 0x2e60
int32_t ecx_4 = *(esi + 0x10c)
*(edx_1 + ecx_4 + 0x20c) = arg2
*(edx_1 + ecx_4 + 0x210) = arg3
int32_t* ecx_7 = *(esi + 0x124) * 0x2e60 + 4 + *(esi + 0x10c)

if (ecx_7 != arg1)
    sub_52e3c0(ecx_7, arg1, 0, 0xffffffff)

*(esi + 0x120) = *(esi + 0x124)
sub_5d2ea0(esi)
int32_t eax_5
eax_5.b = 1
return eax_5
