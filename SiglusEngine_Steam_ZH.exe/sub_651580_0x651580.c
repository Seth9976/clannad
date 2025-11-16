// 函数: sub_651580
// 地址: 0x651580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xae4c415d, esi_1)

if (esi_1 s/ 0xbc u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0xbc

if (0x15c9882 - ecx_5 u>= arg2)
    return sub_651900(arg1, sub_6518b0(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
