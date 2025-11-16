// 函数: sub_5b6c20
// 地址: 0x5b6c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xa80a80a9, esi_1)

if (esi_1 s/ 0x30c u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x30c

if (0x540540 - ecx_5 u>= arg2)
    return sub_5b6e80(arg1, sub_5b6e30(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
