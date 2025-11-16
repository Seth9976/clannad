// 函数: sub_632610
// 地址: 0x632610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xb21642c9, esi_1)

if (esi_1 s/ 0xb8 u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0xb8

if (0x1642c85 - ecx_5 u>= arg2)
    return sub_632ae0(arg1, sub_632a90(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
