// 函数: sub_49f544
// 地址: 0x49f544
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* eax
void* ecx
eax, ecx = sub_49f181(0x80)
int32_t* esi

if (eax == 0)
    esi = nullptr
else
    ecx = eax
    esi = sub_52e900(ecx)

if (esi == 0)
    return 0xffffffff

void* var_10_1 = ecx
void* var_14_1 = ecx
var_14_1.q = fconvert.d(fconvert.t(arg5))
sub_49f000(esi, arg2, arg3, arg4, var_14_1)
return sub_49f2cd(arg1, esi)
