// 函数: sub_6782c0
// 地址: 0x6782c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_8_1 = 0
char* eax = std::_Syserror_map(arg2)
char const* const edx = "unknown error"

if (eax != 0)
    edx = eax

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (*edx == 0)
    sub_541eb0(arg1, edx, nullptr)
    return arg1

char const* const ecx_2 = edx

do
    eax.b = *ecx_2
    ecx_2 = &ecx_2[1]
while (eax.b != 0)

sub_541eb0(arg1, edx, ecx_2 - &ecx_2[1])
return arg1
