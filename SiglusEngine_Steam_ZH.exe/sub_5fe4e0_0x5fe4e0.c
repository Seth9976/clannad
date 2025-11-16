// 函数: sub_5fe4e0
// 地址: 0x5fe4e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xdd67c8a7, esi_1)

if (esi_1 s/ 0x250 u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x250

if (0x6eb3e4 - ecx_5 u>= arg2)
    return sub_5fe5f0(arg1, sub_5fe5a0(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
