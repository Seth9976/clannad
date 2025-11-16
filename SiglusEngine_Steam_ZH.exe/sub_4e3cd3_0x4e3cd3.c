// 函数: sub_4e3cd3
// 地址: 0x4e3cd3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t ebx = arg1
char* edi_1 = arg2
sub_4e3c7c(arg3)
*(arg3 + 0x16ac) = 8

if (arg4 != 0)
    (*(arg3 + 0x14))[*(arg3 + 8)] = ebx.b
    *(arg3 + 0x14) += 1
    (*(arg3 + 0x14))[*(arg3 + 8)] = ebx:1.b
    *(arg3 + 0x14) += 1
    char* ecx_1
    ecx_1.b = ebx.b
    ecx_1.b = not.b(ecx_1.b)
    (*(arg3 + 0x14))[*(arg3 + 8)] = ecx_1.b
    *(arg3 + 0x14) += 1
    (*(arg3 + 0x14))[*(arg3 + 8)] = (not.d(ebx)).w:1.b
    *(arg3 + 0x14) += 1

if (ebx == 0)
    return 

do
    arg4 = ebx
    ebx.b = *edi_1
    (*(arg3 + 0x14))[*(arg3 + 8)] = ebx.b
    *(arg3 + 0x14) += 1
    edi_1 = &edi_1[1]
    ebx = arg4 - 1
while (arg4 != 1)
