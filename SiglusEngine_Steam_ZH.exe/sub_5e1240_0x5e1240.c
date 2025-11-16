// 函数: sub_5e1240
// 地址: 0x5e1240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xea0ea0eb, esi_1)

if (esi_1 s/ 0x8c u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x8c

if (0x1d41d41 - ecx_5 u>= arg2)
    return sub_5e1300(arg1, sub_5e12b0(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
