// 函数: sub_7234a0
// 地址: 0x7234a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
void* var_8_1 = arg2
uint32_t result_1 = arg3[1]
uint32_t result = result_1

if (result_1 u> arg4)
    result = arg4

if (result == 0)
    return 0

arg3[1] = result_1 - result
uint32_t ebx = result
char* ecx_2 = *arg3
uint32_t i

do
    arg2 += 1
    *(arg2 - 1) = *ecx_2
    ecx_2 = &ecx_2[1]
    i = ebx
    ebx -= 1
while (i != 1)
int32_t eax_2 = *(arg3[7] + 0x18)

if (eax_2 == 1)
    void* eax_3 = sub_7247a0(eax_2, var_8_1, arg3[0xc], result)
    *arg3 += result
    arg3[2] += result
    arg3[0xc] = eax_3
    return result

if (eax_2 == 2)
    arg3[0xc] = sub_724a10(eax_2, var_8_1, arg3[0xc], result)

*arg3 += result
arg3[2] += result
return result
