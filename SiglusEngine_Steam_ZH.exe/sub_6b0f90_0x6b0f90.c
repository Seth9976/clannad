// 函数: sub_6b0f90
// 地址: 0x6b0f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xe6c2b449, esi_1)

if (esi_1 s/ 0x11c u>= 1)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x11c

if (0xe6c2b4 - ecx_5 u>= 1)
    return sub_6b1050(arg1, sub_6b1000(arg1, ecx_5 + 1))

sub_743191("vector<T> too long")
noreturn
