// 函数: sub_6327d0
// 地址: 0x6327d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xea0ea0eb, esi_1)

if (esi_1 s/ 0x118 u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x118

if (0xea0ea0 - ecx_5 u>= arg2)
    return sub_632d60(arg1, sub_632d10(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
