// 函数: sub_59fc00
// 地址: 0x59fc00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)

if (esi_1 s/ 0x38 u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x38

if (0x4924924 - ecx_5 u>= arg2)
    return sub_59fcc0(arg1, sub_59fc70(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
