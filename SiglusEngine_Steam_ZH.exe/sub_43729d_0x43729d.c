// 函数: sub_43729d
// 地址: 0x43729d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x10)
int32_t edi
int32_t var_c = edi

if (eax != 0 && arg3 == 0)
    arg3 = *(eax + 0x14)

void*** eax_2 = sub_42cfa1(0x24)
void*** eax_3

if (eax_2 == 0)
    eax_3 = nullptr
else
    eax_3 = sub_46b911(eax_2, arg2, arg3, 0, 0, *(arg1 + 0x10))

if (eax_3 != 0)
    *(arg1 + 0x10) = eax_3
    return 0

sub_437200(arg1, nullptr, 0, "internal error: out of memory")
return 0x8007000e
